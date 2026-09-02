#ifndef INSCRIPCION_H_INCLUDED
#define INSCRIPCION_H_INCLUDED
#include "clsAlumno.h"


class Inscripcion{
private:
    int ID;
    char nombreMateria[20];
    int legajo;
public:
    void cargar();
    void setID(int iD);
    void setNombreMateria(const char *Nm);
    void setLegajo(int l);
    void getID();
    const char *getNombreMateria();
    void getLegajo();


};


#endif // INSCRIPCION_H_INCLUDED
