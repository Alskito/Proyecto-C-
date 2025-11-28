#include "Vehiculo.h"
#include <string>

class Coche: public Vehiculo{
    private:
        int puertas;

    public:
        Coche(): Vehiculo(), puertas(0){};
        Coche(std::string mar, std::string mod, int pre, int ye, int kil, int pu): Vehiculo(mar, mod, pre, ye, kil), puertas(pu){};

        int get_puertas();

        void set_puertas(int );

};

int Coche::get_puertas(){
    return puertas;
}



void Coche::set_puertas(int pu){
    puertas = pu;
}

