/*Ejercicio 2: Contenedores Estándar y Secuencias Realiza un
 *programa que utilice el contenedor estándar list para almacenar
 *una secuencia de números decimales. Luego, crea un adaptador de
 *secuencia stack para este contenedor.
 *Muestra cómo funcionan las operaciones push, pop y top en esta pila.*/
#include "Contenedores.h"
#include <iostream>
#include <list>
#include <stack>

void Contenedores() {
 std::list<float> lista = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};

 // Creamos la pila utilizando la lista como contenedor subyacente
 std::stack<float, std::list<float>> pila(lista);

 // Mostrar los elementos haciendo pop
 while (!pila.empty()) {
  std::cout << pila.top() << std::endl;
  pila.pop();
 }

}