#include <iostream>
#include "menus.h"
using namespace std;


void menuPrincipal(){
    int opc;
    Alumno *vAlumnos=nullptr;
    Materia materia[20];
    Inscripcion *inscripcion=nullptr;
    int cantAlumnos;
    cout<<"INGRESE LA CANTIDAD DE ALUMNOS A CARGAR: ";
    cin>>cantAlumnos;
    int cantInscripciones = 0;
    if(cantAlumnos <= 0){
        cout<<"LA CANTIDAD INGRESADA NO ES VALIDA."<<endl;
        return;
    }
    vAlumnos = new Alumno[cantAlumnos];
    int inscripciones=cantAlumnos*4;
    inscripcion= new Inscripcion[inscripciones];
    if(vAlumnos == nullptr){
        cout<<"ERROR DE ASIGNACION DE MEMORIA"<<endl;
        return;
    }
    while(true){
        system("cls");
        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"==================="<<endl;
        cout<<"1 - ALUMNOS"<<endl;
        cout<<"2 - MATERIAS"<<endl;
        cout<<"3 - INGRESOS"<<endl;
        cout<<"4 - DOCENTES"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                menuAlumnos(vAlumnos, cantAlumnos);
                break;
            case 2:menuMateria(materia);
                break;
            case 3: menuInscripcion(inscripcion, cantInscripciones);
                break;


            case 0:
                delete[] vAlumnos;
                delete[]inscripcion;
                return;
        }
    }
}

void menuAlumnos(Alumno *vAlumnos, int cantAlumnos){
    int opc;
    while(true){
        system("cls");
        cout<<"MENU ALUMNOS"<<endl;
        cout<<"==================="<<endl;
        cout<<"1 - CARGAR ALUMNOS"<<endl;
        cout<<"2 - MOSTRAR ALUMNOS"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
        switch(opc){
            case 1:
                cargarAlumnos(vAlumnos, cantAlumnos);
                break;
            case 2:
                mostrarAlumnos(vAlumnos, cantAlumnos);
                break;
            case 0:
                return;
        }
        system("pause");
    }
}

void cargarAlumnos(Alumno *vec, int tam){
    for(int i=0; i<tam; i++){
        vec[i].Cargar();
    }
}
void mostrarAlumnos(Alumno *vec, int tam){
    for(int i=0; i<tam; i++){
        vec[i].Mostrar();
        cout<<endl;
    }
}
void menuMateria(Materia *materia)
{

int opc;
    while(true)
    {
        system("cls");
        cout<<"MENU MATERIA"<<endl;
        cout<<"==================="<<endl;
        cout<<"1 - CARGAR MATERIA"<<endl;
        cout<<"2 - MOSTRAR MATERIAS"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;
        system("cls");
switch (opc)
        {
case 1: cargarMateria(materia);
break;
case 2: mostrarMateria(materia);
break;
case 0:return;


        }
system ("pause");

    }
}
void cargarMateria(Materia vec[])
{
for (int i=0;i<3;i++)
    {
    vec[i].Cargar();
    system("pause");
    system("cls");
    }

}
void mostrarMateria(Materia vec[])
{
for (int i=0;i<3;i++)
    {
    vec[i].Mostrar();
    }

}

void menuInscripcion(Inscripcion *inscripcion, int &cantInscripciones)
{
    int opc;

    while(true)
    {
        system("cls");

        cout<<"MENU INSCRIPCION"<<endl;
        cout<<"==================="<<endl;
        cout<<"1 - CARGAR INSCRIPCION"<<endl;
        cout<<"2 - MOSTRAR INSCRIPCIONES"<<endl;
        cout<<"0 - SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;

        system("cls");

        switch(opc)
        {
            case 1:
                cargarInscripcion(inscripcion, cantInscripciones);
                break;

            case 2:
                mostrarInscripciones(inscripcion, cantInscripciones);
                break;

            case 0:
                return;
        }

        system("pause");
    }
}

void cargarInscripcion(Inscripcion *ins, int &pos)
{
    int cont = 0;

    while(cont < 4)
    {
        ins[pos].cargar();

        cont++;
        pos++;

        if(cont == 4)
        {
            cout << "YA ALCANZASTE EL MAXIMO DE 4 INSCRIPCIONES." << endl;
            return;
        }

        cout << "DESEAS INSCRIBIRTE A OTRA MATERIA MAS ?" << endl;
        cout << "1 = SI, 2 = NO" << endl;

        int opc;
        cin >> opc;

        if(opc == 2)
            return;
    }
}


void mostrarInscripciones(Inscripcion *ins, int cant)
{
    for(int i = 0; i < cant; i++)
    {
        ins[i].Mostrar();
        cout << endl;
    }
}

