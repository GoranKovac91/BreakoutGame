#pragma once
class IMoveable
{
public:

	IMoveable();
	~IMoveable();

	virtual void Move() = 0;
	void SetVelocityX(float x) { x = _velocityX; }
	void SetVelocityY(float y) { y = _velocityY; }
	void SetSpeed(float s) { s = _speed; }

private :

	float _velocityX;
	float _velocityY;
	float _speed;
	
};


