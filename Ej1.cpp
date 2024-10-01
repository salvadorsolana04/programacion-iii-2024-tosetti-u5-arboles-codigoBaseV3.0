#include <iostream>
#include "Arbol/ArbolBinario.h"
using namespace std;

/*Ejercicio 1: Organización de una biblioteca
Problema: Estás organizando una biblioteca familiar. Cada libro tiene un número único de
identificación (ID) y quieres organizar los libros en un sistema que te permita agregarlos,
eliminarlos y buscarlos fácilmente.
● Tarea: Inserta los libros con los siguientes IDs en el sistema de gestión (árbol): 101,
52, 198, 36, 75, 150, 200.
● Desafío: Busca el libro con el ID 75 y verifica si está en la biblioteca. Luego elimina
el libro con el ID 52 porque fue prestado. Imprime la estructura del sistema después
de la eliminación.*/

int main() {
int buscar;
    cout << "Ejercicio N° 1" << endl;

    ArbolBinario<int> arbol;

    cout<<"Insertando libros en el sistema de gestion..."<<endl;
    arbol.put(101);
    arbol.put(52);
    arbol.put(198);
    arbol.put(36);
    arbol.put(75);
    arbol.put(150);
    arbol.put(200);

    arbol.print();

    cout<<"Ingrese el libro que desea buscar(id): ";
    cin >> buscar;

    if(arbol.search(buscar) == buscar){
        cout<<"El libro con el id "<<buscar<<" se encuentra en la biblioteca"<<endl;
    }else{
        cout<<"El libro con el id "<<buscar<<" no se encuentra en la biblioteca"<<endl;
    }

    return 0;
}
