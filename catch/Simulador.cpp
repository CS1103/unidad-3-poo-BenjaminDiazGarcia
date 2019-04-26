#include <iostream>
#include <string>
#include "Simulador.h"

const int max_particulas = 8;
const int min_particulas = 1;

Simulador::Simulador (int max_x, int max_y, double partes_x, double partes_y):max_x{max_x}, max_y{max_y}, partes_x{partes_x}, partes_y{partes_y}{
    
    double razon_x = this->max_x/partes_x;
    double razon_y = this->max_y/partes_y;
   // std::cout << razon_x << " " << razon_y << std::endl;
    double aux1 = razon_x;
    double aux2 = razon_y;
    for (int i = 0; i < partes_x; i++){
        puntos_x.push_back(aux1);
        aux1 += razon_x;
    }
    
    for (int i = 0; i < partes_y; i++){
        puntos_y.push_back(aux2);
        aux2 += razon_y;
    }
    
    numero_de_particulas = (rand()%max_particulas) + min_particulas;
    
    for (int i = 0; i < numero_de_particulas; i++) {
        particulas.push_back(Particula(max_x, max_y));
    }
}

void Simulador::print_potencia() {
    for (int i = 0; i < partes_x; i++) {
        for (int j = 0; j < partes_y; j++) {
            double potencial_total = 0;
            for (int k = 0; k < particulas.size(); k++){
                
                potencial_total += particulas[k].potencial_electrico(i, j, puntos_x, puntos_y);
            }
           // std::cout << i << " " << j << " " << std::endl;
            std::cout << "X: " << puntos_x[i] << ", Y: " << puntos_y[j] << ", potencial eléctrico: " << potencial_total << std::endl;
        }
        std::cout << std:: endl;
    }
}

Simulador::~Simulador(){

}
