#include <iostream>
#include "materia.h"
using namespace std;

void Materia::Cargar(){
    cout<<"INGRESE NUMERO DE LA MATERIA :"<<endl;
    cin>>NumMat;
    cout<<"INGRESE EL NOMBRE DE LA MATERIA :"<<endl;
    cin.ignore();
    cin.getline(nombreMat, 20);
    cout<<"INGRESE CUATRIMESTRE AL QUE PERTENECE :"<<endl;
    cin>>cuatrimestre;

};
void Materia::Mostrar(){
cout<<"NUMERO DE LA MATERIA :"<<NumMat<<endl;
cout<<"NOMBRE DE LA MATERIA :"<<nombreMat<<endl;
cout<<"PERTENECE AL CUATRIMESTRE :"<<cuatrimestre<<endl;


};


