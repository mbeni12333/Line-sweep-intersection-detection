#include "../include/SvgWriter.h"


SVGWriter::SVGWriter(){}
SVGWriter::~SVGWriter(){}



void SVGWriter::circle(float x1, float y1, float radius){

}
void SVGWriter::line(float x1, float y1, float x2, float y2){

}
void SVGWriter::setColor(std::string &color){
	m_current_color = color;
}
std::string SVGWriter::getColor() { return m_current_color; }
void SVGWriter::setStroke(int stroke){
	m_current_stroke = stroke;
}
int SVGWriter::getStroke() { return m_current_stroke; }

void SVGWriter::clear(){
	output.clear();
}
void SVGWriter::save(){
	// write the svg header


	// write the output
	output.str();
	// write the svg footer
}
