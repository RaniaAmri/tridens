#include"jouer.h"
void jouer2(pers *p2,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,int *donnner,enemy en,enemies en1)
{
static int k=0;
static int x=0;
int a;
int donner=1;
int done=1;
int z;
while(donner)
{SDL_Event event;

showBckg(screen,backg);
en1= deplacement(en1 , screen);
en= animer(en ,  screen );
switch(x)
{
case 0:
depart(screen,p2); //position de depart
break;
case 1:
droite(screen,p2,a); //deplacement à droite avec souris
break;
case 2:
gauche(screen,p2,a); //deplacement à gauche avec souris
break;
case 3:
bouger_droite(screen,p2,backg); //deplacement à droite avec clavier et scrolling droite 
break;
case 4:
bouger_gauche(screen,p2,backg); //deplacement à gauche avec clavier et scrolling gauche
break;
}//fin switch x
if( Collision_Bounding_Box (p2 ,&en1) ==1)
{
texte_ttf_alerte(screen, ttf_alerte);}



condition_deplacement_souris(&k,p2,a,&x); //condition deplacement avec souris

                      while(SDL_PollEvent(&event))
                      {     switch(event.type)
                            {
                            case SDL_QUIT:
                               donner=0;
			       *doner=0;
			       *donnner=0;
                               break;

                            case SDL_MOUSEBUTTONUP:
                                if((event.button.button==SDL_BUTTON_LEFT))    
                            	 {   
                                 a=event.button.x; 
				 k=1;
                                 }                                    
                               break;

			   case SDL_KEYDOWN:
				if (event.key.keysym.sym==SDLK_RIGHT)
				x=3;
				else
				if (event.key.keysym.sym==SDLK_LEFT)
				x=4;      
				else
				if(event.key.keysym.sym==SDLK_ESCAPE)
				{
				done=1;
				menu_pause(screen,b,back_sousmenu,p2,backg,doner,&donner,&done,donnner);
				}
			      break;

			   case SDL_KEYUP:
			        if(event.key.keysym.sym==SDLK_RIGHT)
			        x=0;
			        else
			        if(event.key.keysym.sym==SDLK_LEFT)
			        x=0;
			     break;
			    }//fin switch event
		      }//fin while poll
SDL_Flip(screen);
}//fin done
liberer_personnage(p2);
Mix_ResumeMusic();
screen=SDL_SetVideoMode(1565,850,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
}
void jouer(pers *p,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,int *donnner,enemy en,enemies en1)
{
static int k=0;
static int x=0;
int a;
int donner=1;
int done=1;
int z;
while(donner)
{SDL_Event event;

showBckg(screen,backg);
en1= deplacement(en1 , screen);
en= animer(en ,  screen );
switch(x)
{
case 0:
depart(screen,p); //position de depart
break;
case 1:
droite(screen,p,a); //deplacement à droite avec souris
break;
case 2:
gauche(screen,p,a); //deplacement à gauche avec souris
break;
case 3:
bouger_droite(screen,p,backg); //deplacement à droite avec clavier et scrolling droite 
break;
case 4:
bouger_gauche(screen,p,backg); //deplacement à gauche avec clavier et scrolling gauche
break;
}//fin switch x
if( Collision_Bounding_Box (p ,&en1) ==1)
{
texte_ttf_alerte(screen, ttf_alerte);}



condition_deplacement_souris(&k,p,a,&x); //condition deplacement avec souris

                      while(SDL_PollEvent(&event))
                      {     switch(event.type)
                            {
                            case SDL_QUIT:
                                donner=0;
			       *doner=0;
			       *donnner=0;
                               break;

                            case SDL_MOUSEBUTTONUP:
                                if((event.button.button==SDL_BUTTON_LEFT))    
                            	 {   
                                 a=event.button.x; 
				 k=1;
                                 }                                    
                               break;

			   case SDL_KEYDOWN:
				if (event.key.keysym.sym==SDLK_RIGHT)
				x=3;
				else
				if (event.key.keysym.sym==SDLK_LEFT)
				x=4;      
				else
				if(event.key.keysym.sym==SDLK_ESCAPE)
				{
				done=1;
				menu_pause(screen,b,back_sousmenu,p,backg,doner,&donner,&done,donnner);
				}
			      break;

			   case SDL_KEYUP:
			        if(event.key.keysym.sym==SDLK_RIGHT)
			        x=0;
			        else
			        if(event.key.keysym.sym==SDLK_LEFT)
			        x=0;
			     break;
			    }//fin switch event
		      }//fin while poll
SDL_Flip(screen);
}//fin done
liberer_personnage(p);
Mix_ResumeMusic();
screen=SDL_SetVideoMode(1565,850,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
}
void choix_perso(pers *p,pers *p2,background *backg,background_sousmenu *back_sousmenu,bouton *b,SDL_Surface *screen,int *doner,alerte *ttf_alerte,back_choix *background_choix,enemy en,enemies en1)
{

int donnner=1;

while(donnner)
{
affiche_background_choix(background_choix ,screen);

SDL_Event event;
while(SDL_PollEvent(&event))
                      {     switch(event.type)
                            {
                            case SDL_QUIT:
                               donnner=0;
			       *doner=0;
                               break;
			   case SDL_MOUSEBUTTONUP:
                                if((event.button.button==SDL_BUTTON_LEFT)&&(event.motion.x>=400&& event.motion.x<=410+255 && event.motion.y>=210 && event.motion.y<=220+330)) 
				{
				initialiser_background(backg);
				init_perso2(p2);
				screen=SDL_SetVideoMode(1200,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
				jouer2(p2,backg,back_sousmenu,b,screen,doner,ttf_alerte,&donnner,en,en1);
				}
				else
				if((event.button.button==SDL_BUTTON_LEFT)&&(event.motion.x>=970&& event.motion.x<=980+255 && event.motion.y>=210 && event.motion.y<=220+330)) 
				{
				initialiser_background(backg);
				initialiserperso(p);
				screen=SDL_SetVideoMode(1200,600,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
				jouer(p,backg,back_sousmenu,b,screen,doner,ttf_alerte,&donnner,en,en1);
				}
			   break;
			   }//fin switch event
	              }//fin while event

SDL_Flip(screen);
}//fin while donnner


}
