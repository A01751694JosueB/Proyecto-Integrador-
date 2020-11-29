#include "usuario.h"

#include <iostream>
#include <string>
using namespace std;

class Compra {
    private: 
        Usuario comprador {};
        int numero_compra = 0;
        bool producto_confirmar;
    
    public: 
        Compra (){
            comprador = Usuario {};
            numero_compra = 00001;
            producto_confirmar = false;
        }

        void desplegar_datos (){
            cout << numero_compra << endl;
            cout << "El producto esta seleccionado: " << producto_confirmar << endl;
        }
        void confirmar_producto(){
            producto_confirmar = true;
        }
        void descartar_producto(){
            producto_confirmar = false;
        }
};