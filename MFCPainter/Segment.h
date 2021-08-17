#pragma once
#include "pch.h"
#include "Figure.h"
class Segment : public Figure {
	DECLARE_SERIAL(Segment)
public:
	Segment() {}
	Segment(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	bool isInside(const CPoint &P) const;
};
