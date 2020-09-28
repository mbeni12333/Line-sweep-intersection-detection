#include "../include/SvgWriter.h"


SVGWriter::SVGWriter(const std::string &color, int stroke):
					m_current_stroke(stroke),
					m_current_color(color) {

}
SVGWriter::~SVGWriter() {}


void SVGWriter::circle(float x1, float y1, float radius) {
	// add a cirle tag to the stringstream buffer
	this->output << "<circle "
					"   cx=\"" << x1 <<
					"\" cy=\"" << y1 <<
					"\" r=\"" << radius <<
					"\" />" << std::endl;
}
void SVGWriter::line(float x1, float y1, float x2, float y2) {
	// add a line tag to the stringstream buffer
		this->output << "<line "
					"x1=\"" << x1 <<
					"\" y1=\"" << y1 <<
					"\" x2=\"" << x2 <<
					"\" y2=\"" << y2 <<
					"\" stroke=\"" << m_current_color <<
					"\" stroke-width=\"" << m_current_stroke <<
					"\"/>" << std::endl;
}
void SVGWriter::setColor(std::string &color) { m_current_color = color; }
std::string SVGWriter::getColor() { return m_current_color; }
void SVGWriter::setStroke(int stroke) { m_current_stroke = stroke; }
int SVGWriter::getStroke() { return m_current_stroke; }

void SVGWriter::clear() { output.clear(); }
void SVGWriter::save() {

	// create the file
	std::ofstream file("map.svg");

	if(!file){
		std::cerr << "File could not be created" << std::endl;
	}
	// write the svg header
	file << SVG_START << std::endl;
	// write the output
	file << output.str() << std::endl;
	// write the svg footer
	file << SVG_END << std::endl;

	file.close();
}

