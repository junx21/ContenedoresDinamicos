//
// Created by danie on 17/12/2024.
//

#include <locale>
#include <iostream>

#include "Calculo_Numerico.h"
#include "Vector_Iteradores.h"
#include "Contenedores.h"
#include "Algoritmos.h"
#include "Calculo_Numerico.h"
#include "Moderno.h"
#include "Boost.h"


int main() {

    std::locale::global(std::locale(""));

    int opt = 0;

    std::cout << "Elija el ejercicio a ejecutar: ";
    std::cin >> opt;

    switch (opt) {
        case 1: Vector_Iteradores(); break;
        case 2: Contenedores(); break;
        case 3: Algoritmos(); break;
        case 4: Calculo_Numerico(); break;
        case 5: Moderno(); break;
        case 6: Boost(); break;


        default:
            std::cout << "Ejercicio no encontrado" << std::endl;
    }

    return 0;
}