//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 21:19
#include <iostream> //Libreria obligatoria para el ingreso de entrada y salida de datos

using namespace std;//Omite el termino std para cada caso en que se coloque cout y cin 

double area(double h, double b, int entero) //Funcion a utilizar para determinar el area de un cuadrado o un cubo
{
	double R;
	switch(entero) //Marcara que operacion sera realizada
	{
		case 1: //Area del cuadrado
			R=h*b;
			break;
			
		case 2: //Area del Cubo
			R=h*b*6;
			break;
	}
	
	cout << "El area de la figura es: " << R;//Imprime el area 
}

int main ()
{
	
	double h;//Altura
	double b;//Base
	int entero;//Opcion que sera tomada
	
	
	cout << "¿Que area desea obtener? Cuadrado(1) Cubo(2)" << endl; //muestra las opciones al usuario
	cin >> entero;
	
	cout << "Ingrese la altura: " << endl;
	cin >> h;
	cout << "Ingrese la base: " << endl;
	cin >> b;
				
	area(h,b,entero); //declaracion de la función
}
