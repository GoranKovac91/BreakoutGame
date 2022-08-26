#include "TransparentBrick.h"

TransparentBrick::TransparentBrick()
{
	doubleBrick.setSize(sf::Vector2f(width, length));
	doubleBrick.setScale(sf::Vector2f(0.5f, 0.5f));
	doubleBrick.setOutlineThickness(-3.f);
	doubleBrick.setOutlineColor(sf::Color::Black);
	TransparentBrickTexture.loadFromFile("Textures/Texture.jpg");
	doubleBrick.setTexture(&TransparentBrickTexture);
		
}
TransparentBrick::~TransparentBrick()
{

}

void TransparentBrick::LoadTextures()
{
	TransparentBrickTexture.loadFromFile("Textures/Texture.jpg");
}

void TransparentBrick::Damage(int damage)
{
	health -= damage;
}



