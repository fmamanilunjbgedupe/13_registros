#include<iostream>
#include<string>
using namespace std;

struct EMP{
    int num;
    string nom;
    float ven[12],sal,smve;
};

int main(){
    EMP EMPLEADOS[100];
    int n,maxv,numx;
    string nomx;
    cout<<"ingrese el numeros de empleados"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
         EMPLEADOS[i].smve=0;
        cout<<"ingrese el numero de orden del empleado"<<endl;
        cin>>EMPLEADOS[i].num;
        cin.ignore();
        cout<<"ingrese el nombre del empleado"<<endl;
        getline(cin,EMPLEADOS[i].nom);
        for(int j=0;j<12;j++){
            cout<<"venta "<<j+1<<": ";
            cin>>EMPLEADOS[i].ven[j];
            EMPLEADOS[i].smve=EMPLEADOS[i].ven[j]+EMPLEADOS[i].smve;
        }
        cout<<"ingrese el salario del empleado"<<endl;
        cin>>EMPLEADOS[i].sal;
        if(EMPLEADOS[i].smve>100){
            EMPLEADOS[i].sal=EMPLEADOS[i].sal*1.1;
        }
    }
    maxv=EMPLEADOS[0].smve;
    nomx=EMPLEADOS[0].nom;
    numx=EMPLEADOS[0].num;
    for(int i=0;i<n;i++){
        if(EMPLEADOS[i].smve>maxv){
            maxv=EMPLEADOS[i].smve;
            nomx=EMPLEADOS[i].nom;
            numx=EMPLEADOS[i].num;
        }
    }
    for(int i=0; i<n;i++){
        cout<<EMPLEADOS[i].num<<endl;
        cout<<EMPLEADOS[i].nom<<endl;
        for(int j=0;j<12;j++)
           cout<<EMPLEADOS[i].ven[j]<<" ";
        cout<<"\n";
        cout<<EMPLEADOS[i].sal<<endl<<endl;
    }
    cout<<"el empleado con mayor venta del año es: "<<nomx<<" de orden "<<numx<<" con una venta de "<<maxv<<endl;
    cout<<"empleadoa con ventas menor a 30  unidades en el mes de diciembre"<<endl;
    for(int i=0;i<n;i++){
        if(EMPLEADOS[i].ven[11]<30){
           cout<<"de orden "<<EMPLEADOS[i].num<<" y nombre "<<EMPLEADOS[i].nom<<endl;
        }
    }
    return 0;
}