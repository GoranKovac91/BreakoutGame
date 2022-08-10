#pragma once
#include "Brick.h"
#include<vector>;
#include<iostream>;
class Ball : protected Object
{
public:
	Ball();
	~Ball();
	void BallMovement();
	void InitializeObject();
	void BounceY();
	void BounceX();
	//int &getLives() { return this->lives; }

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
	
	
	 

};


