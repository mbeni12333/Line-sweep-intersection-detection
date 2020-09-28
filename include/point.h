#include "IDrawable.h"
#include <cstdlib>

#ifndef POINT_H
#define POINT_H

class Point : public IDrawable {
public:
	Point(float x=.0f, float y=.0f);
	~Point();

	float getX();
	float getY();
	void SetX(float x);
	void SetY(float y);

	static Point* random_point(float max_x=980, float max_y=480);

	void draw(SVGWriter *sv) override;
private:
	float m_x;
	float m_y;

};

#endif