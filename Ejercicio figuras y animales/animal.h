#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED

#include <iostream>

using namespace std;

class Animal
{
protected:
    string nombre;
    float peso;

public:
    void setNombre(string n);
    string getNombre();

    void setPeso(float p);
    float getPeso();
};

#endif // ANIMAL_H_INCLUDED
