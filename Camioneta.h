/*
 * Proyecto C++
 * Alexander Zamudio Cano
 * A01710688
 * 2/12/2025
 */

 /*
 * Clase Camioneta contiene el atributo capacidad_carga 
 * y el metodo calcular_precio_venta
 * Hereda de la clase Vehiculo
 *
 */

#include "Vehiculo.h"
#include <string>
#include <sstream>

class Camioneta: public Vehiculo {
    private:
        // Se declaran los atributos
        int capacidad_carga; // En litros

    public:
        // Se declaran los metodos
        // Constructor default
        Camioneta (): Vehiculo(), capacidad_carga(0){};
        // Constructor
        Camioneta (std::string mar, std::string mod, int pre, int ye, int kil, int cap): Vehiculo(mar, mod, pre, ye, kil), capacidad_carga(cap) {};

        float calcular_precio_venta();
        int get_capacidad_carga();
        std::string toString();

        void set_capacidad_carga(int );
        
};

int Camioneta ::get_capacidad_carga(){
    return capacidad_carga;
}


void Camioneta ::set_capacidad_carga(int cap){
    capacidad_carga = cap;
}

// Se calcula el precio de venta del camioneta
float Camioneta::calcular_precio_venta(){
    float precio = get_precio_original();
    int antiguedad = 2025 - get_year();
    float uso = (get_kilometraje() / 10000.0) * 500; 
    return precio - (antiguedad * 1000) - uso + (capacidad_carga * 1.5);
}

// Agrega el valor de capacidad_carga al string
std::string Camioneta::toString(){
    std::stringstream aux;
    aux << Vehiculo::toString() << " | Capacidad de carga: " << capacidad_carga;
    return aux.str();
}

