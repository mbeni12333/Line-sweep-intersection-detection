#include "IDrawable.h"
#include "point.h"

#ifndef SEGMENT_H
#define SEGMENT_H

class Segment : public IDrawable {
public:
	Segment(Point* p1, Point* p2);
	~Segment();

	Point* getP1();
	Point* getP2();

	static Point* intersects(Segment* s1, Segment* s2);

	void draw(SVGWriter *sv) override;
private:
	Point* m_p1;
	Point* m_p2;

};

#endif