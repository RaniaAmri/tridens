#include "entite.h"

void initialise(enemies *en1)
{
en1-> gauche[0]=IMG_Load("g1.png");
en1-> gauche[1]=IMG_Load("g2.png");
en1-> gauche[2]=IMG_Load("g3.png");

en1-> droite[0]=IMG_Load("hat1.png");
en1-> droite[1]=IMG_Load("hat2.png");
en1-> droite[2]=IMG_Load("hat4.png");


en1-> posenemies.x = 500;
en1-> posenemies.y = 545;

en1-> L = 0;
en1-> R = 0;
}
void init (enemy *en)
{
en-> coin[0]=IMG_Load("1.png");
en-> coin[1]=IMG_Load("2.png");
en-> coin[2]=IMG_Load("3.png");
en-> coin[3]=IMG_Load("4.png");
en-> coin[4]=IMG_Load("5.png");
en-> coin[5]=IMG_Load("6.png");

en-> posenemy.x = 800;
en-> posenemy.y = 527;
en->i=0;
}

enemy animer(enemy en , SDL_Surface *screen )
{
int x=0;

switch(x)
{
case 0:
SDL_BlitSurface(en.coin[en.i],NULL,screen,&en.posenemy);
SDL_Delay(85);
en.i++;
if(en.i==5)
en.i=0;
break;
}
return en;
}
enemies deplacement(enemies en1 , SDL_Surface *screen)
{
int x;
int done =1;
x=rand()%(1-0+1)+0;


switch(x)
{
case 0 : 
SDL_BlitSurface(en1.droite[en1.R],NULL,screen,&en1.posenemies);
en1.posenemies.x+=10;
SDL_Delay(80);
en1.R++;
if(en1.R==3)
en1.R=0;
break;
case 1:
SDL_BlitSurface(en1.gauche[en1.L],NULL,screen,&en1.posenemies);
en1.posenemies.x-=10;
SDL_Delay(80);
en1.L++;
if (en1.L==3)
en1.L=0;
break;

   
}
/*if (en1.posenemies.x == 600)
x=1;
else 
if(en1.posenemies.x == 500)
x=0;*/
return en1;
}
