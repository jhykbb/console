#pragma once
struct Bollet
{
	int x;
	int y;
	char body;
	bool isalive;
	WORD fColor;
	WORD bColor;
};
void BolletInit();
void BolletUpdate();
void BolletDraw();

void BolletMove();
void BolletClipping();

void CleateBollit(int x, int y);

extern Bollet bollet;