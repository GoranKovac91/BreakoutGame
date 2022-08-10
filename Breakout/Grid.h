#pragma once
#include "BasicBrick.h";
#include "Brick.h";
#include "SFML/Graphics.hpp";
#include"TransparentBrick.h";
#include<vector>;
#include <time.h>;


class Grid:protected BasicBrick
{
public:
	Grid();
	~Grid();
    void InitializeLevel1();
	std::vector<sf::RectangleShape>& getGrid() { return Level1; }
	
	

protected:
	std::vector<sf::RectangleShape> Level1 ;
	int random;
	
	
	
	



};




