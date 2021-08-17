#pragma once
#include "pch.h"
#include "Ellipse.h"
class Circle : public EllipseM {
	DECLARE_SERIAL(Circle)
public:
	Circle() {}
	Circle(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	void Redefine(CPoint start, CPoint end);
	bool isInside(const CPoint &P) const;
};