#include <iostream>
#include "pajaro.h"

using namespace std;

void Pajaro::setColor(string c)
{
    color=c;
}

string Pajaro::getColor()
{
    return color;
}

void Pajaro::cantar()
{
    cout<<nombre<<" canto!"<<endl;
}

void Pajaro::volar()
{
    cout<<nombre<<" volo!"<<endl;
}
