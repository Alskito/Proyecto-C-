# SOLAMENTE USAR WINDOWS
ESTE PROGRAMA FUNCIONA EXCLUSIVAMENTE EN WINDOWS debido a que contiene emojis, en caso de que uses otro sistema operativo, aqui esta la version que no contiene emojis:

`https://github.com/Alskito/Proyecto-C-Sin-emojis-`

# Caculadora de precio de venta 

Una empresa quiere determinar el precio por el cual puede vender diferentes vehículos.
Cada tipo de vehículo (moto, coche y camioneta) puede tener un precio final diferente dependiendo de su:

- Precio base
- Año
- Kilometraje
- cc, puertas o capacidad de carga

El objetivo de este programa es crear un sistema que permita organizar la información de cada vehículo y preparar el cálculo de su precio final de venta.

# Diagrama de clases

<img width="1414" height="1570" alt="diagrama de clases" src="https://github.com/user-attachments/assets/f8bb79ed-ad57-4e0a-8d08-2f8dbfcb52ac" />


# El programa

El programa es un menú desde el cual el usuario puede agregar vehículos, ya sean motos, coches o camionetas, y ver los vehículos en una lista junto con sus precios de venta

POR FAVOR SIGAN LAS INSTRUCCIONES.

# Compilación

Visual studio code:

Hasta ahora no he tenido ningún problema al ejecutar el código en VS Code, pero recomiendo usar la terminal de Windows por si acaso.

Terminal:

Recuerda que todos los archivos .h deben estar en la misma carpeta que el archivo main.

Añadi emojis para que todo se vea mas bonito, puede que no carguen bien y aparezcan simbolos extraños, simplemente ignoralos o usa la version sin emojis.

`g++ main.cpp -o calculadora`

`.\calculadora.exe`

# Correcciones

============================ Nov 20, 2025 =====================================
Sub-Competencia: 
  avance 1  (Creación de Objetos)

Error original: El readme no estaba completo


Cambio realizado: Se agrego la seccion compilacion



============================ Nov 20, 2025 =====================================
Sub-Competencia: 
  avance 2 (Creación de Diagrama de clases)

Error original: En la clase camioneta el tipo de dato del getter no es correcto


Cambio realizado: En el archivo camioneta.h se cambio el tipo de dato de capacidad_carga a int


Líneas de código donde se ve la corrección: 6, 9, 10, 13, 15, 19 y 24

============================ Dec 2, 2025 =====================================
Sub-Competencia: 
   avance 3 (Integración de Herencia)

Error original:  Composición está mal implementada(Hice agregacion)


Cambio realizado: En el archivo Concesionaria.h‎, en el primer commit, se eliminan los atributos para calcular el precio, ahora se calcula todo dentro del metodo.

Líneas de código donde se ve la corrección: 80 - 101

Cambio realizado: En el archivo Concesionaria.h‎, en el segundo commit, se agregaron los & para que sea agregacion y tambien se corrigio el UML

Líneas de código donde se ve la corrección: 42 - 44, 50, 62 y 74 

============================ Dec 4, 2025 =====================================
Entrega final

Cambio realizado: Se agregaron comentarios en todos los archivos, todas las lineas se modificaron para tengan menos de 79 caracteres, se cambio el nombre del metodo toString a to_string, se agrego el UML al readme y se creo el repositorio con la version sin emojis.

Líneas de código donde se ve la corrección: Todo el codigo



