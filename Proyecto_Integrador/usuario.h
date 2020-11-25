#ifndef USUARIO_C
#define USUARIO_C

#include <iostream>
#include <string>
using namespace std;

class Usuario{
    private: 
        string nombre {};
        string correo_elect {};
        string telefono {};
    
    public: 
        Usuario(){
            string nombre {"XXXX"};
            string correo_elect {"XXXX@gmail.com"};
            string telefono {"55XXXXXX"};
        }
        void ingresar_datos (){
            string nom {};
            string corr {};
            string tel {};
            cout << "Inserte su nombre: "; cin >> nom;
            cout << "Inserte su correo electronico: "; cin >> corr;
            cout << "Inserte su telefono: "; cin >> tel;

            nombre = nom;
            correo_elect = corr;
            telefono = tel;
        }

        string imprimir_datos (){
            return nombre + "\n" + correo_elect + "\n" + telefono + "\n";
        }

        void ingresar_pago (){
            string nom {};
            string corr {};
            string tel {};
            cout << "Inserte su nombre: "; cin >> nom;
            cout << "Inserte su correo electronico: "; cin >> corr;
            cout << "Inserte su telefono: "; cin >> tel;

            nombre = nom;
            correo_elect = corr;
            telefono = tel;
        }
}; //Clase usuario. 

#endif
