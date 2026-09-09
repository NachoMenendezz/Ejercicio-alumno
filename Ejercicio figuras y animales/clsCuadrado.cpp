#include <iostream>
#include "cuadrado.h"
#include "figuras.h"
using namespace std;

void Cuadrado::setlado(float l)
{
    lado=l;
}
float Cuadrado::getLado()
{
    return lado;
}
float Cuadrado::area(){
return lado*lado;
}
float Cuadrado::perimetro(){
return lado*4;
}
