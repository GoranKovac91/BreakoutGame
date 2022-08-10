#pragma once
#include <SFML/Graphics.hpp>
#include<SFML/Audio.hpp>;
#include"BasicBrick.h";
#include "Paddle.h"
#include"Ball.h";
#include "Grid.h";
#include"Collisions.h";
#include <string>;

class Game :protected BasicBrick,protected Paddle,protected Ball,protected Grid,protected Collisions
{
private:
	

	sf::RenderWindow* window; 
	sf::Event ev;
	sf::VideoMode videoMode;
	sf::Clock clock;
	sf::Time elapsedTime;
	sf::SoundBuffer buffer;
	sf::Sound collisionSound;
	std::string string; 
	sf::Text LivesText;
	sf::Font font;
	sf::Music gameMusic;
	
	
	void InitVariables();
	void InitWindow();
	
public:
	
	Game();
	virtual ~Game();
	
	const bool isRunning() const;
	
	void updatePollEvents();
	void Update();
	void Render();
	bool Collision(sf::RectangleShape &r, sf::CircleShape &c);
	void BrickBallBounce();
	void PaddleBallBounce();	
};