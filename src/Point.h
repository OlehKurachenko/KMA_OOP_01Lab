//
// Created by soll_nevermind on 1/29/18.
//

#ifndef KMA_OOP_01LAB_POINT_H
#define KMA_OOP_01LAB_POINT_H

#include <iostream>

class Point {
public:
	explicit inline Point(double x = 0, double y = 0):
		_x(x),
		_y(y),
		pointID(freeID++)
	{
#ifndef NDEBUG
		std::cout << "constructor Point(" << x << ", " << y << ") call, point ID"
				  << pointID << " created" << std::endl;
#endif
	}

	inline Point(const Point &that):
		_x(that._x),
		_y(that._y),
		pointID(freeID++)
	{
#ifndef NDEBUG
		std::ostream& operator<<(std::ostream &, const Point&);
		std::cout << "constructor Point(" << that << ") call, point ID"
				  << pointID << " created" << std::endl;
#endif
	}

	inline ~Point() {
#ifndef NDEBUG
		std::ostream& operator<<(std::ostream &, const Point&);
		std::cout << "destructor " << *this << " call" << std::endl;
#endif
	}

	inline Point& operator=(const Point &that) {
		this->_x = that._x;
		this->_y = that._y;
	}

	inline double& x() {
		return this->_x;
	}

	inline double& y() {
		return this->_y;
	}

	inline const double& x() const {
		return this->_x;
	}

	inline const double& y() const {
		return this->_y;
	}

	const int getID() const {
		return this->pointID;
	}

	static const int amount() {
		return freeID;
	}

private:
	static unsigned int freeID;
	const unsigned int pointID;
	double _x;
	double _y;
};

std::ostream& operator<<(std::ostream &ostr, const Point &point);

Point& operator+=(Point&, const Point&);

inline const Point operator+(const Point &u, const Point &v) {
	Point t(u);
	return (t+=v);
}

Point& operator-=(Point&, const Point&);

inline const Point operator-(const Point &u, const Point &v) {
	Point t(u);
	return (t-=v);
}

inline bool operator==(const Point &one, const Point &another) {
	if (one.x() != another.x())
		return false;
	return (one.y() == another.y());
}

inline bool operator!=(const Point &one, const Point &another) {
	return !(one == another);
}

#endif //KMA_OOP_01LAB_POINT_H
