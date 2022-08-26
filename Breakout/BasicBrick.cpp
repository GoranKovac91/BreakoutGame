#include "BasicBrick.h"
#include<iostream>;

BasicBrick::BasicBrick()
{
	
	_basicBrick.setSize(sf::Vector2f(width, length));
	_basicBrick.setScale(sf::Vector2f(0.5f, 0.5f));
	_basicBrick.setOutlineThickness(-3.f);
	_basicBrick.setOutlineColor(sf::Color::Black);
	texture1.loadFromFile("Textures/Texture2.jpg");
	_basicBrick.setTexture(&texture);
}
BasicBrick::~BasicBrick()
{
}

void BasicBrick::LoadTextures()
{
	
	texture1.loadFromFile("Textures/Texture2.jpg");
}

void BasicBrick::Damage(int damage)
{
	health -= damage;
}

