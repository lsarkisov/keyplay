#include "./board.h"

namespace keyplay {

    namespace board {

      Board::Board()
      {
        
        for(size_t i = 0; i < buttons.size(); i++)
        {
          button = new Fl_Button(
            buttons[i].x * scale,
            buttons[i].y * scale,
            buttons[i].w * scale,
            buttons[i].h * scale,
            buttons[i].lable
          );
        }
        
        // std::for_each(buttons.begin(), buttons.end(), [&](Button& btn) {
          
        // });
      }

      Board::~Board()
      {
        delete button;
      }

      void Board::notify()
      {
        std::cout << "Notification!!!\n";
      }
    }
}