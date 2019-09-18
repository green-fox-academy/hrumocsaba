 #include "draw.h"
 #include "random"
 #include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>
int draw(int arr[][2]){




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
     for (int i = 0; i < 3; ++i) {
         SDL_RenderDrawLine(gRenderer, box[i][0], box[i][1], box[i+1][0], box[i+1][1]);
     }
     SDL_RenderDrawLine(gRenderer, box[3][0], box[3][1], box[0][0], box[0][1]);
     for (int i = 0; i < 7; ++i) {
         SDL_RenderDrawLine(gRenderer, fox[i][0], fox[i][1], fox[i+1][0], fox[i+1][1]);
     }




}




