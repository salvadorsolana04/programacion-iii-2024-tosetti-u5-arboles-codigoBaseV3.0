#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;
/*Ejercicio 3: Sistema de inscripción en un gimnasio
Problema: Estás diseñando un sistema de inscripción para un gimnasio, donde cada socio
tiene un número de socio único. El sistema debe permitir la inscripción de nuevos socios, la
eliminación de socios que se dan de baja, y la búsqueda de socios activos.
● Tarea: Inscribe a los socios con los siguientes números de socio: 500, 250, 750, 100,
300, 600, 800.
● Desafío: Un socio con el número 250 se da de baja, así que elimínalo. Luego,
verifica si los socios con los números 300 y 750 aún están activos. Imprime la lista
de socios actualizada*/

int main() {

    cout << "Ejercicio N° 3" << endl;

    ArbolBinario<int> arbol;

    arbol.put(500);
    arbol.put(250);
    arbol.put(750);
    arbol.put(100);
    arbol.put(300);
    arbol.put(600);
    arbol.put(800);

    arbol.print();

    arbol.remove(250);

    if(arbol.search(300) == 300){
        cout<<"El socio con el numero 300 se encuentra activo"<<endl;
    }else{
        cout<<"El socio con el numero 300 no se encuentra activo"<<endl;
    }

    if(arbol.search(750) == 750){
        cout<<"El socio con el numero 750 se encuentra activo"<<endl;
    }else{
        cout<<"El socio con el numero 750 no se encuentra activo"<<endl;
    }

    arbol.print();
    return 0;

}
