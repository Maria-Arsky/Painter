#include "pch.h"
#include "Segment.h"

IMPLEMENT_SERIAL(Segment, CObject, 1)

Segment::Segment(CPoint p1, CPoint p2, BOOL b) : Figure(p1, p2, b) {}

void Segment::Shape_Draw(CDC* dc) const {
	CPoint p1 = getP1();
	CPoint p2 = getP2();
	dc->MoveTo(p1);
	dc->LineTo(p2.x, p2.y);
}

bool Segment::isInside(const CPoint &P) const {
	CPoint p1 = getP1();
	CPoint p2 = getP2();
	double totalD, d1, d2;
	bool flag = false;

	totalD = ((p1.x - p2.x)*(p1.x - p2.x) + (p1.y - p2.y)*(p1.y - p2.y));
	totalD = sqrt(totalD);
	d1 = ((p1.x - P.x)*(p1.x - P.x) + (p1.y - P.y)*(p1.y - P.y));
	d1 = sqrt(d1);
	d2 = ((p2.x - P.x)*(p2.x - P.x) + (p2.y - P.y)*(p2.y - P.y));
	d2 = sqrt(d2);

	if ((d1 + d2) <= (totalD + 2))
		flag = true;

	return flag;
}