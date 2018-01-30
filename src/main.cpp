//
// Created by soll_nevermind on 1/29/18.
//
#include <iostream>
#include "Point.h"

int main() {
	Point a;
	Point b(3, 5);
	Point c(b);
	Point d(b + c);

	std::cout << "1: " << a << std::endl;
	std::cout << "2: " << b << std::endl;
	std::cout << "3: " << c << std::endl;
	std::cout << "4: " << d << std::endl;

	b += d;
	a -= d;

	std::cout << "1: " << a << std::endl;
	std::cout << "2: " << b << std::endl;
	std::cout << "1==2: " << (a == b) << std::endl;

	a = b;

	std::cout << "1==2: " << (a == b) << std::endl;

	return 0;
}