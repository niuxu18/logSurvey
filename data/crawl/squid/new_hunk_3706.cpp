    bool abortOnBadEntry(const char *abortReason);

#if USE_ADAPTATION
    void startAdaptation(const Adaptation::ServiceGroupPointer &group, HttpRequest *cause);
    void adaptVirginReplyBody(const char *buf, ssize_t len);
    void cleanAdaptation();
    virtual bool doneWithAdaptation() const;   /**< did we end ICAP communication? */