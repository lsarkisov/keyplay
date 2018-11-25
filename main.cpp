#include "./src/FLTK.h"
#include "./src/app/window.cpp"

#include <iostream>

int main()
{
  try {
    keyplay::win::Window win {0, 0, 655, 440, "Hello"};
    return Fl::run();
  } catch(std::exception &e)
  {
    std::clog << typeid(e).name() << " exeption in main: " << e.what() << std::endl;
    return EXIT_FAILURE;
  }

  std::clog << "Good bay\n";
} 
