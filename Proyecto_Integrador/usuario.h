#ifndef USUARIO_C
#define USUARIO_C

#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private: 
        string nombre;
        string correo_elect;
        string telefono;
        bool pago_tarjeta;
    
    public: 
        Usuario(){
            nombre = "XXXX";
            correo_elect = "XXXX@gmail.com";
            telefono = "55XXXXXX";
            pago_tarjeta = false;
        }
        void ingresar_datos (){
            string nom {};
            string corr {};
            string tel {};
            cout << "Inserte su nombre: "; getline(cin,nom);
            cout << "Inserte su correo electronico: "; cin >> corr;
            cout << "Inserte su telefono: "; cin >> tel;

            nombre = nom;
            correo_elect = corr;
            telefono = tel;
        }

        string imprimir_datos (){
            return "Datos del usuario: \n" + nombre + "\n" + correo_elect + "\n" + telefono + "\n";
        }

        void pago_con_tarjeta (){
            pago_tarjeta = true;
            cout << "Se hara el pago con tarjeta." << endl;
        }
}; //Clase usuario. 

#endif
