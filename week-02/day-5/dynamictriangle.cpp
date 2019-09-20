#include "draw.h"
#include "random"
#include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>



void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0,0,0,255);
    double x1;
    double x2;
    double y1;
    double y2;
    double z= 60;
    double size=10;
    y1=size*2;
    x1=400-(size/2);
    x2=400+(size/2);
    for (int i = 1; i < z; ++i) {
        SDL_RenderDrawLine(gRenderer,x1,y1,x2,y1);
        y1+=size;
        x1-=size/2;
        x2+=size/2;
    }

    x1=400;
    y1=size;
    x2=400+(size/2)-(z*(size/2));
    y2=(z*size);
    for (int i = 1; i < z; ++i) {
        SDL_RenderDrawLine(gRenderer,x1,y1,x2,y2);
        x1+=size/2;
        y1+=size;
        x2+=size;
    }

    x1=400;
    y1=size;
    x2=400-(size/2)+(z*(size/2));
    y2=(z*size);
    for (int i = 1; i < z; ++i) {
        SDL_RenderDrawLine(gRenderer,x1,y1,x2,y2);
        x1-=size/2;
        y1+=size;
        x2-=size;
    }





}




