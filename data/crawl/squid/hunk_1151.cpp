         currentStart = current_time;
 
     debugs(93,4, HERE << "start " << context << " level=" << concurrencyLevel
-           << " time=" << pastTime << ' ' << this);
+           << " time=" << tvToMsec(pastTime) << ' ' << this);
 }
 
 void Adaptation::Icap::History::stop(const char *context)
