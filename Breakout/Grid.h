#pragma once
#include "BasicBrick.h";
#include "Brick.h";
#include "SFML/Graphics.hpp";
#include"TransparentBrick.h";
#include<vector>;
#include <time.h>;


class Grid:protected BasicBrick,protected TransparentBrick
{
public:
	Grid();
	~Grid();
    void InitializeLevel1();
	std::vector<sf::RectangleShape>& getGrid() { return Level1; }

protected:
	std::vector<sf::RectangleShape> Level1{ 
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick ,
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick ,
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick, 
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick, 
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick ,
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick, 
	_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick,_basicBrick,doubleBrick, };

	float positionXoffset = 150;
	float positionx = 1;
	float positiony = 1;
	float posittionYoffset = 50.0f;
	


};
