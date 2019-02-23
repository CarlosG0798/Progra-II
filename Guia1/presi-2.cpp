//Programa para determinar si el primer numero es mayor
//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 22:00

#include <iostream>//Libreria para la entrada y salida de datos

using namespace std;//Omite el termino std para cada caso en que se coloque cout y cin

double multiplo (double *multiplicando, double *resultado)//Funcion para realizar la multiplicacion
{
	
	cout << "Ingrese el numero a multiplicar: " << endl;//Se solicita el numero que se desea multiplicar
	cin >> *multiplicando;//Se guarda la variable
	
	*resultado = *multiplicando * 10;//Se realiza la operacion multiplicando el numero por la constante 10
	
	cout << "El resultado es:  " << *resultado << endl;//Se muestra el resultado en pantalla
}

int main ()//Funcion Principal
{	
	double numero_1;//Variable 1
	double numero_2;//Variable 2
	multiplo (&numero_1, &numero_2);//Llamada a la funcion multiplo
}
