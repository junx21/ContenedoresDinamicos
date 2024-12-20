/*Ejercicio 4: Cálculo numérico Desarrolla un programa que utilice la clase
 *valarray para realizar operaciones matemáticas. Crea un valarray de números decimales
 *e implementa operaciones como la suma, la resta, la multiplicación y la división.*/

#include "Calculo_Numerico.h"
#include <iostream>
#include <valarray>

void Calculo_Numerico() {
 std::valarray<double> valores = {1.0, 2.0, 3.0, 4.0, 5.0};

 std::cout << "Suma de todos los elementos: " << valores.sum() << std::endl;
 std::cout << "Media: " << valores.sum() / valores.size() << std::endl;

 // Añadir 5.0 a cada elemento
 valores += 5.0;

 std::cout << "Valores tras sumar 5.0: ";
 for (double valor : valores) {
  std::cout << valor << " ";
 }
 std::cout << std::endl;

 // Ejemplo de multiplicación escalar
 valores *= 2.0;
 std::cout << "Valores tras multiplicar por 2.0: ";
 for (double valor : valores) {
  std::cout << valor << " ";
 }
 std::cout << std::endl;

}