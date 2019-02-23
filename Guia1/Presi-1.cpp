//Programa para determinar si el primer numero es mayor
//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 21:19

#include <iostream>//Libreria Obligatoria

using namespace std; //Omite el termino std para cada caso en que se coloque cout y cin

int mayor (int *p, int *s)// Funcion para determinar numero mayor
{	
	if (*p > *s)// Condicion que verifica si el primer numero es mayor
	{
		int aux;//Variable para realizar intercambios 
		aux = *p;//Se iguala con el puntero p
		*p = *s;//El puntero p se iguala con el s
		*s = aux;//Y al final la varible aux realiza el intercambio al igualarse con el puntero s
		
		cout << " el intercambio es:  \n";//Muestra el intercambio en la consola 
		cout << *p << endl << *s << endl;
	}
	else //Condicion de que si la condicion anterior no se cumple
	{
		cout << "El primero no es mayor" << endl;//Se muestra en pantalla que el primer numero es menor a lo solicitado
	}
	
}

int main ()//Funcion principal
{
	int variable_1;//primer numero
	int variable_2;//segundo numero

	cout << "Ingrese el primer numero:  " << endl;//Ingreso de variables
	cin >> variable_1;
	
	cout << "Ingrese el segundo numero:  " << endl;//Ingreso de variables
	cin >> variable_2;

	mayor(&variable_1, &variable_2);//Llamada a la funcion mayor en la funcion principal
}


