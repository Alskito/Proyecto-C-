#include<string>
#include "Vehiculo.h"

class Moto: public Vehiculo{
    private:
        int cc; //indica la potencia y el rendimiento de la moto

    public:
    Moto(): Vehiculo(), cc(0) {};
    Moto(std::string mar, std::string mod, int pre, int ye, int kil, int c): Vehiculo(mar, mod, pre, ye, kil), cc(c){};

    int get_cc();
    void set_cc(int );
};


int Moto::get_cc(){
    return cc;
}


void Moto::set_cc(int c){
    cc = c;
}
