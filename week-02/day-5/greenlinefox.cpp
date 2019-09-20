#include "draw.h"
#include "random"
#include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
int boxdraw(int cord[][2],SDL_Renderer* gRenderer){
    for (int i = 0; i < 3; ++i) {
        SDL_RenderDrawLine(gRenderer, cord[i][0], cord[i][1], cord[i+1][0], cord[i+1][1]);
    }
    SDL_RenderDrawLine(gRenderer, cord[3][0], cord[3][1], cord[0][0], cord[0][1]);
}

int drawfox(int cord[][2],SDL_Renderer* gRenderer){
    for (int i = 0; i < 7; ++i) {
        SDL_RenderDrawLine(gRenderer, cord[i][0], cord[i][1], cord[i+1][0], cord[i+1][1]);
    }

}
void draw(SDL_Renderer* gRenderer) {
    // Create a function that takes 1 parameter:
    // An array of {x, y} points
    // and connects them with green lines.
    // Connect these to get a box: {{10, 10}, {290,  10}, {290, 290}, {10, 290}}
    // Connect these: {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}}
    int box[4][2]={{10, 10}, {290,  10}, {290, 290}, {10, 290}};
    int fox[8][2]={{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}};

    //choose color
    SDL_SetRenderDrawColor(gRenderer, 0 /*R*/, 255 /*G*/, 0 /*B*/, 0xFF /*A*/);
    //draw line
    boxdraw(box, gRenderer);
    drawfox(fox,gRenderer);
}




