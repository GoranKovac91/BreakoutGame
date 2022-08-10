#pragma once
#include "Brick.h";
#include<SFML/Graphics.hpp>;
#include<vector>;
enum BrickType
{
	EBasic,
	ETransparent
};
class BasicBrick : private Object
{
public:
	BasicBrick();
	~BasicBrick();
	void InitializeObject();
		
public:
	sf::RectangleShape _basicBrick;
	float positionX=1;
	float positionY=1;
	const int width=200;
	const int length=60;
	float positionXoffset=150;
	float posittionYoffset = 50.0f;
	int Health;

	sf::Texture texture;
	sf::Texture texture1;
	
	
		

	
};


