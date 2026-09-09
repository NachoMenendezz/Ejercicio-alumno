#ifndef PAJARO_H_INCLUDED
#define PAJARO_H_INCLUDED

#include "animal.h"

class Pajaro : public Animal
{
private:
    string color;

public:
    void setColor(string c);
    string getColor();

    void cantar();
    void volar();
};

#endif // PAJARO_H_INCLUDED
