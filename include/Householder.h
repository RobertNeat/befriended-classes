#ifndef HOUSEHOLDER_H
#define HOUSEHOLDER_H

#include <iostream>
#include "Neighbor.h"

using namespace std;

class Householder
{
    public:
        Householder(string name="householder_name", string secret="#secret#");
        ~Householder();

        static void setCode(int code);
        static int getCode();

        void display();

        friend string neighbor(int newCode,Householder& ref);
        friend class Neighbor;

    private:
        string name,secret;
        static int code;
};

#endif // HOUSEHOLDER_H
