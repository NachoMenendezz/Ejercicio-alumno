#include <iostream>
#include "figuras.h"
using namespace std;

void Figura::cargar(){
cout<<"INGRESE COLOR: "<<endl;
cin>>color;
}
void Figura::mostrar(){
cout<<"COLOR: "<<color<<endl;
}
void Figura::setColor(string c){
    color=c;

}
string Figura::getColor(){

    return color;
}


