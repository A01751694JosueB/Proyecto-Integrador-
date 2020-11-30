#include "usuario.h"
#include "compra.h"
#include "sucursal.h"
#include "destinatario.h"
#include "producto.h"
#include "marca.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
    Usuario u1;
    Producto p1;
    Marca m1;
    Compra comp1;

    string afirmacion = "Si";

    while ((afirmacion == "Si")||(afirmacion=="si")){

        cout << "¡Bienvenido a la tienda en linea!" << endl;
        cout << "\nRegistrese para poder elegir su compra." << endl;
        u1.ingresar_datos();


        cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            comp1.desplegar_usuario(u1).imprimir_datos();
        }

        cout << "\nIngrese los datos de la marca." << endl;
        m1.datos_mercado();

        cout << "\nAhora ingrese los datos del producto a comprar." << endl;
        p1.insertar_datos();
        p1.insertar_cantidad();
        p1.si_garantia();

        cout << "\n¿Quiere corroborar sus datos?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            m1.desplegar_producto(p1).desplegar_datos();
        }

        cout << "\n¿Seguro quiere comprar el producto?"; cin >> afirmacion;
        if ((afirmacion == "Si")||(afirmacion=="si")){
            comp1.confirmar_producto();
            
            cout << "\nProceda a pagar." << endl;
            cout << "\n¿Quiere pagar con tarjeta?"; cin >> afirmacion;
            if ((afirmacion == "Si")||(afirmacion=="si")){
                u1.pago_con_tarjeta();
            }
            comp1.datos_compra(1);
        }
        else{
            comp1.descartar_producto();
        }

        cout << "\n¿Quiere seguir comprando?"; cin >> afirmacion;
    }

       
    //Sucursal s1;
    //s1.existencia_producto();
    //s1.seleccionar_sucursal();
    //s1.desplegar_datos();
    //m1.desplegar_sucursal(s1).desplegar_datos();    

}