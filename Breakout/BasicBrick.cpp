#include "BasicBrick.h"
#include<iostream>;

BasicBrick::BasicBrick()
{
	 m_type = BrickType::EBasic;
	_basicBrick.setSize(sf::Vector2f(GetWidth(), GetLength()));
	_basicBrick.setScale(sf::Vector2f(GetScaleX(), GetScaleY()));
	_basicBrick.setOutlineThickness(GetOutlineThickness());
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

