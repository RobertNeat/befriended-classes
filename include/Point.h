#ifndef POINT_H
#define POINT_H

#include "Circle.h"

class Circle;
class Point
{
    public:
        Point(int x=1, int y=2);
        ~Point();

        friend bool belongs(Point &, Circle &);

        void movement(int x, int y);

        int getx();
        int gety();
    private:
        int x,y;
};

#endif // POINT_H
