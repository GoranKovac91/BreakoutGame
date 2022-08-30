#pragma once
#include<SFML/Graphics.hpp>;
#include "BrickMain.h";

class TransparentBrick:protected BrickMain
{
public:
	TransparentBrick();
	~TransparentBrick();
	void LoadTextures();
	void Damage(int damage);

protected:
	
	sf::RectangleShape doubleBrick;
	static int health ;
	
	sf::Texture TransparentBrickTexture;
};


