#ifndef keyplay_notify_Header
#define keyplay_notify_Header

#include "./listen.h"

#include <vector>
#include <algorithm>

namespace keyplay {

  namespace evt {

    class EventNotify {
      private:
        std::vector<EventListen*> listeners;
      public:
        void attach(EventListen* listener)
        {
          listeners.push_back(listener);
        }
        void call()
        {
          std::for_each(listeners.begin(), listeners.end(), [](EventListen* listener) {
            listener->notify();
          });
        }
    }; 
  }
}

#endif