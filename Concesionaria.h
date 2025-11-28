#ifndef CONCESIONARIA_H
#define CONCESIONARIA_H
#include <iostream>
#include "Moto.h"
#include "Coche.h"
#include "Camioneta.h"

class Concesionaria {
    private:
        //Arrglos para guardar los vehiculos
        Moto inventario_motos[100];
        Coche inventario_coches[100];
        Camioneta inventario_camionetas[100];

        // Contadores para saber cuantos estan guardados en los arreglos
        int cantidad_motos;
        int cantidad_coches;
        int cantidad_camionetas;

        // Atributos para calcular el precio
        int antiguedad;
        float uso;
        float precio;

    public:
        Concesionaria (): cantidad_motos(0), cantidad_coches(0), cantidad_camionetas(0){};

        void agregar_moto(Moto mo);
        void agregar_coche(Coche co);
        void agregar_camioneta(Camioneta ca);
        void calcular_precios_venta(); // La formula usada para calcular el precio de venta es inventada
};

void Concesionaria :: agregar_moto(Moto mo){
    if (cantidad_motos < 100) { 
        inventario_motos[cantidad_motos] = mo; 
        cantidad_motos++; 
    } 
    else {
        std::cout << "DE ALGUNA MANERA LLENASTE EL INVENTARIO DE MOTOS" << std::endl;
    }
}

void Concesionaria :: agregar_coche(Coche co){
    if (cantidad_coches < 100) { 
        inventario_coches[cantidad_coches] = co; 
        cantidad_coches++; 
    } 
    else {
        std::cout << "DE ALGUNA MANERA LLENASTE EL INVENTARIO DE COCHES" << std::endl;
    }
}

void Concesionaria :: agregar_camioneta(Camioneta ca){
    if (cantidad_camionetas < 100) { 
        inventario_camionetas[cantidad_camionetas] = ca; 
        cantidad_camionetas++; 
    } 
    else {
        std::cout << "DE ALGUNA MANERA LLENASTE EL INVENTARIO DE CAMIONETAS" << std::endl;
    }
}

void Concesionaria :: calcular_precios_venta(){

    for(int i = 0; i < cantidad_motos; i++) {
        std::cout << "\n========== PRECIOS DE VENTA (USD) :D ==========" << std::endl;

        Moto mo = inventario_motos[i];
        
        precio = mo.get_precio_original();
        antiguedad = 2025 - mo.get_year();
        uso = (mo.get_kilometraje() / 10000) * 500;

        precio = precio - (antiguedad * 1000) - uso + (mo.get_cc() * 20);
        std::cout << "[MOTO] " << mo.get_marca() << " " << mo.get_modelo() << " | Precio: $" << precio << std::endl;
    }

    for(int i = 0; i < cantidad_coches; i++) {
        Coche co = inventario_coches[i];
        
        precio = co.get_precio_original();
        antiguedad = 2025 - co.get_year();
        uso = (co.get_kilometraje() / 10000) * 500;

        precio = precio - (antiguedad * 1000) - uso;
    
        if (co.get_puertas() == 4) {
            precio += 5000;
        }

        std::cout << "[COCHE] " << co.get_marca() << " "  << co.get_modelo() << " | Precio: $" << precio << std::endl;
        
    }

    for(int i = 0; i < cantidad_camionetas; i++) {
        Camioneta ca = inventario_camionetas[i];
        
        precio = ca.get_precio_original();
        antiguedad = 2025 - ca.get_year();
        uso = (ca.get_kilometraje() / 10000) * 500;

        precio = precio - (antiguedad * 1000) - uso + (ca.get_capacidad_carga() * 1.5);
            
        std::cout << "[CAMIONETA] " << ca.get_marca() << " "  << ca.get_modelo() << " | Precio: $" << precio << std::endl;
    }
}
#endif

