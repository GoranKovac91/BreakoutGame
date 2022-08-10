#pragma once
#include<SFML/Graphics.hpp>
class Paddle
{
public:
	Paddle();
	~Paddle();
	void Move();
	void InitializePaddle();
	float X() { return _paddle.getPosition().x; }
	float Y() { return _paddle.getPosition().y; }
	float PaddleLeft() { return X() -  _paddle.getSize().x / 2.f; }
	float PaddleRight() { return X() + _paddle.getSize().x / 2.f; }
	
	

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


