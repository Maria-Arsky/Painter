#include "pch.h"
#include "Square.h"

IMPLEMENT_SERIAL(Square, CObject, 1)

Square::Square(CPoint p1, CPoint p2, BOOL b) : RectangleM(p1, p2, b) {}

void Square::Shape_Draw(CDC* dc) const {
	RectangleM::Shape_Draw(dc);
}

void Square::Redefine(CPoint start, CPoint end)
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

bool Square::isInside(const CPoint &P) const {
	bool flag = RectangleM::isInside(P);
	return flag;
}