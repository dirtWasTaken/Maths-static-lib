#pragma once
class Vector2
{
public:

	Vector2();

	virtual ~Vector2();

	struct Vec2
	{
		float X = 0.0;
		float Y = 0.0;
	};

	Vec2 operator + (Vec2 & other);
	Vec2 operator - (Vec2 & other);
	Vec2 operator * (float other);

	float magnitudeCalculator(float abs);

	float pointC(float C_X, float C_Y);

	void DotProduct();

};

