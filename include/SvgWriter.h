#include <sstream>
#include <string>
#include <fstream>
#include <iostream>

#ifndef SVGWRITER_H
#define SVGWRITER_H


#define CANVAS_SIZE 200

const std::string SVG_START("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n"
"<!DOCTYPE svg PUBLIC \"-//W3C//DTD SVG 1.1//EN\" \"http://www.w3.org/Graphics/SVG/1.1/DTD/svg11.dtd\">\n"
"<svg version=\"1.1\" id=\"Layer_1\" xmlns=\"http://www.w3.org/2000/svg\" xmlns:xlink=\"http://www.w3.org/1999/xlink\""
" x=\"0px\" y=\"0px\" width=\"100vw\" height=\"100vh\" viewBox=\"0 0 1000 500\""
" enable-background=\"new 0 0 1000 500\" xml:space=\"preserve\" style=\"margin: 10px;overflow: hidden;\">");


const std::string SVG_END("</svg>");

class SVGWriter {
public:
	SVGWriter(const std::string& color="green", int stroke=2);
	~SVGWriter();

	void circle(float x1, float y1, float radius=2);
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