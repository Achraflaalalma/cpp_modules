#include "Point.hpp"

// default constructor
Point::Point() : x(0), y(0) {}

// constructor
Point::Point(float const x, float const y) : x(x), y(y) {}

// copy constructor
Point::Point(Point const &rhs) : x(rhs.x), y(rhs.y) {}

// copy assignment operator
Point &Point::operator=(Point const &rhs) {
    if (this != &rhs) {
        (Fixed)this->x = rhs.x;
        (Fixed)this->y = rhs.y;
    }
    return *this;
}

// destructor
Point::~Point() {}

// getter for x
Fixed Point::getX() const {
    return this->x;
}

// getter for y
Fixed Point::getY() const {
    return this->y;
}
