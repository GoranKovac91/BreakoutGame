#pragma once
#include<SFML/Graphics.hpp>;
#include "BrickMain.h";

class TransparentBrick 
{
public:
	TransparentBrick();
	~TransparentBrick();
	void LoadTextures();
	void Damage(int damage);

protected:
	
	sf::RectangleShape doubleBrick;
	int health = 20;
	const int width = 200;
	const int length = 60;
	sf::Texture TransparentBrickTexture;
};


