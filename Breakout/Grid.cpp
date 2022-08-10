#include "Grid.h"
#include <iostream>;


Grid::Grid()
{
	this->InitializeLevel1();
	
}

Grid::~Grid()
{
}

void Grid::InitializeLevel1()
{
	
	
	for (int i = 0; i < 70; i++)
	{
		
		Level1.push_back(_basicBrick);
		srand(time(NULL));
		random = rand() % 50;
		
		
		if (random%2==0)
		{
			_basicBrick.setPosition(positionX, positionY);
			_basicBrick.setSize(sf::Vector2f(width, length));
			_basicBrick.setScale(sf::Vector2f(0.5f, 0.5f));
			_basicBrick.setOutlineThickness(-3.f);
			_basicBrick.setOutlineColor(sf::Color::Black);
			_basicBrick.setTexture(&texture);
			
		}
		else
		{
			_basicBrick.setPosition(positionX, positionY);
			_basicBrick.setSize(sf::Vector2f(width, length));
			_basicBrick.setScale(sf::Vector2f(0.5f, 0.5f));//scale umanjuje ili uvecava za 0.5*
			_basicBrick.setOutlineThickness(-3.f);
			_basicBrick.setOutlineColor(sf::Color::Black);
			_basicBrick.setTexture(&texture1);
			
				
		}
		
		positionX += positionXoffset;
			

		if (_basicBrick.getPosition().x > 768)
		{
			positionY += posittionYoffset;
			positionX = 1;
		}
		
		
	}
			
}






