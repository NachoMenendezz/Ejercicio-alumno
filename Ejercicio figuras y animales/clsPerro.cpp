#include <iostream>
#include "perro.h"

using namespace std;

void Perro::setRaza(string r)
{
    raza = r;
}

string Perro::getRaza()
{
    return raza;
}

void Perro::ladrar()
{
    cout<<nombre<<" ladro!"<<endl;
}

void Perro::morder()
{
    cout<<nombre<<" mordio!"<<endl;
}
