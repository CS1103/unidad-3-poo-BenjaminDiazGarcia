#include <stdio.h>
#include <vector>
#include "catch.hpp"
#include "Simulador.h"

TEST_CASE("Prueba del print_potencia"){
    Particula P1 (4, 5);
    //Hacemos que P1 tenga x = 4, y = 5
    P1.set_x_y(4, 5);
    //Configuramos su carga
    P1.set_carga(15);
    double distancia = sqrt(pow(4, 2) + pow(5, 2));
    //Potencial de test
    double potencial_test = (constante_electrica * 15)/distancia;
    //Vectores para simular los puntos de intersección, en este caso (0, 0)
    std::vector<double> vecx; vecx.push_back(0);
    std::vector<double> vecy; vecy.push_back(0);
    Simulador S1(8, 8, 4, 5);
    std::vector<Particula> test;
    test.push_back(P1);
    double potencial_total = 0.0;
    potencial_total += test[0].potencial_electrico(0, 0, vecx, vecy);
    
    REQUIRE(potencial_total == potencial_test);
}
