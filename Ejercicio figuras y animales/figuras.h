#ifndef FIGURAS_H_INCLUDED
#define FIGURAS_H_INCLUDED

#include <iostream>

using namespace std;

class Figura{
protected:
    string color;
public:
    void setColor(string c);
    string getColor();

};

#endif // FIGURAS_H_INCLUDED
