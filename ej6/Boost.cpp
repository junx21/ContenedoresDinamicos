/*Ejercicio 6: Introducción a Boost Instala la biblioteca Boost en tu entorno de desarrollo CLion.
 *Luego, crea un programa que utilice la función boost::lexical_cast para convertir una cadena
 *de caracteres en un número entero. Asegúrate de manejar cualquier posible excepción
 *que pueda lanzar boost::lexical_cast.*/

#include "Boost.h"
#include <iostream>
#include <string>
#include <boost/lexical_cast.hpp>

void Boost() {
 std::string s = "12345";

 try {
  int i = boost::lexical_cast<int>(s);
  std::cout << "Número: " << i << std::endl;
 } catch (boost::bad_lexical_cast &e) {
  std::cerr << "Error: " << e.what() << std::endl;
 }

}