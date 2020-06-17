#ifndef JOUER_H_
#define JOUER_H_
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "player.h"
#include "background.h"
#include"sous_menu.h"
#include"collision.h"
#include "entite.h"
void jouer(pers *p,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,int *donnner,enemy en,enemies en1);
void jouer2(pers *p2,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,int *donnner,enemy en,enemies en1);
void choix_perso(pers *p,pers *p2,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,back_choix *background_choix,enemy en,enemies en1);

#endif // JOUER_H_
