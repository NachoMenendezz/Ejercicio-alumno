#include <iostream>
#include "Inscripcion.h"

using namespace std;

int proximoID = 1;

void Inscripcion::cargar(){
    cout<<"INGRESE LEGAJO :"<<endl;
    cin>>legajo;

    cout<<"INGRESE NUMERO DE MATERIA A INSCRIBIRSE :"<<endl;
    cin>>numeroMateria;

    ID = proximoID;
    proximoID++;

    cout<<"INSCRIPCION REALIZADA CON EXITO, ID :"<<ID<<endl;

    system("pause");
}
void Inscripcion::Mostrar(){
    cout << "ID: " << ID << endl;
    cout << "LEGAJO: " << legajo << endl;
    cout << "NUMERO DE MATERIA: " << numeroMateria << endl;
}


