#include "../include/SvgWriter.h"
#include "../include/point.h"
#include "../include/segment.h"
#include <iostream>
#include <cstdlib>

int main(int argc, char* argv[]){

	std::cout << "Hello to my very nice programme v0.1" << std::endl;

	// if didn't provide arguments
	if(argc != 2){

	}
	// test generate svg
	SVGWriter sv;


	srand(time(nullptr));

	for(int i=0; i<100; i++){

		Point* p2 = Point::random_point() ;
		Point* p1 = Point::random_point() ;

		Segment s(p1, p2);

		s.draw(&sv);
	}

	sv.save();

	return 0;
}