/*
 * Proyecto C++
 * Alexander Zamudio Cano
 * A01710688
 * 2/12/2025
 */

 /*
 * Clase Coche contiene el atributo puertas y el metodo
 * calcular_precio_venta
 * Hereda de la clase Vehiculo
 *
 */

#include "Vehiculo.h"
#include <string>
#include <sstream>

class Coche: public Vehiculo{
    private:
        // Se declaran los atributos
        int puertas;

    public:
        // Se declaran los metodos
        // Constructor default
        Coche(): Vehiculo(), puertas(0){};
        // Constructor
        Coche(std::string mar, std::string mod, int pre, int ye, int kil, int pu): Vehiculo(mar, mod, pre, ye, kil), puertas(pu){};


        float calcular_precio_venta();
        int get_puertas();
        std::string toString();

        void set_puertas(int );
        

};

int Coche::get_puertas(){
    return puertas;
}

void Coche::set_puertas(int pu){
    puertas = pu;
}

// Se calcula el precio de venta del coche 
// La formula es inventada
float Coche::calcular_precio_venta(){
    float precio = get_precio_original();
    int antiguedad = 2025 - get_year();
    float uso = (get_kilometraje() / 10000.0) * 500; 
    if(puertas == 4){
        return precio - (antiguedad * 1000) - uso + 500;
    }
    else{
        return precio - (antiguedad * 1000) - uso;
    }
}

// Agrega el valor de puertas al string
std::string Coche::toString(){
    std::stringstream aux;
    aux << Vehiculo::toString() << " | Puertas: " << puertas;
    return aux.str();
}



