#include "Circle.h"

Circle::Circle(int r)
{
    this->r=r;
}

Circle::~Circle()
{
    //dtor
}

int Circle::getr(){
    return r;
}
