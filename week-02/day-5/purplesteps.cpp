 #include "draw.h"
 #include "random"


 void draw(SDL_Renderer* gRenderer){
    int w=10;
    int h=10;
    int x=10;
    int y=10;
     for (int i = 0; i < 20; ++i) {
         if(x<640||y<480){
             SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0xFF);
             SDL_Rect empt = { x-1, y-1, w+2, w+2};
             SDL_RenderFillRect( gRenderer, &empt );
             SDL_SetRenderDrawColor(gRenderer, 200, 0, 255, 0xFF);
             SDL_Rect fillRect = { x, y, w, h};
             SDL_RenderFillRect( gRenderer, &fillRect );
             y+=w+2;
             x+=h+2;

         }

     }

     //choose color

    //create a rectangle

    //draw rectangle


 }
