#ifndef CUADRADO_H_INCLUDED
#define CUADRADO_H_INCLUDED
#include "figuras.h"
#include <iostream>
using namespace std;

class Cuadrado : public Figura{
private:
    float lado;
public:
    void setlado(float l);
    float getLado ();
     float area();
    float perimetro();

};

#endif // CUADRADO_H_INCLUDED
