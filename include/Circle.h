#ifndef CIRCLE_H
#define CIRCLE_H

#include "Point.h"
#include <iostream>

class Point;
class Circle
{
    public:
        Circle(int r=3);
        ~Circle();

        friend bool belongs(Point &, Circle &);

        int getr();

    private:
        int r;
};

#endif // CIRCLE_H
