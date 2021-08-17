#include "pch.h"
#include "Circle.h"

IMPLEMENT_SERIAL(Circle, CObject, 1)

Circle::Circle(CPoint p1, CPoint p2, BOOL b) : EllipseM(p1, p2, b) {}

void Circle::Shape_Draw(CDC* dc) const {
	EllipseM::Shape_Draw(dc);
}

void Circle::Redefine(CPoint start, CPoint end)
{
	int max = fmax(abs(start.x - end.x), abs(start.y - end.y));

	if (start.x < end.x && start.y < end.y) //right up
	{
		setP2(start.x + max, start.y + max);
	}
	else if (start.x > end.x && start.y > end.y) //left up
	{
		setP2(start.x - max, start.y - max);
	}
	else if (start.x < end.x && start.y > end.y) //right down
	{
		setP2(start.x + max, start.y - max);
	}
	else if (start.x > end.x && start.y < end.y) //left down
	{
		setP2(start.x - max, start.y + max);
	}
}

bool Circle::isInside(const CPoint &P) const { 
	bool flag = EllipseM::isInside(P);
	return flag;
}