#include "include.h"
extern Player player;
Bollet bollet{D_BOLLET_MAX};


void BolletInit()

{
	for (int i = 0; i < D_BOLLET_MAX; i++)
	{
		D_ENEMEY_MAX
	}
	}

void BolletUpdate()
{
	if (bollet.isalive = true)
	{
		BolletMove();
		BolletClipping();
	}
}

void BolletDraw()
{
	if (bollet.isalive = true)
		DrawChar(bollet.x, bollet.y, bollet.body, bollet.fColor, bollet.bColor);
}

void BolletMove()
{
	bollet.y--;
}

void BolletClipping()
{
	if (bollet.y < 0)
	{
		bollet.isalive = false;
	}
}

void CleateBollit(int y, int x)
{
	if (bollet.isalive = true)
	{
		bollet.y = player.y;
		bollet.x = player.x;
		bollet.isalive = true;
	}
	}



