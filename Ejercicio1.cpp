
#include "pch.h"
#include <iostream>

#include "stdio.h"
#include "iostream"
#include "math.h"

using namespace std;

//sección para definir constantes
const float PI = 3.1416;
const float AHORRO = 5000;

//definición previa de las funciones a usar
float CalcularAreaRect(float, float);
float CalcularAreaCirc(float, float);
float CalcularAreaTri(float);
float CalcularCostoTotal(float, float);

int main()
{
	//definición de variables
	float l, a, cg;
	float areaTot, costTot;
	int bandera;

	//Impresión y lectura de datos
	cout << "Ingrese el largo del jardin :";
	cin >> l;
	cout << "Ingrese el ancho del jardin :" ;
	cin >> a;
	cout << "Ingrese el costo del grass :" ;
	cin >> cg;

	//invocación de funciones, con parámetros reales
	areaTot = CalcularAreaRect(l, a) + CalcularAreaCirc(l, a) + CalcularAreaTri(l);

	//impresión de variable con formato. 4 dígitos y 2 dígitos decimales
	cout <<"El area total es: " << areaTot << endl;
	costTot = CalcularCostoTotal(areaTot, cg);
	cout << "El costo total es: "<< costTot << endl;

	//se usa la estructura (x?"true":"false"), si x es verdadero, imprime la 1ra cadena, sino la 2da
	cout <<"Alcanza el presupuesto: "<< (costTot <= AHORRO ? "Verdadero" : "Falso");

	//se coloca esta lectura para evitar que se cierre la consola
	cin >> bandera ;

	return 0;
}

float CalcularAreaRect(float l, float a)
{
	return l * a;
}

float CalcularAreaTri(float l)
{
	return l * l*sqrt(3) / 2;
}

float CalcularAreaCirc(float l, float a)
{
	return PI * pow(a / 2, 2) + PI * pow(l / 2, 2) / 2;
}

float CalcularCostoTotal(float area, float cg)
{
	return area * cg;
}
