#pragma once
#include "Brick.h"
#include<vector>;
#include<iostream>;
class Ball 
{
public:
	Ball();
	~Ball();
	void BallMovement();
	
	void BounceY();
	void BounceX();
	

protected:
	float radius = 12;
	float StartingPositionX = 400;
	float StartingPositionY = 650;
	float directionX=2.0f;
	float directionY=2.0f;
	float BallVelocityX;
	float BallVelocityY;
	float speed=1.5f;
    static int  lives;
	sf::CircleShape ball;
	sf::Texture ballTexture;
	sf::Vector2f Movement;
	int damage = 5;
	
};


