#include "Vector2D.h"

	//operator <<
ostream& operator<<(ostream& out, const Vector2D& v)
{
	out << "<" << v.x << "," << v.y << ">";

	return out;
}

	// default constructor
Vector2D::Vector2D()
{
	x = 0;
	y = 0;
}

	// overloaded constructor
Vector2D::Vector2D(int newX, int newY)
{
	x = newX;
	y = newY;
}

	// operator *
int Vector2D::operator*(const Vector2D& otherVector) const
{
	return (x * otherVector.x + y * otherVector.y);
}

	// operator==
bool Vector2D::operator==(const Vector2D& otherVector) const
{
	return (x == otherVector.x && y == otherVector.y);
}

	// destructor
Vector2D::~Vector2D()
{}
