#pragma once
struct Enemey
{
	int x;
	int y;
	char body;
	bool isalive;
	WORD fColor;
	WORD bColor;
};
void EnemeyInit();
void EnemeyUpdate();
void EnemeyDraw();