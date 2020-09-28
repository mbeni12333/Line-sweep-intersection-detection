
#include "../include/SvgWriter.h"
#include "../include/point.h"


Point::Point(float x, float y):m_x(x), m_y(y){}
Point::~Point() {}

float Point::getX() { return m_x; }
float Point::getY() { return m_y; }
void Point::SetX(float x) { m_x = x;}
void Point::SetY(float y) {m_y = y;}


void Point::draw(SVGWriter *sv) {
	sv->circle(m_x, m_y);
}

Point* Point::random_point(float max_x, float max_y) {
	// generate teh random coordiantes, using the constraints
	float x = (float)rand() / (float)RAND_MAX * max_x;
	float y = (float)rand() / (float)RAND_MAX * max_y;

	return new Point(x, y);
}
