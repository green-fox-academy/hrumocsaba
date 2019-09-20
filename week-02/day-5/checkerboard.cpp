 #include "draw.h"
 #include "random"


 void draw(SDL_Renderer* gRenderer) {
     int w = 40;
     int h = 40;
     int x = 0;
     int y = 0;
     for (int i = 0; i < 60; ++i) {
         SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0xFF);
         SDL_Rect rect = {x, y, w, h};
         SDL_RenderFillRect(gRenderer, &rect);
         x=x+w*2;
         SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 0xFF);
         SDL_Rect rectb = {x-40, y+40, w, h};
         SDL_RenderFillRect(gRenderer, &rectb);
         if(x>640){
             x=0;
             y=y+(h*2);
         }

     }

}



