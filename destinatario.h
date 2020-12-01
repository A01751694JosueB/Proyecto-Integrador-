#ifndef DESTINATARIO_C
#define DESTINATARIO_C

#include <iostream>
#include <cmath>
#include <string>
using namespace std;

class Destinatario{
    private:
    string nombre;
    string correo_electronico;
    string telefono;
    string direccion;
    string desicion;

    public:
    Destinatario (){
        nombre = "AAAAAA";
        correo_electronico = "------";
        telefono = "55 00000000";
        direccion = "AAAAAA";
        desicion = "NA";
    }
    void ingrese_datos(){

        string nom {};
        string co{};
        string te {};
        string di {};     

        cout<<"\n Ingrese los datos correspondientes del destinatario"<<endl;
        cout<<"Nombre : " ;cin>>nom;
        cout<<"Correo electronico: " ;cin>>co;
        cout<<"Telefono: " ;cin>>te;
        cout<<"Direccion: " ;cin>>di;

        nombre = nom;
        correo_electronico = co;
        telefono = te ;
        direccion = di;
    }
    void correo_confirmacion(){
        cout<<"Esta seguro que puso su correo electronico bien? ";cin>>desicion;
        if (desicion =="si"){
            cout<<"Entendido..."<<endl;}
        else{
            cout<<"Entonces cambielo ahora...."<<endl;
            cin>>correo_electronico;}
        }
    void imprimir_datos(){
        cout<<"\n **Datos del destinatario**"<<endl;
        cout <<"Nombre: "<< nombre << endl;
        cout <<"Correo electronico: " << correo_electronico << endl;
        cout <<"Telefono: " << telefono << endl;
        cout << "Dirreccion: "<< direccion << endl;
    }

};//clase Destinatario
#endif