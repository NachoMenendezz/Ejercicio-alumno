#ifndef PERRO_H_INCLUDED
#define PERRO_H_INCLUDED

#include "animal.h"

class Perro : public Animal
{
private:
    string raza;

public:
    void setRaza(string r);
    string getRaza();

    void ladrar();
    void morder();
};

#endif // PERRO_H_INCLUDED
