#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;
/*Ejercicio 5: Gestión de entregas de paquetes
Problema: Trabajas en una empresa de logística y debes gestionar los paquetes que llegan
y se entregan a través de un sistema. Cada paquete tiene un número de seguimiento único.
Tu sistema debe permitir la entrada de nuevos paquetes, la entrega (eliminación) de
paquetes, y la verificación de los que siguen en tránsito.
● Tarea: Inserta los paquetes con los números de seguimiento: 1001, 5002, 3003,
2004, 4500, 7005, 8006.
● Desafío: Los paquetes con los números de seguimiento 2004 y 4500 fueron
entregados, así que elimínalos. Luego, un nuevo paquete con el número 3500 llega
al sistema. Verifica si el paquete con el número 1001 sigue en tránsito e imprime la
lista de paquetes restantes.*/

int main() {

    cout << "Ejercicio N° 5" << endl;

    ArbolBinario<int> arbol;

    arbol.put(1001);
    arbol.put(5002);
    arbol.put(3003);
    arbol.put(2004);
    arbol.put(4500);
    arbol.put(7005);
    arbol.put(8006);

    arbol.print();

    arbol.remove(2004);
    arbol.remove(4500);

    arbol.put(3500);

    if(arbol.search(1001) == 1001){
        cout<<"El paquete con el numero 1001 se encuentra en transito"<<endl;
    }else{
        cout<<"El paquete con el numero 1001 no se encuentra en transito"<<endl;
    }

    arbol.print();
    return 0;

}