 #include "draw.h"
 #include "random"


 void draw(SDL_Renderer* gRenderer){
     // Draw a box that has different colored lines on each edge.
     // The center of the box should align with the center of the screen.
     //choose color
     SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 100, 100, 540, 100);

     SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 255 /*G*/, 0x00 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 100, 100, 100, 380);

     SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 0x00 /*G*/, 255 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 100, 380, 540, 380);

     SDL_SetRenderDrawColor(gRenderer, 0xFF /*R*/, 100 /*G*/, 200 /*B*/, 0xFF /*A*/);
     SDL_RenderDrawLine(gRenderer, 540, 380, 540, 100);


 }
