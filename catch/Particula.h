#ifndef Particula_h
#define Particula_h
#include <iostream>
#include <cmath>

const double constante_electrica = 8.99 * pow(10, -9);

class Particula{
    double x;
    double y;
    double carga;
    int max_x, max_y;
public:
    Particula(int max_x, int max_y);
    double get_carga(){ return carga; }
    double potencial_electrico(int i, int j, std::vector <double> vecx, std::vector <double> vecy);
    void set_x_y(double x, double y);
    void set_carga(double carga);
    
    friend std::ostream& operator<< (std::ostream& os, const Particula& particula){
        os << "x: " << particula.x << ", " << "y: " << particula.y << ", " << ", carga: " << particula.carga << std::endl;
        return os;
    }
    
};

#endif
