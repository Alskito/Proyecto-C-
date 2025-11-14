#include<iostream>
#include<string>

class Camioneta {
    private:
    std::string marca; 
    std::string modelo;
    int precio_original;
    int year;
    int kilometraje;

    public:
    Camioneta (): marca(""), modelo(""), precio_original(0), year(0), kilometraje(0) {};
    Camioneta (std::string mar, std::string mod, int pre, int ye, int kil): marca(mar), modelo(mod), precio_original(pre), year(ye), kilometraje(kil){};

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

std::string Camioneta ::get_marca(){
  return marca;
}

std::string Camioneta ::get_modelo(){
  return modelo;
}

int Camioneta ::get_precio_original(){
    return precio_original;
}

int Camioneta ::get_year(){
    return year;
}

int Camioneta ::get_kilometraje(){
    return kilometraje;
}

void Camioneta ::set_marca(std::string mar){
    marca = mar;
}

void Camioneta ::set_modelo(std::string mod){
    modelo = mod;
}

void Camioneta ::set_precio_original(int pre){
    precio_original = pre;
}

void Camioneta ::set_year(int ye){
    year = ye;
}

void Camioneta ::set_kilometraje(int kil){
    kilometraje = kil;
}