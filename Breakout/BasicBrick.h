#pragma once
#include "Brick.h";
#include<SFML/Graphics.hpp>;
#include<vector>;
enum BrickType
{
	EBasic,
	ETransparent
};
class BasicBrick 
{
public:
	BasicBrick();
	~BasicBrick();
	void LoadTextures();
	void Damage(int damage);
	

		
public:
	sf::RectangleShape _basicBrick;
	const int width=200;
	const int length=60;
	int health = 10;
	sf::Texture texture;
	sf::Texture texture1;
	
	
		

	
};


