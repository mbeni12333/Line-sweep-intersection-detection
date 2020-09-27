#include "SvgWriter.h"
#include <string>

#ifndef IDRAWABLE_H
#define IDRAWABLE_H

class IDrawable{
    public:
     virtual void draw(SVGWriter* svgw);   
};

#endif