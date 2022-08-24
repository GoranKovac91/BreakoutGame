#pragma once
#include<SFML/Graphics.hpp>;
#include "BrickMain.h";

class TransparentBrick 
{
public:
	TransparentBrick();
	~TransparentBrick();
	void LoadTextures();

public:
	
	sf::RectangleShape transparentBrick;
	/*float positionx = 1;
	float positiony = 1;*/
	const int width = 200;
	const int length = 60;
	/*float positionxoffset = 100.0f;
	float posittionyoffset = 50.0f;*/
	sf::Texture TransparentBrickTexture;
};


