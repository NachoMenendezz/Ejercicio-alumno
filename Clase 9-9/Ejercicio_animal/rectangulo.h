#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED

#include <iostream>
#include "figuras.h"
using namespace std;

class Rectangulo : public Figura{
private:
    float base;
    float altura;
public:
    void setBase(float b);
    void setAltura(float a);
    float getBase ();
    float getAltura();
    float area();
    float perimetro();


};

#endif // RECTANGULO_H_INCLUDED
