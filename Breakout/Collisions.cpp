#include "Collisions.h"

Collisions::Collisions()
{
}

Collisions::~Collisions()
{
}

bool Collisions::TopLeft(std::vector<sf::RectangleShape>& v, sf::CircleShape b)
{
	for (int i = 0; i < v.size(); i++)
	{
		auto BallPosition = b.getPosition();
		auto BrickPosition = v[i].getPosition();
		auto BrickSize = v[i].getScale();
		if (Intersect(v[i],b) && BallPosition.x < BrickPosition.x && BallPosition.y <= BrickPosition.y - (BrickSize.y / 2))
		{
			
			TransparentBrick::health -= 10;
			std::cout << TransparentBrick::health;
			if (TransparentBrick::health <= 0)
			{
				v.erase(v.begin() + i);
				return true;
				
			}
		

			
		}
	}
	return false;
}

bool Collisions::TopRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b)
{
	for (int i = 0; i < v.size(); i++)
	{
		auto BallPosition = b.getPosition();
		auto BrickPosition = v[i].getPosition();
		auto BrickSize = v[i].getScale();
		;
		if (Intersect(v[i], b) && BallPosition.x > BrickPosition.x && BallPosition.y <= BrickPosition.y - (BrickSize.y / 2))
		{
			TransparentBrick::health -= 10;
			std::cout << TransparentBrick::health;
			if (TransparentBrick::health <= 0)
			{
				
				v.erase(v.begin() + i);
				return true;
				
			}
			
		
		}
	}
	return false;
}

bool Collisions::BotLeft(std::vector<sf::RectangleShape>& v, sf::CircleShape b)
{
	for (int i = 0; i < v.size(); i++)
	{
		auto BallPosition = b.getPosition();
		auto BrickPosition = v[i].getPosition();
		auto BrickSize = v[i].getScale();
		if (Intersect(v[i], b) && BallPosition.x <= BrickPosition.x && BallPosition.y >= BrickPosition.y + (BrickSize.y / 2))
		{
			std::cout << TransparentBrick::health;
			TransparentBrick::health -= 10;
			if (TransparentBrick::health <= 0)
			{
				v.erase(v.begin() + i);
				return true;
				
			}
			

		}
	}
	return false;
}

bool Collisions::BotRight(std::vector<sf::RectangleShape>& v, sf::CircleShape b)
{
	for (int i = 0; i < v.size(); i++)
	{
		auto BallPosition = b.getPosition();
		auto BrickPosition = v[i].getPosition();
		auto BrickSize = v[i].getScale();
		if (Intersect(v[i], b) && BallPosition.x > BrickPosition.x && BallPosition.y >= BrickPosition.y + (BrickSize.y / 2))
		{
			std::cout << TransparentBrick::health;
			TransparentBrick::health -= 10;
			if (TransparentBrick::health <= 0)
			{
				v.erase(v.begin() + i);
				return true;
				
			}
		}
	}
	return false;

}




bool Collisions::Intersect(sf::RectangleShape&r, sf::CircleShape& c)
{
	
		if (r.getGlobalBounds().intersects(c.getGlobalBounds()))
		{

			return true;

		}
	
	return false;
	
}


