/*
 * Proyecto C++
 * Alexander Zamudio Cano
 * A01710688
 * 2/12/2025
 */

 /*
 * Clase Moto contiene el atributo cc y el metodo
 * calcular_precio_venta
 * Hereda de la clase Vehiculo
 *
 */

#include<string>
#include "Vehiculo.h"
#include <sstream>

class Moto: public Vehiculo{
    private:
        // Se declaran los atributos
        int cc; //indica la potencia y el rendimiento de la moto

    public:
        // Se declaran los metodos
        // Constructor default
        Moto(): Vehiculo(), cc(0) {};
        // Constructor
        Moto(std::string mar, std::string mod, int pre, int ye, int kil, int c): Vehiculo(mar, mod, pre, ye, kil), cc(c){};

        float calcular_precio_venta();
        int get_cc();
        std::string toString();

        void set_cc(int );
        
};


int Moto::get_cc(){
    return cc;
}

void Moto::set_cc(int c){
    cc = c;
}

// Se calcula el precio de venta de la moto
float Moto::calcular_precio_venta(){
    float precio = get_precio_original();
    int antiguedad = 2025 - get_year();
    float uso = (get_kilometraje() / 10000.0) * 500; 
    return precio - (antiguedad * 1000) - uso + (cc * 10);
}
// Agrega el valor de cc al string
std::string Moto::toString(){
    std::stringstream aux;
    aux << Vehiculo::toString() << " | CC: " << cc;
    return aux.str();
}
