#pragma once
#include<SFML/Graphics.hpp>;
#include<vector>;
#include <iostream>;
#include <list>;
#include"TransparentBrick.h";
#include "BasicBrick.h";
class Collisions:protected TransparentBrick
{
public:
	TransparentBrick brick;
	Collisions();
	~Collisions();
	bool TopLeft(std::vector<sf::RectangleShape> &v , sf::CircleShape b);
	bool TopRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool BotLeft(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool BotRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool Intersect(sf::RectangleShape &r, sf::CircleShape& c);
	
};



