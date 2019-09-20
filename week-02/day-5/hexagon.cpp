#include "draw.h"
#include "random"
#include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>



void draw(SDL_Renderer* gRenderer) {
    int i =0;
    int size=12;
    int start=20*size;
    int side=3*size;
    int  x=start;
    int y=start;
    int hexn=4;
    int row=0;

    SDL_SetRenderDrawColor(gRenderer, 0,0,0,255);
    // hexagonok a legszelső sorig
    //sorok száma
    for (row = 0; row < 5; ++row) {
        //hexagonok száma
        for (int j = 0; j < hexn; ++j) {
            //hexagon coordinates
            int hexa[6][2] = {{x,        y},
                              {x + side, side / 2 + y},
                              {x + side, y + side + (side / 2)},
                              {x,        y + (2 * side)},
                              {x - side, y + side + (side / 2)},
                              {x - side, side / 2 + y}};

            //1 hexagon kirajzolása
            for (i = 0; i < 5; ++i){
                SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[i + 1][0], hexa[i + 1][1]);
            }
            SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[0][0], hexa[0][1]);
            x = x + side * 2;
        }
        //új hexagon poziciója jobbra
        x = start - (row * side);
        y = start + (row * (side + (side / 2)));
        x = x - side;
        y = y + side * 2 - (side / 2);
        hexn += 1;


        //lefele hexagonok
        if (row == 4) {
            int row2 = row;
            x = (start - (row2 * side)) + side;
            y = start + ((row2 + 1) * (side + (side / 2)));
            hexn=hexn-1;
            for (row2 = 0; row2 < row; ++row2) {
                hexn--;
                x=(5*size+((row2 * side)) + side)+side;
                for (int j = hexn; j > 0; --j) {
                    int hexa[6][2] = {{x,        y},
                                      {x + side, side / 2 + y},
                                      {x + side, y + side + (side / 2)},
                                      {x,        y + (2 * side)},
                                      {x - side, y + side + (side / 2)},
                                      {x - side, side / 2 + y}};

                    for (i = 0; i < 5; ++i) {
                        SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[i + 1][0], hexa[i + 1][1]);
                    }
                    SDL_RenderDrawLine(gRenderer, hexa[i][0], hexa[i][1], hexa[0][0], hexa[0][1]);
                    x = x + side * 2;
                }
                x = x + side;
                y = y + side * 2 - (side / 2);
            }
        }
    }
}




