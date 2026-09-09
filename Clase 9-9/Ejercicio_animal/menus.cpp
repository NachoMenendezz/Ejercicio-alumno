#include <iostream>
#include "menus.h"
#include "cuadrado.h"
#include "rectangulo.h"
using namespace std;

void menuPrincipal()
{

    while (true)
    {
        int opc;

        cout<<"MENU PRINCIPAL"<<endl;
        cout<<"==================="<<endl;
        cout<<"1.FIGURAS"<<endl;
        cout<<"2.ANIMALES"<<endl;
        cout<<"0.SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION:";
        cin>>opc;
        system("cls");
        switch (opc)
        {
        case 1:
            menuFiguras();
            break;
        case 2:
           // menuAnimales();
            break;
        case 0:
            return ;
        }
    }

}

void menuFiguras()
{
    while (true)
    {
        int opc;
        system("cls");
        cout<<"MENU FIGURAS"<<endl;
        cout<<"==================="<<endl;
        cout<<"1.CUADRADO"<<endl;
        cout<<"2.RECTANGULO"<<endl;
        cout<<"3.CIRCULO"<<endl;
        cout<<"0.SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION:";
        cin>>opc;
        system("cls");
        switch(opc)
        {
        case 1:
            menuCuadrado();
            break;
        case 2:
            menuRectangulo();
            break;
        case 3:
            //menuCirculo();
            break;
        case 0:
            return;
        }
system("pause");
    }
}
void menuCuadrado()
{
    Cuadrado cuadrado;
    cout<<"INGRESAR VALOR DEL LADO"<<endl;
    float lado;
    cin>>lado;
    cuadrado.setlado(lado);
    cout<<"AREA: "<<cuadrado.area()<<endl;
    cout<<"PERIMETRO :"<<cuadrado.perimetro()<<endl;
    cuadrado.perimetro();
}
void menuRectangulo()
{
    Rectangulo rectangulo;
    float base,altura;
    cout<<"INGRESAR VALOR DE LA BASE :"<<endl;
    cin>>base;
    rectangulo.setBase(base);
    cout<<"INGRESAR VALOR DE ALTURA :"<<endl;
    cin>>altura;
    rectangulo.setAltura(altura);
    cout<<"AREA :"<<rectangulo.area()<<endl;
    cout<<"PERIMETRO :"<<rectangulo.perimetro()<<endl;
}
