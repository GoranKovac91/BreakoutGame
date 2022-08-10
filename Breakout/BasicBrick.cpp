#include "BasicBrick.h"
#include<iostream>;

BasicBrick::BasicBrick()
{
	this->InitializeObject();
}
BasicBrick::~BasicBrick()
{
}
void BasicBrick::InitializeObject()
{
	texture.loadFromFile("Textures/Texture.jpg");
	texture1.loadFromFile("Textures/Texture2.jpg");
		
}
	



















