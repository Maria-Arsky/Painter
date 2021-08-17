#include "pch.h"
#include "Rectangle.h"

IMPLEMENT_SERIAL(RectangleM, CObject, 1)

RectangleM::RectangleM(CPoint p1, CPoint p2, BOOL b) : Figure(p1, p2, b) {}

void RectangleM::Shape_Draw(CDC* dc) const {
	Figure::Shape_Draw(dc);
}

bool RectangleM::isInside(const CPoint &P) const {
	bool flag = Figure::isInside(P);
	return flag;
}