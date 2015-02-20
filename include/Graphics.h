#ifndef H_GRAPHICS
#define H_GRAPHICS

#include <iostream>
#include <string>

#include "SDL2/SDL.h"

class WindowManager
{
public:
    WindowManager();
    ~WindowManager();
    bool initWindow(std::string name, int flags=SDL_INIT_VIDEO);

private:
    SDL_Window* window;
};

#endif