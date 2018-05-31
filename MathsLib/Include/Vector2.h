#ifndef MHD_VECTOR2
#define MHD_VECTOR2

class Vector2
{
public:
	float x;
	float y;
	//constructors
	Vector2 (void);
    Vector2 (float xValue = 0.0, float yValue = 0.0);
	Vector2 (const Vector2 & v);
	Vector2 (const Vector2 * v);
	~Vector2 (void);

	//methods
	void set(float xValue, float yValue);

	float magnitude() const;
	float magnitudeSquared() const;
	float distance(const Vector2 & v) const;
	float distanceSquared(const Vector2 & v) const;
	float dotProduct(const Vector2 & v) const;
	float crossProduct(const Vector2 & v) const;

	Vector2 & normal();
	Vector2 & normalise();

	//ASSINGMENT AND EQUALITY OPERATIONS
	inline Vector2 & operator = (const Vector2 & v) 
	{ x = v.x; y = v.y; return *this; }

	inline Vector2 & operator = (const float & f) 
	{ x = f; y = f; return *this; }

	inline Vector2 & operator - (void) 
	{ x = -x; y = -y; return *this; }

	inline bool operator == (const Vector2 & v) const 
	{ return (x == v.x) && (y == v.y); }

	inline bool operator != (const Vector2 & v) const 
	{ return (x != v.x) || (y != v.y); }

	//VECTOR2 TO VECTOR2 OPERATIONS
	inline const Vector2 operator + (const Vector2 & v) const 
	{ return Vector2(x + v.x, y + v.y); }

	inline const Vector2 operator - (const Vector2 & v) const 
	{ return Vector2(x - v.x, y - v.y); }

	inline const Vector2 operator * (const Vector2 & v) const
	{ return Vector2(x * v.x, y * v.y); }

	inline const Vector2 operator / (const Vector2 & v) const 
	{ return Vector2(x / v.x, y / v.y); }

	//VECTOR2 TO THIS OPERATIONS
	inline Vector2 & operator += (const Vector2 & v) 
	{ x += v.x; y += v.y; return *this; }

	inline Vector2 & operator -= (const Vector2 & v) 
	{ x -= v.x; y -= v.y; return *this; }

	inline Vector2 & operator *= (const Vector2 & v) 
	{ x *= v.x; y *= v.y; return *this; }

	inline Vector2 & operator /= (const Vector2 & v) 
	{ x /= v.x; y /= v.y; return *this; }

	//SCALER TO VECTOR2 OPERATIONS
	inline const Vector2 operator + (float v) const 
	{ return Vector2(x + v, y + v); }

	inline const Vector2 operator - (float v) const 
	{ return Vector2(x - v, y - v); }

	inline const Vector2 operator * (float v) const 
	{ return Vector2(x * v, y * v); }

	inline const Vector2 operator / (float v) const 
	{ return Vector2(x / v, y / v); }

	//SCALER TO THIS OPERATIONS
	inline Vector2 & operator += (float v) 
	{ x += v; y += v; return *this; }

	inline Vector2 & operator -= (float v) 
	{ x -= v; y -= v; return *this; }

	inline Vector2 & operator *= (float v)
	{ x *= v; y *= v; return *this; }

	inline Vector2 & operator /= (float v) 
	{ x /= v; y /= v; return *this; }
};
#endif

