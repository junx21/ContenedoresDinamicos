/*Ejercicio 1: Vector e Iteradores Crea un programa que añada elementos a un vector
 *de enteros mediante el uso del método push_back.
 *Luego, utiliza un iterador para recorrer y mostrar cada elemento del vector.*/

#include "Vector_Iteradores.h"
#include <iostream>
#include <vector>

void Vector_Iteradores() {
 std::vector<int> numeros;

 // Añadir elementos mediante push_back
 numeros.push_back(10);
 numeros.push_back(20);
 numeros.push_back(30);
 numeros.push_back(40);
 numeros.push_back(50);

 // Recorrer con iteradores
 for (std::vector<int>::iterator it = numeros.begin(); it != numeros.end(); ++it) {
  std::cout << *it << std::endl;
 }

}