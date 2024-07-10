#include "Point.hpp"
#include <iostream>

static Fixed abs(Fixed const &n) {
    return n > 0 ? n : n * -1;
}

// Function to calculate the area of the triangle
static Fixed area(Point const &a, Point const &b, Point const &c) {
    return ((a.getX() * (b.getY() - c.getY()) + b.getX() * (c.getY() - a.getY()) + c.getX() * (a.getY() - b.getY())) / 2);
}

// Function to check if a point p is inside the triangle formed by a, b, and c
bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed const total_area = abs(area(a, b, c));
    Fixed const area1 = abs(area(point, a, b));
    Fixed const area2 = abs(area(point, b, c));
    Fixed const area3 = abs(area(point, c, a));
    return (total_area == area1 + area2 + area3);
}
