class player
{
public:
	int x;
	int y;
	int radius;
	int color;
	int speedx;
	int speedy;
	int tone;

	player();
	void draw(BITMAP* buffer);
	void move();
};
