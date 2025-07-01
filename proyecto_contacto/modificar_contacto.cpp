#include "modificar_contacto.h"
#include "leer_contacto.h"
#include<iostream>
using namespace std;
void modificarcontacto(contactoEmail &c){
    string nomd, userd, domaind;
    char sexd;
    int edadd;
    cout<<"Ingrese los datos de un usuario: "<<endl;
    cin.ignore();
    cout<<"Ingrese el nombre del contacto: "; getline(cin,nomd);
    cout<<"Ingrese el sexo (M/F): "; cin>>sexd;
    cout<<"Ingrese la edad: "; cin>>edadd;
    cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
    cout<<"\tIngrese el usuario: "; cin>>userd;
    cout<<"\tIngrese el dominio: "; cin>>domaind;
    c.nom=nomd;
    c.sex=sexd;
    c.edad=edadd;
    c.email.user=userd;
    c.email.domain=domaind;
}