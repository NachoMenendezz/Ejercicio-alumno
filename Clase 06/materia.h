#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED
#include "clsAlumno.h"

class Materia{
private:
    int NumMat;
    char nombreMat[20];
    int cuatrimestre;
public:
   void setNumMat (int Numero);
   void setNombreMat(const char *NM);
   void setCuatrimestre (int cuatri);
   void Cargar();
   void Mostrar();
   int getNumMat();
   const char *getNombreMat();
   int getCuatrimestre();

};


#endif // MATERIA_H_INCLUDED
