#include "pch.h"
#include "EqualTriangle.h"

IMPLEMENT_SERIAL(ETriangle, CObject, 1)

ETriangle::ETriangle(CPoint p1, CPoint p2, BOOL b) : Triangle(p1, p2, b) {}

void ETriangle::Shape_Draw(CDC* dc) const {
	Triangle::Shape_Draw(dc);
}

void ETriangle::Redefine(CPoint start, CPoint end) {
	double a = abs(start.x - end.x);
	double height = (sqrt(3) / 2) * a;

	if (start.x < end.x && start.y < end.y) //right up
	{
		setP2(start.x + a, start.y + height);
	}
	else if (start.x > end.x && start.y > end.y) //left up
	{
		setP2(start.x - a, start.y - height);
	}
	else if (start.x < end.x && start.y > end.y) //right down
	{
		setP2(start.x + a, start.y - height);
	}
	else if (start.x > end.x && start.y < end.y) //left down
	{
		setP2(start.x - a, start.y + height);
	}

	CPoint p1 = getP1();
	CPoint p2 = getP2();
	CPoint p3;

	p3.x = abs(p2.x + p1.x) / 2;
	p3.y = p2.y;

	setP3(p3.x, p3.y);
	setP2(p2.x, p1.y);
}

bool ETriangle::isInside(const CPoint &P) const {
	bool flag = Triangle::isInside(P);
	return flag;
}