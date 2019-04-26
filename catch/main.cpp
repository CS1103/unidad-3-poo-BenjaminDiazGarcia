#include <iostream>
#include <ctime>
#include "Particula.h"
#include "Simulador.h"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

using namespace std;

#ifndef CATCH_CONFIG_MAIN

int main() {
    srand(time(NULL));
//Simulador Nombre(x máximo, y máximo, partes en las que se divide x, partes en las que se divide y)
    Simulador S1(8, 8, 4, 5);
    S1.print_potencia();
    return 0;
}

#endif
