#ifndef	VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
using namespace std;

class Vector2D
{
	friend ostream& operator<<(ostream& out, const Vector2D& v);

public:
	Vector2D();
	Vector2D(int newX, int newY);

	int operator*(const Vector2D& otherVector) const;

	bool operator==(const Vector2D& otherVector) const;
	
	~Vector2D();

private:
	int x;	//first vector value
	int y;	//second vector value
};

#endif