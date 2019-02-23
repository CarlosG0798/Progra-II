//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 16:27

#include <iostream> //Libreria obligatoria para el ingreso de entrada y salida de datos

using namespace  std; //Omite el termino std para cada caso en que se coloque cout y cin 

int longitud(char *cadenatxt) //Funcion a utilizar para determinar la longitud del texto 
{
	char *cadenalong = cadenatxt;
	
	while(cadenalong[0] != '\0')//mientras *cadenalong sea diferente de vacio avanzara un valor en la direccion
	 {
		cadenalong++; //Avance de una posicion en la funcion
	 }
	return (int)(cadenalong-cadenatxt); //Retorno de longitud de la cadena 
}

char invertir(char *cadenatxt)//Funcion utilizada para la invertir caracteres
{
	int largo = longitud(cadenatxt);// Variable que determina la longitud del texto a invertir 
	char inverso[largo]; 

	while(cadenatxt[0] != '\0')// Mientras sea diferente de vacio 
	{
		inverso[largo-1] = cadenatxt[0]; //Restara una posicion a la cadena
		cadenatxt++;//Avanza un espacio de la cadena 
		largo--;// Reduce la longitud de cuantos espacios hacen falta acomodar 
	}
	cout << inverso << endl;//Se obtiene el resultado de la palabra invertida
}

int main() //Funcion principal del programa
{
	string agregar;//Variable para agregar carateres
	getline(cin,agregar);//Se solicita escribe la palabra
	char *p = &agregar[0];//Se envia la direccion donde esta almacenada la variable
	invertir(p);//Funcion para invertir la palabra
	
}
