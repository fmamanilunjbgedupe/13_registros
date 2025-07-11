#include<iostream>
#include "leer_contacto.h"
#include "modificar_contacto.h"
#include "imprimir_contacto.h"
using namespace std;

int main(){
    int n,nm,op;
    string nom, user, domain;
    char sex;
    int edad;
    correo email;
    contactoEmail cont, lista[100];
    n = 0;
    do{
        system("cls");
        cout<<"Menu de opciones -------------------------"<<endl;
        cout<<"1. Agregar contacto"<<endl;
        cout<<"2. Modificar un contacto"<<endl;
        cout<<"3. Mostrar contactos "<<endl;
        cout<<"4. Eliminar contactos"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Elige una opcion: "; cin>>op;
        switch(op){
            case 1:
                cout<<"Ingrese los datos de un usuario: "<<endl;
                cin.ignore();
                cout<<"Ingrese el nombre del contacto: "; getline(cin,nom);
                cout<<"Ingrese el sexo (M/F): "; cin>>sex;
                cout<<"Ingrese la edad: "; cin>>edad;
                cout<<"Ingrese el correo electronico (usuario@dominio): "<<endl;
                cout<<"\tIngrese el usuario: "; cin>>user;
                cout<<"\tIngrese el dominio: "; cin>>domain;
                
                leerCorreo(email,user,domain);
                leerContacto(cont,nom,sex,edad,email);
                //imprimeContacto(cont);

                lista[n] = cont;
                n++;
                system("pause");
                break;
            case 3:
                cout<<" Id  Nombre                              sexo         edad   correo electronico"<<endl;
                for(int i=0;i<n;i++){
                imprimeContacto(lista[i],i);
                }
                system("pause");
                break;
            case 2:
            cout<<" Id  Nombre                              sexo         edad   correo electronico"<<endl;
            for(int i=0;i<n;i++){
                imprimeContacto(lista[i],i);
            }
                cout<<"ingrese el orden del contacto a modificar"<<endl;cin>>nm;
                modificarcontacto(lista[nm-1]);
                break;
            case 4:
                cout<<" Id  Nombre                              sexo         edad   correo electronico"<<endl;
                for(int i=0;i<n;i++){
                    imprimeContacto(lista[i],i);
                }
                system("pause");
                cout<<"ingrese el numero de contacto a eliminar"<<endl;cin>>nm;
                for(int i=nm-1;i<n;i++){
                    lista[i]=lista[i+1];
                    n=n-1;
                    break;
                }
            case 0:
                cout<<"Esta seguro de salir? (S/N): ";
                break;
            default:
                cout<<"Opcion no valida!"<<endl;
                system("pause");
                break;
        }
    } while(op != 0);
    return 0;
}

