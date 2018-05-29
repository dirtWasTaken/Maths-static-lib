#include "Vector2.h"
#include <vector>
#include <iostream>


Vector2::Vector2()
{
}


Vector2::~Vector2()
{
}


float Vector2::pointC(float C_X, float C_Y)
{
	std::vector<Vec2> V1(2);
	if (V1[0].Y > V1[1].Y)
	{
		C_Y = V1[1].Y;
		return C_Y;
	}
		else 
		{
			C_Y = V1[0].Y;
			return C_Y;
		}
	if (V1[0].X > V1[1].X)
	{
		C_X = V1[1].X;
		return C_X;
	}
		else
		{
			C_X = V1[0].X;
			return C_X;
		}

}

float Vector2::magnitudeCalculator(float abs)
{

}

Vector2::Vec2 Vector2::operator * (float rhs)
{
	Vec2 temp;
	temp.X = temp.X * rhs;
	temp.Y = temp.Y * rhs;
	return temp;
}

//pythag: c*2(length between two vector2) =   + (ylength*2) 
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

