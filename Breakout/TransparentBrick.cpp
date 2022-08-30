#include "TransparentBrick.h"

TransparentBrick::TransparentBrick()
{
	m_type = BrickType::EDouble;
	doubleBrick.setSize(sf::Vector2f(GetWidth(), GetLength()));
	doubleBrick.setScale(sf::Vector2f(GetScaleX(), GetScaleY()));
	doubleBrick.setOutlineThickness(GetOutlineThickness());
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



