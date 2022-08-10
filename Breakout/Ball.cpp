#include "Ball.h"
#include <iostream>;

Ball::Ball()
{
	this->InitializeObject();
	this->BallMovement();
	this->BounceY();
}

Ball::~Ball()
{
}

void Ball::BallMovement()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space) && BallVelocityY == 0)
	{
		BallVelocityY = -directionX;
	}
	if (BallVelocityY != 0)
	{
		this->ball.move(sf::Vector2f(this->BallVelocityX  , this->BallVelocityY ));
		this->BounceY();
		this->BounceX();
		
	}
			
}


void Ball::InitializeObject()
{
	this->ball.setRadius(radius);

	this->ball.setPosition(StartingPositionX, StartingPositionY);	
	ballTexture.loadFromFile("Textures/Ball.png");
	ball.setTexture(&ballTexture);

}

void Ball::BounceY()
{
    auto pos = this->ball.getPosition();

	if (pos.y < 1.0f)
	{
		BallVelocityY = directionY;
	}

	if (pos.y>760)
	{
		lives--;
		
		ball.setPosition(StartingPositionX, StartingPositionY);
		BallVelocityY = 0;
	}
	
	
}

void Ball::BounceX()
{
	auto pos = this->ball.getPosition();
	if (pos.x > 1020  )
	{
		BallVelocityX = -directionX;
	}
	else if (pos.x < 1)
	{
		BallVelocityX = directionX;
	}
	

}




