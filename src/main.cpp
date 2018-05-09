//
//  Created by Oleh Kurachenko
//         aka okurache
//
//  ask me      oleh.kurachenko@gmail.com , I'm ready to help
//  GitHub      https://github.com/OlehKurachenko
//  rate & CV   http://www.linkedin.com/in/oleh-kurachenko-6b025b111
//

#include <iostream>
#include <cassert>
#include "Point.h"

int main() {
	Point a;

    assert(a.x() == 0 && a.y() == 0);

	Point b(3, 5);

	assert(b.x() == 3 && b.y() == 5);

	const Point c(b);

	assert(c.x() == b.x() && c.y() == b.y());

	Point d(b + c);

	assert(d.x() == b.x() + c.x());
	assert(d.y() == b.y() + c.y());

	b += d;

	assert(c.x() + d.x() == b.x());
    assert(c.y() + d.y() == b.y());

	a -= d;

	assert(a.x() == -d.x());
	assert(a.y() == -d.y());

	a.x() = 0;
	a.y() = 0;

	b = a;

    assert(a.x() == 0 && a.y() == 0);
    assert(b.x() == 0 && b.y() == 0);

	assert((c + a).x() == c.x());
	assert((c + a).y() == c.y());

    assert((a - c).x() == -c.x());
    assert((a - c).y() == -c.y());

    assert((a + c - c) == a);
    assert(a + c != a);

    std::cout << "\033[1;32m" << "tests: all ok!" << "\033[0;0m" << std::endl;

	return 0;
}