#ifndef keyplay_win_Header
#define keyplay_win_Header

#include "../FLTK.h"

namespace keyplay {

    namespace win {

        class Window
            : public Fl_Window
        {
            public:
                Window() = delete;
                Window(int x, int y, int w, int h, const char* title);
                void observer();
            private:
                int x_, y_, w_, h_;
                const char* title_;
        };
    }
}

#endif