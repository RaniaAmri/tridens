#include "collision.h"
/*(0-pas de collision   1 collision)*/
int Collision_Bounding_Box (pers *p ,enemies *en1) 
{

	int colli =1 ; 
struct rect_collision  rect1,rect2 ; 

rect1.position.x=p->position_joueur.x ;
rect1.position.y=p->position_joueur.y ;

rect2.position.x=en1->posenemies.x ;
rect2.position.y=en1->posenemies.y ;
 

rect1.hauteur =58; 
rect1.largeur =58; 

rect2.hauteur=en1->posenemies.h+20; 
rect2.largeur=en1->posenemies.w +20; 

if ((rect1.position.y >= rect1.hauteur + rect2.position.y)  ||   (rect1.position.x >= rect1.largeur +rect2.position.x) ||   (rect1.position.y + rect1.hauteur <= rect2.position.y) || (rect1.position.x + rect1.largeur <= rect2.position.x)   )
{
	colli=0 ; 
}

return colli ; 

}
void init_ttf_alerte(alerte *ttf_alerte)
{
SDL_Color couleurViloet={0,0,0};
TTF_Init();
ttf_alerte->police=TTF_OpenFont("font_temps.ttf",25);
ttf_alerte->texte =TTF_RenderText_Blended(ttf_alerte->police,"!!!ATTENTION ENEMIE!!!!", couleurViloet);
ttf_alerte->position_texte.x=0;
ttf_alerte->position_texte.y=50;
}
void texte_ttf_alerte(SDL_Surface *screen,alerte *ttf_alerte)
{
SDL_BlitSurface(ttf_alerte->texte, NULL, screen, &ttf_alerte->position_texte);
}


