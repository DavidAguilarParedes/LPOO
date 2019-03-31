
#include "pch.h"
#include <iostream>

#include "stdio.h"
#include "math.h"
using namespace std;
//Definimmos constantes
const float G= 10;
const float FACTOR = 5/18;

//Inicializamos funciones
float CalcularTiempo(float);
float CalcularPuntoCaida(float,float);

int main()
    {
        //definimos variables
        float h, Vo, d,a;
        float t, ptoCaida;
        int bandera;

        //Impresión y lectura de datos
        cout << "Ingrese altura del vuelo( metros ) :  " ;
        cin >> h;
        cout << " Ingrese la velocidad del vuelo (km/h) : ";
        cin >> Vo;
        cout << " Ingrese la distancia del barco en reposo( metros ) : ";
        cin >> d;
        cout << " Ingrese el espacio que ocupa el barco (metros) : ";
        cin >> a;

        // Invocación de funciones con parámetros reales
        t = CalcularTiempo(h);
        ptoCaida = CalcularPuntoCaida(Vo,t);

        //Impresión de variable
        cout << " ¿El soldado cae en el barco? : " << ( (ptoCaida>d)and(ptoCaida <= d+a) ? "Verdadero" : "Falso");
        cin >> bandera;

    }

float CalcularTiempo(float h)
    {
        return sqrt( 2*h/G);
    }

float CalcularPuntoCaida(float Vo, float t)

    {
        return Vo * FACTOR*t;
    }    