#ifndef NEIGHBOR_H
#define NEIGHBOR_H

#include "Householder.h"
#include <iostream>

using namespace std;

class Householder;
class Neighbor
{
    public:
        Neighbor();
        ~Neighbor();

        void info(Householder& householder);

    private:
        string name;
};

#endif // NEIGHBOR_H
