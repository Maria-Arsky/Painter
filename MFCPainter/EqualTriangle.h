#pragma once
#include "Triangle.h"
class ETriangle :public Triangle {
	DECLARE_SERIAL(ETriangle)
public:
	ETriangle() {}
	ETriangle(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	virtual void Redefine(CPoint p1, CPoint p2);
	bool isInside(const CPoint &P) const;
};