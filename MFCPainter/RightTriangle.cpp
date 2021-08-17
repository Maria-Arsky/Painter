#include "pch.h"
#include "RightTriangle.h"

IMPLEMENT_SERIAL(RTriangle, CObject, 1)

RTriangle::RTriangle(CPoint p1, CPoint p2, BOOL b) : Triangle(p1, p2, b) {}

void RTriangle::Shape_Draw(CDC* dc) const {
	Triangle::Shape_Draw(dc);
}

void RTriangle::Redefine(CPoint start, CPoint end) {
	Figure::Redefine(start, end);

	CPoint p1 = getP1();
	CPoint p2 = getP2();
	CPoint p3;

	p3.x = p1.x;
	p3.y = p2.y;

	setP3(p3.x, p3.y);
	setP2(p2.x, p1.y);
}

bool RTriangle::isInside(const CPoint &P) const {
	bool flag = Triangle::isInside(P);
	return flag;
}