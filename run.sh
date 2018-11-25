g++ -std=c++17 -c main.cpp -I dist/FLTK \
    && g++ main.o -o main -L dist/FLTK/lib -lfltk_forms \
       -lfltk_images \
       -lfltk \
       -lfltk_gl \
       -framework Cocoa \
    && ./main

