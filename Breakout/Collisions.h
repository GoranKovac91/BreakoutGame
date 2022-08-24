#pragma once
#include<SFML/Graphics.hpp>;
#include<vector>;
#include <iostream>;
#include <list>;

class Collisions
{
public:
	Collisions();
	~Collisions();
	bool TopLeft(std::vector<sf::RectangleShape> &v , sf::CircleShape b);
	bool TopRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool BotLeft(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool BotRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b);
	bool Intersect(sf::RectangleShape &r, sf::CircleShape& c);



};



