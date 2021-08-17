#pragma once
#include "Figure.h"
class Triangle :public Figure {
	DECLARE_SERIAL(Triangle)
public:
	Triangle() {}
	Triangle(CPoint p1, CPoint p2, BOOL b);
	void Serialize(CArchive& ar);
	CPoint getP3() const { return P3; }
	void setP3(double x, double y) { P3.x = x; P3.y = y; }
	void Shape_Draw(CDC* dc) const;
	virtual void Redefine(CPoint p1, CPoint p2);
	bool isInside(const CPoint &P) const;
	void Shift(CPoint c1, CPoint c2);
private:
	CPoint P3;
};
