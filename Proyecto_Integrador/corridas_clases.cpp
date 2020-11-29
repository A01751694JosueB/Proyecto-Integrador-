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
    u1.ingresar_datos();
    //u1.imprimir_datos();
    u1.pago_con_tarjeta();

    Destinatario d1;
    d1.ingrese_datos();
    //d1.imprimir_datos();

    Producto p1;
    p1.insertar_datos();
    p1.insertar_cantidad();
    p1.si_garantia();
    //p1.desplegar_datos();

    Compra comp1;
    comp1.desplegar_usuario(u1).imprimir_datos();
    comp1.desplegar_destinatario(d1).imprimir_datos();
    comp1.desplegar_producto(p1).desplegar_datos();
    comp1.datos_compra(1);

    Sucursal s1;
    s1.existencia_producto();
    s1.seleccionar_sucursal();
    //s1.desplegar_datos();

    Marca m1;
    m1.datos_mercado();
    m1.desplegar_producto(p1).desplegar_datos();
    m1.desplegar_sucursal(s1).desplegar_datos();    

}