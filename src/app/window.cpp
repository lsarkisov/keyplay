#include "./window.h"
#include "../evt/notify.h"
#include "./board.cpp"

namespace keyplay {
    
    namespace win {

        Window::Window(int x, int y, int w, int h, const char* title)
            : Fl_Window(x, y, w, h, title)
            {
                x_ = x;
                y_ = y;
                w_ = w;
                h_ = h;
                title_ = title;

                observer();
                show();
            }
        void Window::observer()
        {
            std::unique_ptr<board::Board> board(
                new board::Board());
            
            evt::EventNotify evt;
            evt.attach(board.get());
            evt.call();
        }
    }
}