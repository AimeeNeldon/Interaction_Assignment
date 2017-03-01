#include <allegro.h>
#include "player.h"

void Input()
{
    allegro_init();
    install_keyboard();
    set_color_depth(32);
    set_gfx_mode(GFX_AUTODETECT_WINDOWED, 640, 480, 0, 0);
}



void main()
{
	Input();
	BITMAP* buffer;
	buffer = create_bitmap(640,480);

	player pac;

	while(key[KEY_ESC]==0)
	{
	clear_bitmap(buffer);
	
	blit(buffer,screen,0,0,0,0,640,480);
	rest(10);
	}
}
END_OF_MAIN();