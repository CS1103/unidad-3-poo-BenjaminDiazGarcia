#include "catch.hpp"
#include "Particula.h"
#include <vector>

TEST_CASE("Prueba del potencial eléctrico"){
    //Se llenan los vectores con 0 para hacer el test con un punto (0, 0)
    std::vector<double> vecx; vecx.push_back(0);
    std::vector<double> vecy; vecy.push_back(0);
    Particula P1 (4, 5);
    //Hacemos que P1 tenga x = 4, y = 5
    P1.set_x_y(4, 5);
    //Configuramos su carga
    P1.set_carga(15);
    double distancia = sqrt(pow(4, 2) + pow(5, 2));
    double potencial_test = (constante_electrica * 15)/distancia;
    REQUIRE(P1.potencial_electrico(0, 0, vecx, vecy) == potencial_test);
}
