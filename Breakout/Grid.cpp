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
		
		srand(time(NULL));
		random = rand() % 50;
		
	
		if (random%2==0)
		{
			
			
			_basicBrick.setPosition(positionx, positiony);
			Level1.emplace_back(_basicBrick);
			std::cout << "Basic";
			
			
			
		}
		else if(random%2!=0)
		{
			
			
			transparentBrick.setPosition(positionx, positiony);
			Level1.emplace_back(transparentBrick);
			std::cout << "Transparentt";
			
					
		}
		
		positionx += positionXoffset;
			

		if (_basicBrick.getPosition().x > 768 || transparentBrick.getPosition().x > 768)
		{
			positiony += posittionYoffset;
			positionx = 1;
		}
		
		
		
	}
			
}









