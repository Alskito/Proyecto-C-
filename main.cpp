#include<iostream>
#include<string>
#include <windows.h> // Solo es para que se vean los emojis
#include "Concesionaria.h"



int main(){
    SetConsoleOutputCP(CP_UTF8); // Solo es para que se vean los emojis

    Concesionaria Concesionaria_Benito_Juarez_IDK;
    int opcion = 0;
    std::string t_marca;
    std::string t_modelo;
    int t_precio;
    int t_year;
    int t_km;
    int t_extra;

    do {

        std::cout << "\n=================================================" << std::endl;
        std::cout << "      APLICACION PARA GESTIONAR PRECIOS :d     " << std::endl;
        std::cout << "=================================================" << std::endl;
        std::cout << "1. Agregar MOTO 🏍️" << std::endl;
        std::cout << "2. Agregar COCHE 🏎️" << std::endl;
        std::cout << "3. Agregar CAMIONETA 🚗" << std::endl;
        std::cout << "4. Mostrar Precios de Venta 💰" << std::endl;
        std::cout << "5. Salir 👋😊" << std::endl;
        std::cout << "-----------------------------------------" << std::endl;
        std::cout << "Selecciona una opcion(1 al 5): ";  std::cin >> opcion;


        switch(opcion) {
            case 1: { 
                std::cout << "\n[NUEVA MOTO]" << std::endl;
                std::cout << "Marca: ";      std::cin >> t_marca;
                std::cout << "Modelo: ";     std::cin >> t_modelo;
                std::cout << "Precio Base(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_precio;
                std::cout << "Year(SOLO USA NUMEROS ENTEROS): ";        std::cin >> t_year;
                std::cout << "Kilometraje(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_km;
                std::cout << "Cilindraje (CC),(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_extra;

                Moto mo(t_marca, t_modelo, t_precio, t_year, t_km, t_extra);
            
                
               
                Concesionaria_Benito_Juarez_IDK.agregar_moto(mo);
                std::cout << ">> Moto agregada" << std::endl;
                break;
            }

            case 2: { 
                std::cout << "\n[NUEVO COCHE]" << std::endl;
                std::cout << "Marca(NO USES ESPACIOS): ";      std::cin >> t_marca;
                std::cout << "Modelo: ";     std::cin >> t_modelo;
                std::cout << "Precio Base(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_precio;
                std::cout << "Year(SOLO USA NUMEROS ENTEROS): ";        std::cin >> t_year;
                std::cout << "Kilometraje(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_km;
                std::cout << "Numero de Puertas(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_extra;
                
                Coche co(t_marca, t_modelo, t_precio, t_year, t_km, t_extra);
           
                
                Concesionaria_Benito_Juarez_IDK.agregar_coche(co);
                std::cout << ">> Coche agregado" << std::endl;
                break;
            }

            case 3: { 
                std::cout << "\n[NUEVA CAMIONETA]" << std::endl;
                std::cout << "Marca: ";     std::cin >> t_marca;
                std::cout << "Modelo: ";     std::cin >> t_modelo;
                std::cout << "Precio Base(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_precio;
                std::cout << "Year(SOLO USA NUMEROS ENTEROS): ";        std::cin >> t_year;
                std::cout << "Kilometraje(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_km;
                std::cout << "Capacidad de Carga (L),(SOLO USA NUMEROS ENTEROS): "; std::cin >> t_extra;

                Camioneta ca(t_marca, t_modelo, t_precio, t_year, t_km, t_extra);

               
                
                Concesionaria_Benito_Juarez_IDK.agregar_camioneta(ca);
                std::cout << ">> Camioneta agregada" << std::endl;
                break;
            }

            case 4: {
                Concesionaria_Benito_Juarez_IDK.calcular_precios_venta();
                break;
            }

            case 5:
                std::cout << "MENSAJE DE DESPEDIDA GENERICO (•　ω　•) " << std::endl;
                std::cout << "💔 🫵  🥺 " << std::endl;
                std::cout << "𝑰 𝒎𝒊𝒔𝒔 𝒚𝒐𝒖  🥺 ❤️ " << std::endl;
                std::cout << "PERDON POR LA ESQUIZOFRENIA ESTABA ABURRIDO" << std::endl;
            
                break;

            default:
                std::cout << "Selecciona uno de los numero del 1 al 5 (⌣̀_⌣́) )" << std::endl;
        }

    } while(opcion != 5);


    

    return 0;
}
