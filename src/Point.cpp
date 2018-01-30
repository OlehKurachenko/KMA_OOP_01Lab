//
// Created by soll_nevermind on 1/29/18.
//

#include "Point.h"

unsigned int Point::freeID = 0;

std::ostream& operator<<(std::ostream &ostr, const Point &point) {
	ostr << "Point{x=" << point.x() << ",y=" << point.y() << ')' << std::endl;
}

Point& operator+=(Point &one, const Point &another) {
	one.x() += another.x();
	one.y() += another.y();
}

Point& operator-=(Point &one, const Point &another) {
	one.x() += another.x();
	one.y() += another.y();
}