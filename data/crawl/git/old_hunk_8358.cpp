    "rollback" : P4RollBack()
}

if len(sys.argv[1:]) == 0:
    printUsage(commands.keys())
    sys.exit(2)

cmd = ""
cmdName = sys.argv[1]
try:
    cmd = commands[cmdName]
except KeyError:
    print "unknown command %s" % cmdName
    print ""
    printUsage(commands.keys())
    sys.exit(2)

options = cmd.options
cmd.gitdir = gitdir

args = sys.argv[2:]

if len(options) > 0:
    options.append(optparse.make_option("--git-dir", dest="gitdir"))

    parser = optparse.OptionParser(cmd.usage.replace("%prog", "%prog " + cmdName),
                                   options,
                                   description = cmd.description,
                                   formatter = HelpFormatter())

    (cmd, args) = parser.parse_args(sys.argv[2:], cmd);

verbose = cmd.verbose
if cmd.needsGit:
    gitdir = cmd.gitdir
    if len(gitdir) == 0:
        gitdir = ".git"
        if not isValidGitDir(gitdir):
            gitdir = read_pipe("git rev-parse --git-dir").strip()
            if os.path.exists(gitdir):
                cdup = read_pipe("git rev-parse --show-cdup").strip()
                if len(cdup) > 0:
                    os.chdir(cdup);

    if not isValidGitDir(gitdir):
        if isValidGitDir(gitdir + "/.git"):
            gitdir += "/.git"
        else:
            die("fatal: cannot locate git repository at %s" % gitdir)

    os.environ["GIT_DIR"] = gitdir

if not cmd.run(args):
    parser.print_help()
