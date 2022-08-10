#pragma once
#include "BasicBrick.h";

class TransparentBrick :public BasicBrick
{
public:
	TransparentBrick();
	~TransparentBrick();
	
	

public:
	
	sf::RectangleShape transparentBrick;
	float positionX = 1;
	float positionY = 1;
	const int width = 200;
	const int length = 100;
	float positionXoffset = 100.0f;
	float posittionYoffset = 50.0f;
};


