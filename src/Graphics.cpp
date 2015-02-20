#include "Graphics.h"

WindowManager::WindowManager()
{
    this->window = NULL;
}
WindowManager::~WindowManager()
{
    SDL_DestroyWindow(this->window);
    SDL_Quit();
}
bool WindowManager::initWindow(std::string name, int flags)
{
    SDL_Init(SDL_INIT_VIDEO);
    this->window = SDL_CreateWindow(name.c_str(),SDL_WINDOWPOS_UNDEFINED,
                                                 SDL_WINDOWPOS_UNDEFINED,
                                                 640,
                                                 480,
                                                 SDL_WINDOW_SHOWN);
    return !(this->window == NULL);
}