#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#include "clsAlumno.h"


class Inscripcion{
private:
    int ID;
    int numeroMateria;
    int legajo;
public:
    void cargar();
    void Mostrar();
    void setID(int iD);
    void setNumeroMateria(int Nm);
    void setLegajo(int l);
    void getID();
    void getNumeroMateria();
    void getLegajo();


};


#endif // INSCRIPCION_H_INCLUDED
