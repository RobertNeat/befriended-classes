#include <iostream>
#include <math.h>

#include "Householder.h"
#include "Neighbor.h"

#include "Point.h"
#include "Circle.h"

using namespace std;

string neighbor(int newCode,Householder& ref){
    ref.code=newCode;
    return ref.secret;
}

bool belongs(Point &refPoint, Circle &refCircle){
    if((pow(refPoint.x,2)+pow(refPoint.y,2))<=pow((refCircle.r),2)){return true;}
    return false;
}

void line(){cout<<"----------------------------------------------------------\n";}
void dLine(){cout<<"========================================================\n";}

int main()
{
    cout<<"Starting alarm code:"<<Householder::getCode()<<endl<<endl;

    Householder father("Adam(father)","We are ruined - we have mortgage on our house");
    Householder mother("Ewa(mother)","Our finances are well managed");
    Householder son("Jack(son)","I want new bicycle for my birthday");

line();

    cout<<"Befriended function neighbor (change father code):"<<neighbor(123,father)<<endl;
    cout<<"\tCode after change:"<<Householder::getCode()<<endl<<endl;

    cout<<"Befriended function neighbor (change mother code):"<<neighbor(321,mother)<<endl;
    cout<<"\tCode after change:"<<Householder::getCode()<<endl<<endl;

    cout<<"Befriended function neighbor (change son code):"<<neighbor(456,son)<<endl;
    cout<<"\tCode after change:"<<Householder::getCode()<<endl<<endl;

line();

    Neighbor neighbor;

    neighbor.info(father);
    neighbor.info(mother);
    neighbor.info(son);

dLine();

    cout<<"Object point:"<<endl;
    Point point(3,4);
    cout<<"X:"<<point.getx()<<endl;
    cout<<"Y:"<<point.gety()<<endl;

line();

    cout<<"Object circle:"<<endl;
    Circle circle(5);
    cout<<"R:"<<circle.getr()<<endl;

line();

    //checking using set method
    cout<<"Is point contained inside the circle"<<endl;
    if(pow(point.getx(),2)+pow(point.gety(),2)<=pow(circle.getr(),2)){cout<<"Yes"<<endl;}
    else{cout<<"No"<<endl;}

line();

    //using befriended function "belongs"
    cout<<"Point belongs to circle (1-yes, 0-no):"<<endl;
    cout<<belongs(point, circle)<<endl;

    return 0;
}

