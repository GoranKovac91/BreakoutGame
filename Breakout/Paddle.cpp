#include "Paddle.h"

Paddle::Paddle()
{
	this->InitializePaddle();
	this->Move();
}

Paddle::~Paddle()
{
}

void Paddle::Move()
{
	auto pos = _paddle.getPosition();
	if (pos.x > 1000 )
	{
		_paddle.setPosition(1.0f, StartingPositionY);
	}
	if (pos.x <-200)
	{
		_paddle.setPosition(800, StartingPositionY);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		_paddle.move(sf::Vector2f(-velocityX * PaddleSpeed, 0));
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{
		_paddle.move(sf::Vector2f(velocityX * PaddleSpeed, 0));
	}
	
	
}

void Paddle::InitializePaddle()
{
	this->_paddle.setPosition(StartingPositionX, StartingPositionY);
	//this->_paddle.setFillColor(sf::Color::Red);
	this->_paddle.setOutlineThickness(3.f);
	this->_paddle.setOutlineColor(sf::Color::White);
	this->_paddle.setSize(sf::Vector2f( width, length));
	this->paddleTexture.loadFromFile("Textures/Paddle.png");
	this->_paddle.setTexture(&paddleTexture);
		

}
