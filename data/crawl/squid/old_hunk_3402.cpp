
void Adaptation::Icap::ServiceRep::noteFailure()
{
    ++theSessionFailures;
    debugs(93,4, HERE << " failure " << theSessionFailures << " out of " <<
           TheConfig.service_failure_limit << " allowed " << status());

    if (isSuspended)
        return;

    if (TheConfig.service_failure_limit >= 0 &&
            theSessionFailures > TheConfig.service_failure_limit)
        suspend("too many failures");

    // TODO: Should bypass setting affect how much Squid tries to talk to
