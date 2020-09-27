#include <sstream>
#include <string>

#ifndef SVGWRITER_H
#define SVGWRITER_H

const std::string SVG_START("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\
<svg version=\"1.1\" id=\"Layer_1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\" x=\"0px\" y=\"0px\"\
width=\"48px\" height=\"48px\" viewBox=\"0 0 100 100\" enable-background=\"new 0 0 100 100\" xml:space=\"preserve\">")


class SVGWriter {
public:
	SVGWriter();
	~SVGWriter();

	void circle(float x1, float y1, float radius);
	void line(float x1, float y1, float x2, float y2);


	// setters and getters
	void setColor(std::string &color);
	std::string getColor();
	void setStroke(int stroke);
	int getStroke();

	// internal operations for saving, and clearing
	void clear();
	void save();

private:
	std::string m_current_color;
	int m_current_stroke;
	std::stringstream output;
};

#endif