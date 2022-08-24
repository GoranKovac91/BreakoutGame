#pragma once
class BrickMain
{
public:
	BrickMain();
	~BrickMain();
	void SetPositionX(int x) { positionX = x; }
	void SetPositionY(int y) { positionY = y; }

protected:
	float positionX ;
	float positionY ;
	const int width= 200 ;
	const int length= 60;
	float positionXoffset = 150;
	float posittionYoffset = 50.0f;
};


