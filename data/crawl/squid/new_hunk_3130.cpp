/**
\defgroup AsyncJobs Asynchronous Jobs
\ingroup Components
 
\section Terminology Terminology

- \b Job: an AsyncJob object.
- \b Creator: the code creating the job. Usually the Initiator.
- \b Start: the act of calling AsyncStart with a job pointer.
- \b Initiator: the code starting the job. Usually the Creator.

\section Life Typical life cycle

-# Creator creates and initializes a job.
-# Initiator starts the job. If Initiator expects
to communicate with the started job, then it stores the job pointer
returned by AsyncStart.
-# The job's start() method is called. The method usually schedules
some I/O or registers to receive some other callbacks.
-# The job runs and does what it is supposed to do. This usually involves
scheduling I/O, setting timeouts, receiving Comm or Store callbacks, and
then notifying Initiator of the final result.
-# The job reaches its goal or encounters an error condition.
-# The swanSong() method is called.
-# The job object is destroyed.


If you want to do something before starting the job, do it in the constructor
or some custom method that the job creator will call _before_ calling
AsyncStart():

    std::auto_ptr<MyJob> job(new MyJob(...)); // sync/blocking
    job->prepare(...); // sync/blocking
    job->prepareSomethingElse(...); // sync/blocking
    AsyncStart(job.release()); // non-blocking

If you do not need complex preparations, it is better to do this instead:

    AsyncStart(new MyJob(...));

Keep in mind that you have no async debugging, cleanup, and protections until
you call AsyncStart with a job pointer.


\section Rules Basic rules

- To start a job, use AsyncStart. Do not call start() directly. There
are examples in the code.

- Never call swanSong() directly. If you are outside an AsyncCall
handler, and want to kill the job, then call deleteThis(). If you are
inside an AsyncCall handler, you have several options for job termination:

  -# Call mustStop(reason) for errors that require further processing in
the same method(s) chain, below/after the mustStop() call. Efficient.

  -# Throw (via Must or directly) for errors that do not require further
processing in the same method(s) chain, below/after the mustStop() call.
Inefficient but simple and allows exiting from deeply nested method calls.

  -# Otherwise, just finish the call. Your doneAll() should return true
and the job will terminate successfully.

swanSong() will be called automatically in all of these cases when the
job is being terminated. It is a general cleanup method, like a
destructor. The only difference is that a destructor must not throw.


- Do not assume swanSong() is called in some perfectly nice job state.
The job code or the code it calls may throw at any time after start()
was called. The entry may be gone, the Abort may have been called, the
fd may have been closed, etc.


- Never call deleteThis() in contexts other than those documented above.
It is a hack for the old-style code. You can avoid it and other
old-style special precautions altogether if you convert sync calls into
async ones. This is especially easy for old-style calls that have only
one parameter ("data") or two simple parameters.


- In swanSong, always call swanSong() of the parent, after you are done
cleaning up your job. It does not matter whether the [current] parent
swanSong() does nothing.


- If a job does not have a doneAll() method implemented, it is probably
buggy. Any job must know what it wants to accomplish. Please note that
doneAll() is for defining the successful termination goal/condition.
Errors are handled by mustStop() or throw, as discussed above.

Similarly, if your doneAll() implementation looks like "return isDone;",
you are doing it wrong. Compute the condition directly rather than
expecting various job methods to maintain some isDone variable correctly.


- If a job does Comm I/O, it probably needs a Comm closing handler.

- If a job stores a StoreEntry, it probably needs an entry Abort handler.

- Ask yourself what the user will see/experience when the job throws,
which could happen as early as in the start() method (technically, it
can happen even earlier, during job creation and initialization). Are you
OK with that?


*/