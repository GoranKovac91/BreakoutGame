#pragma once
enum class BrickType
{
	EBasic,
	EDouble
};
class BrickMain
{
public:
	BrickMain();
	~BrickMain();
	int GetWidth() { return width; }
	int GetLength() { return length; }
	BrickType GetType() { return m_type; }
	float GetOutlineThickness() { return outlineThickness; }
	float GetScaleX() { return scaleX; }
	float GetScaleY() { return scaleY; }
	
	
	

protected:

	const int width = 200 ;
	const int length = 60;
	float outlineThickness=-3.f;
	BrickType m_type;
	float scaleX = 0.5f;
	float scaleY = 0.5f;
};


