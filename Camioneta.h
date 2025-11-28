#include "Vehiculo.h"
#include<string>

class Camioneta: public Vehiculo {
    private:
        int capacidad_carga; // En litros

    public:
        Camioneta (): Vehiculo(), capacidad_carga(0){};
        Camioneta (std::string mar, std::string mod, int pre, int ye, int kil, int cap): Vehiculo(mar, mod, pre, ye, kil), capacidad_carga(cap) {};


        int get_capacidad_carga(); 

        void set_capacidad_carga(int );
};


int Camioneta ::get_capacidad_carga(){
    return capacidad_carga;
}


void Camioneta ::set_capacidad_carga(int cap){
    capacidad_carga = cap;
}

