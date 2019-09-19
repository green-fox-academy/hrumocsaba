#include "draw.h"
#include "random"
#include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>



void draw(SDL_Renderer* gRenderer) {

    int dist=14;
    SDL_SetRenderDrawColor(gRenderer,0,0,255,255);
    for (int i = 0; i < 1+(SCREEN_WIDTH/2)/dist; ++i) {
        SDL_RenderDrawLine(gRenderer, i*15, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - (1+i*dist));
    }
    for (int i = 0; i < 1+(SCREEN_WIDTH/2)/dist; ++i) {
        SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH-(i*15), SCREEN_HEIGHT / 2-1, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - (1+i*dist));
    }
    for (int i = 0; i < 1+(SCREEN_WIDTH/2)/dist; ++i) {
        SDL_RenderDrawLine(gRenderer, i*15, SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + (1+i*dist));
    }
    for (int i = 0; i < 1+(SCREEN_WIDTH/2)/dist; ++i) {
        SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH-(i*15), SCREEN_HEIGHT / 2, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + (1+i*dist));
    }



}




