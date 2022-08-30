#pragma once
#include "Brick.h";
#include<SFML/Graphics.hpp>;
#include<vector>;
#include "BrickMain.h";

class BasicBrick :protected BrickMain
{
public:
	BasicBrick();
	~BasicBrick();
	void LoadTextures();
	void Damage(int damage);
	
		
public:
	sf::RectangleShape _basicBrick;
	static int health ;
	sf::Texture texture;
	sf::Texture texture1;
	
	
	
	
		

	
};


