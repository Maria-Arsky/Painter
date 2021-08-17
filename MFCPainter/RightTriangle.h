#pragma once
#include "Triangle.h"
class RTriangle :public Triangle {
	DECLARE_SERIAL(RTriangle)
public:
	RTriangle() {}
	RTriangle(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	virtual void Redefine(CPoint p1, CPoint p2);
	bool isInside(const CPoint &P) const;
};