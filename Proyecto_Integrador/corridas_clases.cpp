#include "usuario.h"
#include "compra.h"
#include "sucursal.h"

#include <iostream>
#include <string>
using namespace std;

int main(){
    Usuario u1;
    u1.ingresar_datos();
    cout << u1.imprimir_datos() << endl;
    u1.pago_con_tarjeta();

    Compra comp1;

    comp1.desplegar_datos();

    Sucursal s1;
    s1.desplegar_datos();
    s1.existencia_producto();
    s1.seleccionar_sucursal();
    s1.desplegar_datos();

}