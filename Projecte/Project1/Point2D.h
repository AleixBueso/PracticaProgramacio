#ifndef __Point2D_H__
#define __Point2D_H__
#include <iostream>
#include <math.h>

class Point2D
{
public:

	float x, y;


	Point2D& Point2D::operator+ (const Point2D &z) const
	{
		Point2D tmp;
		tmp.x = x + z.x;
		tmp.y = y + z.y;
		return(tmp);
	}

	Point2D& Point2D::operator- (const Point2D &z) const
	{
		Point2D tmp;
		tmp.x = x - z.x;
		tmp.y = y - z.y;
		return(tmp);
	}

	const Point2D& Point2D::operator+= (const Point2D &a)
	{
		x += a.x;
		y += a.y;

		return *this;
	}

	const Point2D& Point2D::operator-=(const Point2D &a)
	{
		x -= a.x;
		y -= a.y;

		return(*this);
	}

	bool Point2D::operator==(const Point2D &a) const
	{
		return (x == a.x && y == a.y);
	}

	bool Point2D::operator!=(const Point2D &a) const
	{
		return (x != a.x || y != a.y);
	}

	bool IsZero() const
	{
		return x == 0.0f && y == 0.0f;
	}

	void SetZero()
	{
		x = y = 0.0f;
	}

	float DistanceTo(const Point2D &a)
	{
		return sqrt(pow(a.x - x, 2) + pow(a.y - y, 2));
	}
};





#endif //__Point2D_h__