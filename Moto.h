#include<iostream>
#include<string>

class Moto{
    private:
    std::string marca; 
    std::string modelo;
    int precio_original;
    int year;
    int kilometraje;

    public:
    Moto(): marca(""), modelo(""), precio_original(0), year(0), kilometraje(0) {};
    Moto(std::string mar, std::string mod, int pre, int ye, int kil): marca(mar), modelo(mod), precio_original(pre), year(ye), kilometraje(kil){};

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
};

std::string Moto::get_marca(){
  return marca;
}

std::string Moto::get_modelo(){
  return modelo;
}

int Moto::get_precio_original(){
    return precio_original;
}

int Moto::get_year(){
    return year;
}

int Moto::get_kilometraje(){
    return kilometraje;
}

void Moto::set_marca(std::string mar){
    marca = mar;
}

void Moto::set_modelo(std::string mod){
    modelo = mod;
}

void Moto::set_precio_original(int pre){
    precio_original = pre;
}

void Moto::set_year(int ye){
    year = ye;
}

void Moto::set_kilometraje(int kil){
    kilometraje = kil;
}