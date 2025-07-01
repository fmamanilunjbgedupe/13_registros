#ifndef leer_contacto_H
#define leer_contacto_H
#include <string>
using namespace std;
struct correo{
    string user;
    string domain;
};

struct contactoEmail{
    string nom;
    char sex;
    int edad;
    correo email;
};
void leerCorreo(correo &, string, string);
void leerContacto(contactoEmail &, string, char, int, correo);
#endif 