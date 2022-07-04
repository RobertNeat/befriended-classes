#include "Point.h"
#include <iostream>

Point::Point(int x, int y)
{
    this->x=x;
    this->y=y;
}

Point::~Point()
{
    //dtor
}

void Point::movement(int x, int y){
    this->x+=x;
    this->y+=y;
}

int Point::getx(){
    return x;
}

int Point::gety(){
    return y;
}
