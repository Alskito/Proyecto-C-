
#ifndef VEHICULO_H
#define VEHICULO_H

#include<string>

class Vehiculo {
    private:
        std::string marca; 
        std::string modelo;
        int precio_original;
        int year;
        int kilometraje;
    public:
        Vehiculo(): marca(""), modelo(""), precio_original(0), year(0), kilometraje(0) {};
        Vehiculo(std::string mar, std::string mod, int pre, int ye, int kil): marca(mar), modelo(mod), precio_original(pre), year(ye), kilometraje(kil) {};

        std::string get_marca();
        std::string get_modelo();
        int get_precio_original();
        int get_year();
        int get_kilometraje();

        void set_marca(std::string ); 
        void set_modelo(std::string ); 
        void set_precio_original(int );
        void set_year(int );
        void set_kilometraje(int );
        void set_capacidad_carga(int );
};

std::string Vehiculo ::get_marca(){
  return marca;
}

std::string Vehiculo ::get_modelo(){
  return modelo;
}

int Vehiculo ::get_precio_original(){
    return precio_original;
}

int Vehiculo ::get_year(){
    return year;
}

int Vehiculo ::get_kilometraje(){
    return kilometraje;
}

void Vehiculo ::set_marca(std::string mar){
    marca = mar;
}

void Vehiculo ::set_modelo(std::string mod){
    modelo = mod;
}

void Vehiculo ::set_precio_original(int pre){
    precio_original = pre;
}

void Vehiculo ::set_year(int ye){
    year = ye;
}

void Vehiculo ::set_kilometraje(int kil){
    kilometraje = kil;
}

#endif