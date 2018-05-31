#ifndef MHD_VECTOR2
#define MHD_VECTOR2

class Vector2
{
public:
	//constructors
	Vector2();

	virtual ~Vector2();

	struct Vec2
	{
		float x = 0.0;
		float y = 0.0;
		Vec2(const Vec2 & v) : x(v.x), y(v.y) {}
		Vec2(const Vec2 * v) : x(v->x), y(v->y) {}
	};

	


	
	//methods
	float length() const;
	float lengthSquared() const;
	float distance(const Vec2 & v) const;
	float distanceSquared(const Vec2 & v) const;
	float DotProduct(const Vec2 & v) const;
	float crossProduct(const Vec2 & v) const;


	Vector2 & normal();
	Vector2 & normalise();

	//Assignment and equality operators
	inline Vec2 operator = (const Vec2 & v) 
	{ 
	}

};
#endif

