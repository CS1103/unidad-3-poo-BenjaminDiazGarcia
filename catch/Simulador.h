#ifndef Simulador_h
#define Simulador_h

#include <vector>
#include <ctime>
#include "Particula.h"

class Simulador{
    int max_x, max_y;
    double partes_x, partes_y;
    std::vector <double> puntos_x;
    std::vector <double> puntos_y;
    int numero_de_particulas;
    std::vector <Particula> particulas;
    
public:
    Simulador(int max_x, int max_y, double partes_x, double partes_y);
    ~Simulador();
    int get_numero_de_particulas(){ return numero_de_particulas; }
    std::vector <Particula> get_particulas(){ return particulas; }
    void print_potencia();
};

#endif 
