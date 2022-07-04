#include "Householder.h"
#include <iostream>

using namespace std;

int Householder::code=1111;

Householder::Householder(string name, string secret)
{
    this->name=name;
    this->secret=secret;
}

void Householder::setCode(int c){
    c=code;
}

int Householder::getCode(){
    return code;
}

void Householder::display(){
    cout<<"Name:"<<name<<endl;
    cout<<"Code:"<<code<<endl;
    cout<<"Secret:"<<secret<<endl;
}

Householder::~Householder()
{
    //dtor
}
