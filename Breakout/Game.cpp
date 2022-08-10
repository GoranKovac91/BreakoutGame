#include "Game.h"
#include "BasicBrick.h";
#include"Paddle.h";
#include"Ball.h"
#include <math.h>;
#include "SFML/Graphics/RenderTarget.hpp";
#include<time.h>;



Game::Game()
{
	this->InitVariables();
	this->InitWindow();
}
Game::~Game()
{
	delete this->window;
}

void Game::InitVariables()
{
	this->window = nullptr;

	font.loadFromFile("Fonts/EvilEmpire-4BBVK.ttf");
    string = std::to_string(lives);

	LivesText.setPosition(20, 700);
	LivesText.setCharacterSize(50);
	LivesText.setFont(font);
	LivesText.setFillColor(sf::Color::Red);
	

	buffer.loadFromFile("Sounds/Collision.wav");
	collisionSound.setBuffer(buffer);

	gameMusic.openFromFile("Sounds/BackgroundMusic.wav");
	gameMusic.play();

	

	
}
void Game::InitWindow()
{
	 this->videoMode.height = 768;
	 this->videoMode.width = 1024;
	 this->window= new sf::RenderWindow(videoMode, "Breakout", sf::Style::Titlebar);//this
	 this->window->setFramerateLimit(144);
}


const bool Game::isRunning() const
{
	return this->window->isOpen();
}

void Game::updatePollEvents()
{
	while (this->window->pollEvent(this->ev))//stavit this
	{
		elapsedTime=clock.getElapsedTime();
		
		

		switch ( this->ev.type)
		{
		case sf::Event::Closed:
			this->window->close();
			break;
		case sf::Event::KeyPressed:
			if (this->ev.key.code == sf::Keyboard::Escape)
			{
				this->window->close();
			}
			break;
			;
		}
	}
}


void Game::Update()
{
	this->updatePollEvents();
	this->BallMovement();
	this->Move();
	this->BrickBallBounce();
	this->PaddleBallBounce();
	this->BounceY();
		
}

void Game::Render()
{
	
	
	this->window->clear(sf::Color::Black);
	
	for (const auto& obj:getGrid())
	{
		
		this->window->draw(obj);
		
	}
	string = std::to_string(lives);
	LivesText.setString(" Lifes " + string);
	this->window->draw(this->LivesText);
    this->window->draw(this->_paddle);
	this->window->draw(this->ball);
	this->window->display();
	

	if (lives <= 0)
	{
	this->window->close();
	}
		
}

bool Game::Collision(sf::RectangleShape &r, sf::CircleShape &c)
{
	if (r.getGlobalBounds().intersects(c.getGlobalBounds()))
	{
		
		return true;
		
	}
	
}



void Game::BrickBallBounce()
{
	if (TopLeft(Level1, ball))
	{
		collisionSound.play();
		this->BallVelocityX = -directionX * speed;
		this->BallVelocityY = -directionY * speed;
	

	}
	else if (TopRight(Level1, ball))
	{
		collisionSound.play();
		this->BallVelocityX = directionX * speed;
		this->BallVelocityY = -directionY * speed;
	

	}
	else if (BotLeft(Level1, ball))
	{
		collisionSound.play();
		this->BallVelocityX = -directionX * speed;
		this->BallVelocityY = directionY * speed;
		
	}
	else if (BotRight(Level1, ball))
	{
		collisionSound.play();
		this->BallVelocityX = directionX * speed;
		this->BallVelocityY = directionY * speed;
	}


}

void Game::PaddleBallBounce()
{
	if (this->Collision(_paddle, ball) && this->PaddleLeft() < this->ball.getPosition().x)
	{

		this->BallVelocityX = -directionX;
		this->BallVelocityY = -directionY;

	}
	 if (this->Collision(_paddle, ball) && this->PaddleRight() < this->ball.getPosition().x)
	{
		this->BallVelocityX = directionX;
		this->BallVelocityY = -directionY;;
	}


}








			
	
		
	









