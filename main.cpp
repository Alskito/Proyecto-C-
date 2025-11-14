#include<iostream>
#include<string>
#include "Camioneta.h"
#include "Coche.h"
#include "Moto.h"


int main(){

    Moto moto_1("Kawasaki", "Ninja h2r", 1172063, 2022, 20000);
    Coche coche_1("Kia", "K3 Ex pack", 450000, 2025, 5000);
    Camioneta camioneta_1("Ford", "Lobo Raptor", 2424100, 2025, 40000);

    // Moto
    std::cout << "COMPROBACION MOTO" << std::endl;

    std::cout << "\n" << moto_1.get_marca() << std::endl;
    moto_1.set_marca("BROMM");
    std::cout << moto_1.get_marca() << std::endl;

    std::cout << "\n" << moto_1.get_modelo() << std::endl;\
    moto_1.set_modelo("Pan");
    std::cout << moto_1.get_modelo() << std::endl;

    std::cout << "\n" << moto_1.get_precio_original() << std::endl;
    moto_1.set_precio_original(5);
    std::cout << moto_1.get_precio_original() << std::endl;

    std::cout << "\n" << moto_1.get_year() << std::endl;
    moto_1.set_year(2011);
    std::cout << moto_1.get_year() << std::endl;

    std::cout << "\n" << moto_1.get_kilometraje() << std::endl;
    moto_1.set_kilometraje(100000);
    std::cout << moto_1.get_kilometraje() << std::endl;

    // Coche
    std::cout << "\n" << "COMPROBACION COCHE" << std::endl;

    std::cout << "\n" << coche_1.get_marca() << std::endl;
    coche_1.set_marca("MARCA RANDOM IDK");
    std::cout << coche_1.get_marca() << std::endl;

    std::cout << "\n" << coche_1.get_modelo() << std::endl;\
    coche_1.set_modelo("EL RASHO MCQUEEN");
    std::cout << coche_1.get_modelo() << std::endl;

    std::cout << "\n" << coche_1.get_precio_original() << std::endl;
    coche_1.set_precio_original(99999);
    std::cout << coche_1.get_precio_original() << std::endl;

    std::cout << "\n" << coche_1.get_year() << std::endl;
    coche_1.set_year(2000);
    std::cout << coche_1.get_year() << std::endl;

    std::cout << "\n" << coche_1.get_kilometraje() << std::endl;
    coche_1.set_kilometraje(100000);
    std::cout << coche_1.get_kilometraje() << std::endl;

    // Camioneta
    std::cout << "\n" << "COMPROBACION CAMIONETA" << std::endl;

    std::cout << "\n" << camioneta_1.get_marca() << std::endl;
    camioneta_1.set_marca("YA ME QUEDE SIN CREATIVIDAD");
    std::cout << camioneta_1.get_marca() << std::endl;

    std::cout << "\n" << camioneta_1.get_modelo() << std::endl;\
    camioneta_1.set_modelo("SDAJDSADAJ");
    std::cout << camioneta_1.get_modelo() << std::endl;

    std::cout << "\n" << camioneta_1.get_precio_original() << std::endl;
    camioneta_1.set_precio_original(1);
    std::cout << camioneta_1.get_precio_original() << std::endl;

    std::cout << "\n" << camioneta_1.get_year() << std::endl;
    camioneta_1.set_year(1950);
    std::cout << camioneta_1.get_year() << std::endl;

    std::cout << "\n" << camioneta_1.get_kilometraje() << std::endl;
    camioneta_1.set_kilometraje(10);
    std::cout << camioneta_1.get_kilometraje() << std::endl;

    return 0;
}