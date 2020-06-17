#include "background.h"

//-------------------------------------------------------------//
void initialiser_background(background *backg)
{
backg->background=IMG_Load("background.png");

backg->position_fond.x=0;
backg->position_fond.y=0;

backg->position_fond.w = backg->background->w;
backg->position_fond.h = backg->background->h;
}
//--------------------------------------------------------------//

//-------------------------------------------------------------//
//-------------------------------------------------------------//

void showBckg (SDL_Surface * screen, background *backg)
{
SDL_BlitSurface(backg->background,&backg->position_fond,screen,NULL);

}
//--------------------------------------------------------------//

void init_back_choix(back_choix *background_choix)
{
background_choix->background=IMG_Load("choix_perso.png");
background_choix->pos_background.x=0; 
background_choix->pos_background.y=0;
}

//-------------------------------------------------------------//
void affiche_background_choix(back_choix *background_choix ,SDL_Surface *screen)
{


SDL_BlitSurface(background_choix->background,NULL,screen,&background_choix->pos_background);
} 

//-------------------------------------------------------------//




//------------------------------------------------------------//

//-------------------------------------------------------------//

void liberebackg(background *backg)
{
SDL_FreeSurface(backg->background);
}
//-------------------------------------------------------------//
