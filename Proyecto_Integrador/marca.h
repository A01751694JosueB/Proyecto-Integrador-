#include "producto.h"
#include "sucursal.h"

#include <iostream>
#include <string>
using namespace std;

class Marca {
    private: 
        Producto producto {};
        Sucursal sucursal {};
        string nombre_tienda;

    public: 
        Marca(){
            producto = Producto{};
            sucursal = Sucursal{};
            nombre_tienda = "XXX";
        }
        void datos_mercado(){
            string nom;
            cout << "\nInserte el nombre de la marca: "; getline(cin,nom);
            nombre_tienda = nom;
            cout << "Se hara una compra de la marca: " << nombre_tienda << endl;
        }
        Producto desplegar_producto(Producto pro){
            return pro;
        }
        Sucursal desplegar_sucursal(Sucursal su){
            return su;
        }
};