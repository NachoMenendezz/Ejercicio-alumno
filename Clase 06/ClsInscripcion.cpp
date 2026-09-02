#include <iostream>
#include "Inscripcion.h"
#include <stdlib.h>

using namespace std;
void Inscripcion::cargar(){
cout<<"INGRESE LEGAJO :"<<endl;
cin>>legajo;
cout<<"INGRESE MATERIA A INSCRIBIRSE :"<<endl;
cin.ignore();
cin.getline(nombreMateria, 20);
system("pause");
system("pause");
int numero = rand() % 100 + 1;
cout<<"INSCRIPCION REALIZADA CON EXITO, ID :"<<numero<<endl;



}
