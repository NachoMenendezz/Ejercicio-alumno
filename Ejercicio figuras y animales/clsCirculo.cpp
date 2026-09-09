#include <iostream>
#include "circulo.h"
using namespace std;

void Circulo::setRadio(float r)
{
    radio=r;
}
float Circulo::getRadio()
{
    return radio;
}
float Circulo::area()
{
    return (radio*radio)*3.14;
}
float Circulo::perimetro()
{
    return 2*3.14*radio;
}
