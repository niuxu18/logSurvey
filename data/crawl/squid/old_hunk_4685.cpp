    void echoMore();

    virtual bool doneAll() const;

    virtual void doStop();
    void stopReceiving();
    void stopSending(bool nicely);
    void stopWriting(bool nicely);
