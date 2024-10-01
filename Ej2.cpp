#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

/*Ejercicio 2: Gestión de inventario en una tienda
Problema: En una tienda de electrónica, cada producto tiene un código único y quieres
gestionar el inventario. A medida que entran y salen productos, es necesario mantener el
sistema actualizado.
● Tarea: Inserta los productos con los siguientes códigos: 4001, 2002, 6003, 1500,
3500, 5000, 7000.
● Desafío: Un cliente compró los productos con códigos 2002 y 6003, así que
elimínalos del sistema. Luego, un nuevo producto con el código 2500 llega al
inventario. Imprime el inventario actualizado y verifica si el código 4001 todavía está
en el sistema.
*/
int main() {
    int vendido1, vendido2, producto1, producto2;
    cout << "Ejercicio N° 2" << endl;

    ArbolBinario<int> arbol;

    cout<<"Insertando productos en el inventario..."<<endl;
    arbol.put(4001);
    arbol.put(2002);
    arbol.put(6003);
    arbol.put(1500);
    arbol.put(3500);
    arbol.put(5000);
    arbol.put(7000);

    arbol.print();

    cout<<"Ingrese el producto que desea eliminar(id): ";
    cin>>vendido1;
    cout<<"Ingrese el producto que desea eliminar(id): ";
    cin>>vendido2;

    arbol.remove(vendido1);
    arbol.remove(vendido2);

    cout<<"Ingrese el producto que desea agregar(id): ";
    cin>>producto1;

    arbol.put(producto1);
    cout<<"Ingrese el id del producto que desea buscar: ";
    cin>>producto2;
     if(arbol.search(producto2) == producto2){
        cout<<"El libro con el id "<<producto2<<" se encuentra en la biblioteca"<<endl;
    }

    cout<<"Inventario actualizado: "<<endl;
    arbol.print();
    return 0;
}
