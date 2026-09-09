#include <iostream>
#include "animal.h"

using namespace std;

void Animal::setNombre(string n)
{
    nombre = n;
}

string Animal::getNombre()
{
    return nombre;
}

void Animal::setPeso(float p)
{
    peso = p;
}

float Animal::getPeso()
{
    return peso;
}
