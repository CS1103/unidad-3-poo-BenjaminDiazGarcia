#include <iostream>
#include <cstdlib>
#include <cmath>
#include "Simulador.h"
#include "Particula.h"

const int CoulombsMax = 20;
const int CoulombsMin = 1;

Particula::Particula(int max_x, int max_y){
    carga = (CoulombsMax * ((double)rand() / (double)RAND_MAX) + CoulombsMin) * pow(10, -6);
    x = max_x * ( (double)rand() / (double)RAND_MAX);
    y = max_y * ( (double)rand() / (double)RAND_MAX);
}

double Particula::potencial_electrico(int i, int j, std::vector <double> vecx, std::vector <double> vecy) {
    double potencial = 0;
    double distancia = 0;
    distancia = sqrt(pow((x - vecx[i]), 2) + pow(y - vecy[j], 2));
    potencial = (carga * constante_electrica)/distancia;
    return potencial;
}

void Particula::set_x_y(double x, double y) { 
    this->x = x;
    this->y = y;
}

void Particula::set_carga(double carga) { 
    this->carga = carga;
}



