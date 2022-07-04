#include "Neighbor.h"

using namespace std;

Neighbor::Neighbor()
{
    name="John Kovalsky";
}

void Neighbor::info(Householder& householder){
    cout<<"Me (neighbor) <"<<name<<">:"<<endl;
    cout<<"\tknow secret of householder "<<endl;
    cout<<"\t<"<<householder.name<<"> : <"<<householder.secret<<">"<<endl;
    cout<<"\tand code to their home:"<<householder.code<<">"<<endl;
}

Neighbor::~Neighbor()
{
    //dtor
}
