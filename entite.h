#ifndef ENTITE_H_
#define ENTITE_H_
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "background.h"
struct enemie
{SDL_Surface *coin[6];
int i;
SDL_Rect posenemy;


};
typedef struct enemie enemy;




struct enemie1
{SDL_Surface *gauche[3];
SDL_Surface *droite[3];
SDL_Rect posenemies;
int L;
int R;
}; 
typedef struct enemie1 enemies ;

void initialise(enemies *en1);
void init (enemy *en);
enemy animer(enemy en , SDL_Surface *screen );
enemies deplacement(enemies en1 , SDL_Surface *screen);

#endif // ENTITE_H_
