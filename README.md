# Caculadora de venta 

Una empresa quiere determinar el precio por el cual puede vender diferentes vehículos.
Cada tipo de vehículo (moto, coche y camioneta) puede tener un precio final diferente dependiendo de su:

- Precio base
- Año
- Kilometraje
- Modelo
- Marca

El objetivo de este codigo es crear un sistema que permita organizar la información de cada vehículo y preparar el cálculo de su precio final de venta.

# El programa

- Define tres clases independientes: Moto, Coche y Camioneta.
- Cada clase almacena los datos principales del vehículo: marca, modelo, precio base, año y kilometraje.
- Proporciona métodos para acceder a estos datos mediante getters.

El programa permite agregar vehículos, ya sean motos, coches o camionetas, y calcular automáticamente el precio de venta de cada uno. El usuario solo debe ingresar los datos del vehículo, como la marca o el kilometraje. 

# Compilación

El programa solo ha sido probado en Windows, por lo que las instrucciones están pensadas únicamente para este sistema operativo.

Visual studio code:

Hasta ahora no he tenido ningún problema al ejecutar el código en VS Code, pero recomiendo usar la terminal de Windows por si acaso.

Terminal:

Recuerda que todos los archivos .h deben estar en la misma carpeta que el archivo main.

`g++ main.cpp -o calculadora`
`.\calculadora.exe`
