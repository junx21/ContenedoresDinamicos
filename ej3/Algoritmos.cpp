/*Ejercicio 3: Algoritmos Crea un programa que tenga un vector de enteros.
 *Luego, utiliza la función sort de la biblioteca de algoritmos para ordenar los elementos del vector.
 *Además, utiliza la función max_element para encontrar el elemento más grande del vector.*/
#include "Algoritmos.h"
#include <iostream>
#include <vector>
#include <algorithm> // sort, max_element

void Algoritmos() {
 std::vector<int> numeros = {50, 20, 60, 10, 30, 40};

 // Ordenar el vector
 std::sort(numeros.begin(), numeros.end());

 // Mostrar vector ordenado
 for (int num : numeros) {
  std::cout << num << " ";
 }
 std::cout << std::endl;

 // Obtener el elemento máximo
 int maxNum = *std::max_element(numeros.begin(), numeros.end());
 std::cout << "Número máximo: " << maxNum << std::endl;

}