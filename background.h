#ifndef BACKGROUND_H_
#define BACKGROUND_H_
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>

typedef struct 
{
    SDL_Surface *background;
    SDL_Rect position_fond;
}background;
typedef struct
{
  SDL_Surface *masque;
  SDL_Rect position_masque;
}masque;

typedef struct

{
   SDL_Surface *background;
   SDL_Rect pos_background;	
}back_choix;

void initialiser_background(background *backg);

void init_back_choix(back_choix *background_choix);
void affiche_background_choix(back_choix *background_choix ,SDL_Surface *screen);
void showBckg (SDL_Surface * screen, background *backg);
void liberebackg(background *backg);

#endif // BACKGROUND_H_
