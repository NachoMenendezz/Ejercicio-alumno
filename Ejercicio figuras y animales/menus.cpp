#include <iostream>
#include "menus.h"
#include "cuadrado.h"
#include "rectangulo.h"
#include "circulo.h"
#include "perro.h"
#include "gato.h"
#include "pajaro.h"

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
            menuAnimales();
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
            menuCirculo();
            break;
        case 0:
            return;
        }
system("pause");
    }
}
void menuCuadrado()
{
    Cuadrado obj;
    float lado;
    string color;
    cout<<"INGRESAR COLOR DEL CUADRADO: ";
    cin>>color;
    cout<<"INGRESAR VALOR DEL LADO: ";
    cin>>lado;
    obj.setlado(lado);
    obj.setColor(color);
    cout<<endl;
    cout<<"COLOR: "<<obj.getColor()<<endl;
    cout<<"AREA: "<<obj.area()<<endl;
    cout<<"PERIMETRO: "<<obj.perimetro()<<endl;
}
void menuRectangulo()
{
    Rectangulo obj;
    float base,altura;
    string color;
    cout<<"INGRESAR COLOR DEL RECTANGULO: ";
    cin>>color;
    cout<<"INGRESAR VALOR DE LA BASE: ";
    cin>>base;
    obj.setBase(base);
    obj.setColor(color);
    cout<<"INGRESAR VALOR DE ALTURA: ";
    cin>>altura;
    cout<<endl;
    obj.setAltura(altura);
    cout<<"COLOR: "<<obj.getColor()<<endl;
    cout<<"AREA: "<<obj.area()<<endl;
    cout<<"PERIMETRO: "<<obj.perimetro()<<endl;
}
void menuCirculo(){
    Circulo obj;
    float radio;
    string color;
    cout<<"INGRESAR COLOR DEL CIRCULO: ";
    cin>>color;
    cout<<"INGRESAR VALOR DEL RADIO: ";
    cin>>radio;
    cout<<endl;

    obj.setRadio(radio);
    obj.setColor(color);
    cout<<"COLOR: "<<obj.getColor()<<endl;
    cout<<"AREA: "<<obj.area()<<endl;
    cout<<"PERIMETRO: "<<obj.perimetro()<<endl;
}

void menuAnimales()
{
    while (true)
    {
        int opc;

        system("cls");

        cout<<"MENU ANIMALES"<<endl;
        cout<<"==================="<<endl;
        cout<<"1.PERRO"<<endl;
        cout<<"2.GATO"<<endl;
        cout<<"3.PAJARO"<<endl;
        cout<<"0.SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION:";
        cin>>opc;

        system("cls");

        switch(opc)
        {
        case 1:
            menuPerro();
            break;

        case 2:
            menuGato();
            break;

        case 3:
            menuPajaro();
            break;

        case 0:
            return;
        }

        system("pause");
    }
}

void menuPerro()
{
    Perro obj;
    string nombre, raza;
    float peso;
    int opc;

    cout<<"INGRESAR NOMBRE: ";
    cin>>nombre;

    cout<<"INGRESAR PESO: ";
    cin>>peso;

    cout<<"INGRESAR RAZA: ";
    cin>>raza;

    obj.setNombre(nombre);
    obj.setPeso(peso);
    obj.setRaza(raza);

    while(true)
    {
        system("cls");

        cout<<"MENU PERRO"<<endl;
        cout<<"==================="<<endl;
        cout<<"1. MOSTRAR DATOS"<<endl;
        cout<<"2. LADRAR"<<endl;
        cout<<"3. MORDER"<<endl;
        cout<<"0. SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION: ";
        cin>>opc;

        system("cls");

        switch(opc)
        {
        case 1:
            cout<<"NOMBRE: "<<obj.getNombre()<<endl;
            cout<<"PESO: "<<obj.getPeso()<<endl;
            cout<<"RAZA: "<<obj.getRaza()<<endl;
            break;

        case 2:
            obj.ladrar();
            break;

        case 3:
            obj.morder();
            break;

        case 0:
            return;
        }

        system("pause");
    }
}


void menuGato()
{
    Gato obj;
    string nombre;
    float peso;
    int opc;

    cout<<"INGRESAR NOMBRE: ";
    cin>>nombre;

    cout<<"INGRESAR PESO: ";
    cin>>peso;

    obj.setNombre(nombre);
    obj.setPeso(peso);

    while(true)
    {
        system("cls");

        cout<<"MENU GATO"<<endl;
        cout<<"==================="<<endl;
        cout<<"1.MOSTRAR DATOS"<<endl;
        cout<<"2.MAULLAR"<<endl;
        cout<<"3.ARANAR"<<endl;
        cout<<"0.SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION:";
        cin>>opc;

        system("cls");

        switch(opc)
        {
        case 1:
            cout<<"NOMBRE: "<<obj.getNombre()<<endl;
            cout<<"PESO: "<<obj.getPeso()<<endl;
            break;
        case 2:
            obj.maullar();
            break;
        case 3:
            obj.aranar();
            break;
        case 0:
            return;
        }

        system("pause");
    }
}

void menuPajaro()
{
    Pajaro obj;
    string nombre, color;
    float peso;
    int opc;

    cout<<"INGRESAR NOMBRE: ";
    cin>>nombre;

    cout<<"INGRESAR PESO: ";
    cin>>peso;

    cout<<"INGRESAR COLOR: ";
    cin>>color;

    obj.setNombre(nombre);
    obj.setPeso(peso);
    obj.setColor(color);

    while(true)
    {
        system("cls");

        cout<<"MENU PAJARO"<<endl;
        cout<<"==================="<<endl;
        cout<<"1.MOSTRAR DATOS"<<endl;
        cout<<"2.CANTAR"<<endl;
        cout<<"3.VOLAR"<<endl;
        cout<<"0.SALIR"<<endl;
        cout<<"==================="<<endl;
        cout<<"INGRESE UNA OPCION:";
        cin>>opc;

        system("cls");

        switch(opc)
        {
        case 1:
            cout<<"NOMBRE: "<<obj.getNombre()<<endl;
            cout<<"PESO: "<<obj.getPeso()<<endl;
            cout<<"COLOR: "<<obj.getColor()<<endl;
            break;
        case 2:
            obj.cantar();
            break;
        case 3:
            obj.volar();
            break;
        case 0:
            return;
        }

        system("pause");
    }
}
