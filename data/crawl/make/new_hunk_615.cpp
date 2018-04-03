
$details = "";

# TEST 0: Recursive

run_make_test('
ugh = Goodbye
foo = $(bar)
bar = ${ugh}
ugh = Hello
all: ; @echo $(foo)
',
              '', "Hello\n");

# TEST 1: Simple

run_make_test('
bar = Goodbye
foo := $(bar)
bar = ${ugh}
ugh = Hello
all: ; @echo $(foo)
',
              '', "Goodbye\n");

# TEST 2: Append to recursive

run_make_test('
foo = Hello
ugh = Goodbye
foo += $(bar)
bar = ${ugh}
ugh = Hello
all: ; @echo $(foo)
',
              '', "Hello Hello\n");

# TEST 3: Append to simple

run_make_test('
foo := Hello
ugh = Goodbye
bar = ${ugh}
foo += $(bar)
ugh = Hello
all: ; @echo $(foo)
',
              '', "Hello Goodbye\n");

# TEST 4: Conditional pre-set

run_make_test('
foo = Hello
ugh = Goodbye
bar = ${ugh}
foo ?= $(bar)
ugh = Hello
all: ; @echo $(foo)
',
              '', "Hello\n");

# TEST 5: Conditional unset

run_make_test('
ugh = Goodbye
bar = ${ugh}
foo ?= $(bar)
ugh = Hello
all: ; @echo $(foo)
',
              '', "Hello\n");

1;
