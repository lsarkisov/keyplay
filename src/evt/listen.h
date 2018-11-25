#ifndef keyplay_listen_Header
#define keyplay_listen_Header

namespace keyplay {
  namespace evt {
    class EventListen {
      public:
        virtual void notify() = 0;
    }; 
  }
}

#endif