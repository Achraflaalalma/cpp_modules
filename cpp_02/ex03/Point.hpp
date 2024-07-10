#include "Fixed.hpp"

class Point {
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(float const x, float const y);
    Point(Point const &rhs);
    ~Point();
    Point &operator=(Point const &rhs);
    Fixed getX() const;
    Fixed getY() const;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);