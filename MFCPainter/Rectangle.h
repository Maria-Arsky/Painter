#pragma once
#include "pch.h"
#include "Figure.h"
class RectangleM : public Figure {
	DECLARE_SERIAL(RectangleM)
public:
	RectangleM() {}
	RectangleM(CPoint p1, CPoint p2, BOOL b);
	virtual void Shape_Draw(CDC* dc) const;
	bool isInside(const CPoint &P) const;
};