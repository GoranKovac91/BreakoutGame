#include "TransparentBrick.h"

TransparentBrick::TransparentBrick()
{
	transparentBrick.setSize(sf::Vector2f(width, length));
	transparentBrick.setScale(sf::Vector2f(0.5f, 0.5f));
	transparentBrick.setOutlineThickness(-3.f);
	transparentBrick.setOutlineColor(sf::Color::Black);
	TransparentBrickTexture.loadFromFile("Textures/Texture.jpg");
	transparentBrick.setTexture(&TransparentBrickTexture);
	
	
}
TransparentBrick::~TransparentBrick()
{

}

void TransparentBrick::LoadTextures()
{
	TransparentBrickTexture.loadFromFile("Textures/Texture.jpg");
}



