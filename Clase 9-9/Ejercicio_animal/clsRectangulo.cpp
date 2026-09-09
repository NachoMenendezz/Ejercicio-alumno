#include <iostream>
#include "rectangulo.h"
#include "figuras.h"

using namespace std;
 void Rectangulo::setBase(float b){
    base=b;
 }
void Rectangulo::setAltura(float a){
    altura=a;
    }
    float Rectangulo::getBase (){return base;}
    float Rectangulo::getAltura(){return altura;}
float Rectangulo::area()
{
return base*altura;
}
float Rectangulo::perimetro(){
return base*2+altura*2;
}


