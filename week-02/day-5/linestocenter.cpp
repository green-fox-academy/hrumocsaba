 #include "draw.h"
 #include "random"
 #include "iostream"
#include <stdio.h>      /* printf, NULL */
#include <stdlib.h>     /* srand, rand */
#include <time.h>

 void draw(SDL_Renderer* gRenderer) {
     // Create a function that draws a single line and takes 2 parameters:
     // The x and y coordinates of the line's starting point
     // and draws a line from that point to the center of the canvas.
     // Fill the canvas with lines from the edges, every 20 px, to the center.



     int i=0;
     int j=0;
     for (i = 0; i <= 640; i+=20) {
         SDL_SetRenderDrawColor(gRenderer,0,0,0,255);
         SDL_RenderDrawLine(gRenderer,i,j,320,240);
     }
     j=480;
     for (i = 0; i <= 640; i+=20) {
         SDL_SetRenderDrawColor(gRenderer,0,0,0,255);
         SDL_RenderDrawLine(gRenderer,i,j,320,240);
     }
     i=0;
     for (j = 0; j <= 480; j+=20) {
         SDL_SetRenderDrawColor(gRenderer,0,0,0,255);
         SDL_RenderDrawLine(gRenderer,i,j,320,240);
     }
     i=640;
     for (j = 0; j <= 480; j+=20) {
         SDL_SetRenderDrawColor(gRenderer,0,0,0,255);
         SDL_RenderDrawLine(gRenderer,i,j,320,240);
     }



}



