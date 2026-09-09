#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "figuras.h"
class Circulo : public Figura{
private:
    float radio;
public:
    void setRadio(float r);
    float getRadio ();
    float area();
    float perimetro();


};

#endif // CIRCULO_H_INCLUDED
