#include "../include/segment.h"

Segment::Segment(Point *p1, Point *p2){

	// for convenience purpous we want to have the p1 being the point furthest to the left
	if(p1->getX() < p2->getX()){
		this->m_p1 = p1;
		this->m_p2 = p2;
	}else{
		this->m_p1 = p2;
		this->m_p2 = p1;
	}
}
Segment::~Segment(){}


Point *Segment::getP1() { return m_p1; }
Point *Segment::getP2() { return m_p2; }


void Segment::draw(SVGWriter *sv){

	// draw the line on the back
	sv->line(m_p1->getX(), m_p1->getY(), m_p2->getX(), m_p2->getY());
	// then draw the points on top
	m_p1->draw(sv);
	m_p2->draw(sv);
}

// this method outputs a point in case the segments intersect
// or NULL otherwise
Point* Segment::intersects(Segment *s1, Segment *s2) {
	
	return false;
}
