 #include "draw.h"
 #include "random"


 void draw(SDL_Renderer* gRenderer){
//choose color
     SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 0xFF);
     SDL_RenderDrawLine(gRenderer,320,0, 320,480);
     SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 0xFF);
     SDL_RenderDrawLine(gRenderer,0,240, 640,240);


 }
