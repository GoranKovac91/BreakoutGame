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
	
	
	for (int i = 0; i < Level1.size(); i++)
	{
		Level1[i].setPosition(positionx, positiony);
		positionx += positionXoffset;

		if (Level1[i].getPosition().x > 768)
		{
			positiony += posittionYoffset;
			positionx = 1;
		}



	}
			
}









