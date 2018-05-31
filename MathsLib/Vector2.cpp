#include "Vector2.h"
#include <vector>
#include <iostream>


Vector2::Vector2 (void) : x(0), y(0) {}
Vector2::Vector2 (float xValue, float yValue) : x(xValue), y(yValue) { }
Vector2::Vector2 (const Vector2 & v) : x(v.x), y(v.y) { }
Vector2::Vector2 (const Vector2 * v) : x(v->x), y(v->y) { }

Vector2::~Vector2(void) {}

////METHODS
void Vector2::set(float xValue, float yValue)
{
	x = xValue;
	y = yValue;
}
float Vector2::magnitude() const
{
	 return sqrt (x * x + y * y);
}
float Vector2::distance(const Vector2 & v) const
{
	return sqrt (((x - v.x) * (x - v.x)) + ((y - v.y) * (y - v.y)));
}
float Vector2::distanceSquared(const Vector2 & v) const
{
	return (((x - v.x) * (x - v.x)) + ((y - v.y) * (y - v.y)));
}
float Vector2::dotProduct(const Vector2 & v) const
{
	
}
float Vector2::crossProduct(const Vector2 & v) const
{
	return 0;
}
Vector2 & Vector2::normal()
{
}
Vector2 & Vector2::normalise()
{
}












//
//float Vector2::pointC(float C_X, float C_Y)
//{
//}
//float Vector2::magnitudeCalculator(float abs)
//{
//}

//Vector2::Vec2 Vector2::operator * (float rhs)
//{
//	Vec2 temp;
//	temp.X = temp.X * rhs;
//	temp.Y = temp.Y * rhs;
//	return temp;
//}
//
//Vector2::Vec2 Vector2::operator + (Vec2 & other)
//{
//	Vec2 temp;
//	temp.X = temp.X + other.X;
//	temp.Y = temp.X + other.X;
//	return temp;
//}
//
//Vector2::Vec2 Vector2::operator - (Vec2 & other)
//{
//	Vec2 temp;
//	temp.X = temp.X - other.X;
//	temp.Y = temp.X - other.X;
//	return temp;
//}
//
//void Vector2::DotProduct()
//{
//
//}
