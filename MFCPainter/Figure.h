#pragma once
#include "pch.h"
#include<vector>
class Figure : public CObject {
	DECLARE_SERIAL(Figure)
	CPoint P1;
	CPoint P2;
	BOOL Bold;
	COLORREF bgColor;
	COLORREF FbgColor;
public:
	Figure() {}
	Figure(CPoint p1, CPoint p2, BOOL b) : P1(p1), P2(p2), Bold(b) {}
	virtual void Serialize(CArchive& ar);
	void Draw(CDC *dc) const;
	virtual void Shape_Draw(CDC *dc) const;
	CPoint getP1() const { return P1; }
	CPoint getP2() const { return P2; }
	void setP2(double x, double y) { P2.x = x; P2.y = y; }
	void setP1(double x, double y) { P1.x = x; P1.y = y; }
	void setMBg(COLORREF c) { bgColor = c; }
	void setFBg(COLORREF c) { FbgColor = c; }
	virtual void Redefine(CPoint p1, CPoint p2) { P1 = p1; P2 = p2; }
	virtual bool isInside(const CPoint &P) const;
	virtual void Shift(CPoint c1, CPoint c2);
};