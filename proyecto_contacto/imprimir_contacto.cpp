#include "imprimir_contacto.h"
#include "leer_contacto.h"
#include <iomanip>
#include<iostream>
#include <string>
using namespace std;
void imprimeContacto(contactoEmail &c, int i){
    cout << left << setw(5) << i+1 
         << setw(35) << c.nom 
         << setw(12) << (c.sex == 'M' ? "Masculino" : "Femenino")
         << setw(8) << c.edad 
         << c.email.user << "@" << c.email.domain << endl;
}