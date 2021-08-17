#pragma once
#include "Figure.h"
class EllipseM :public Figure {
	DECLARE_SERIAL(EllipseM)
public:
	EllipseM() {}
	EllipseM(CPoint p1, CPoint p2, BOOL b);
	void Shape_Draw(CDC* dc) const;
	bool isInside(const CPoint &P) const;
};