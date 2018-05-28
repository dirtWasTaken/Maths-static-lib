#include "Vector2.h"
#include <vector>


Vector2::Vector2()
{
}


Vector2::~Vector2()
{
}

Vector2::Vec2 Vector2::operator * (float other)
{
	Vec2 temp;
	temp.X = temp.X * other;
	temp.Y = temp.Y * other;
	return temp;
}

//pythag: c*2(length between two vector2) = (xlength*2) + (ylength*2) 
//C = sqroot of c*2

Vector2::Vec2 Vector2::operator + (Vec2 & other)
{
	Vec2 temp;
	temp.X = temp.X + other.X;
	temp.Y = temp.X + other.X;
	return temp;
}

Vector2::Vec2 Vector2::operator - (Vec2 & other)
{
	Vec2 temp;
	temp.X = temp.X - other.X;
	temp.Y = temp.X - other.X;
	return temp;
}


float Vector2::magnitudeCalculator(float abs)
{
	
	return abs;
}

float Vector2::pointC(float C_X, float C_Y)
{
	return 0;
}


void Vector2::DotProduct()
{

}

