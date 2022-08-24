#pragma once
#include "Imovable.h";
#include<SFML/Graphics.hpp>
class Paddle:public IMoveable
{
public:
	Paddle();
	~Paddle();
	float X() { return _paddle.getPosition().x; }
	float Y() { return _paddle.getPosition().y; }
	float PaddleLeft() { return X() -  _paddle.getSize().x / 2.f; }
	float PaddleRight() { return X() + _paddle.getSize().x / 2.f; }
	void Move() override;
	
	

protected:
	sf::RectangleShape _paddle;
	sf::Texture paddleTexture;
	const int width = 200;
	const int length = 30;
	float StartingPositionX = 320;
	float StartingPositionY = 700;
	float velocityX = 2.0f;
	float PaddleSpeed = 2.0f;
	
	
};


