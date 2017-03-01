#include <allegro.h>
#include "player.h"

player :: player()
{
	int		x;
	int		y;
	BITMAP* shape;
	int		speedx;
	int		speedy;
	bool	visible;
};

//global variables
player  point[5];
player	enemy[5];
player	players;


void ShowBitmap(BITMAP* src, BITMAP* dst, int x, int y)
{
    blit(src,dst,0,0,x,y,src->w,src->h);
}
	void player :: draw(BITMAP* buffer)
	{
		ShowBitmap(player.shape,buffer,player.x,player.y);
	}
	void player :: move()
	{
		//bool bounce = true;
				x += speedx;
			if(x > 640)
				speedx *= -1;
			if(x < 0)
				speedx *= -1;
			y += speedy;
			if(y > 480)
				speedy *= -1;
			if(y < 0)
				speedy *= -1;
	}

