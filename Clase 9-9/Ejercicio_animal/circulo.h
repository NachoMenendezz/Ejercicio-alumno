#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED
#include "figuras.h"
class Circulo : public Figura{
private:
    int radio;
public:
    void setRadio(int r);
    int getRadio ();


};

#endif // CIRCULO_H_INCLUDED
