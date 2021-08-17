#pragma once
#include "pch.h"
#include "Rectangle.h"
class Square : public RectangleM {
	DECLARE_SERIAL(Square)
public:
	Square() {}
	Square(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	void Redefine(CPoint start, CPoint end);
	bool isInside(const CPoint &P) const;
};