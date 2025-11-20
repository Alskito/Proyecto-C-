#include<iostream>
#include<string>

class Coche{
    private:
    std::string marca; 
    std::string modelo;
    int precio_original;
    int year;
    int kilometraje;
    int puertas;

    public:
    Coche(): marca(""), modelo(""), precio_original(0), year(0), kilometraje(0), puertas(0) {};
    Coche(std::string mar, std::string mod, int pre, int ye, int kil, int pu): marca(mar), modelo(mod), precio_original(pre), year(ye), kilometraje(kil), puertas(pu){};

    std::string get_marca();
    std::string get_modelo();
    int get_precio_original();
    int get_year();
    int get_kilometraje();
    int get_puertas();

    void set_marca(std::string ); 
    void set_modelo(std::string ); 
    void set_precio_original(int );
    void set_year(int );
    void set_kilometraje(int );
    void set_puertas(int );
};

std::string Coche::get_marca(){
  return marca;
}

std::string Coche::get_modelo(){
  return modelo;
}

int Coche::get_precio_original(){
    return precio_original;
}

int Coche::get_year(){
    return year;
}

int Coche::get_kilometraje(){
    return kilometraje;
}

int Coche::get_puertas(){
    return puertas;
}

void Coche::set_marca(std::string mar){
    marca = mar;
}

void Coche::set_modelo(std::string mod){
    modelo = mod;
}

void Coche::set_precio_original(int pre){
    precio_original = pre;
}

void Coche::set_year(int ye){
    year = ye;
}

void Coche::set_kilometraje(int kil){
    kilometraje = kil;
}

void Coche::set_puertas(int pu){
    puertas = pu;
}
