#include "draw.h"
#include "random"
#include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>



void draw(SDL_Renderer* gRenderer) {
    int i =0;
    int  inti=200;
    int side=70;
    SDL_SetRenderDrawColor(gRenderer, 0,0,0,255);
    for (int j = 0; j < 5; ++j) {
        int hexa[6][2]={{inti,inti},{inti+side,side/2+inti},{inti+side,inti+side+(side/2)},{inti,inti+(2*side)},{inti-side,inti+side+(side/2)},{inti-side,side/2+inti}};
        for (i = 0; i <5; ++i) {
            SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[i + 1][0], hexa[i + 1][1]);
        }
        SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[0][0], hexa[0][1]);
        for (int k = 0; k < 5; ++k) {


            int hexa[6][2]={{inti,inti},{inti+side,side/2+inti},{inti+side,inti+side+(side/2)},{inti,inti+(2*side)},{inti-side,inti+side+(side/2)},{inti-side,side/2+inti}};
            for (i = 0; i <5; ++i) {
                SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[i + 1][0], hexa[i + 1][1]);
            }
            SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[0][0], hexa[0][1]);

        }
        inti+=side*1.34;

    }





}




