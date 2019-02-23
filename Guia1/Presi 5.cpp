//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 17:25

#include <iostream> //Libreria obligatoria para el ingreso de entrada y salida de datos

using namespace  std; //Omite el termino std para cada caso en que se coloque cout y cin 

void menorAcero(int *cosa_1, int *cosa_2)//El numero menor de dos convierte su valor en 0
{
	if (*cosa_1 > *cosa_2)//N1 > N2
	{
		
		cosa_2 = 0;//N2 es el menor
		cout << "El segundo es el menor numero:" << cosa_2 << endl;
	
	}
	else if (*cosa_1 < *cosa_2)//N2 > N1
	{
		cosa_1 = 0;//N1 es el menor
		cout << "El primero numero es el menor:" << cosa_1 << endl;
	}
	else
	{//de otra forma N1 = N2
		cout << "Los numeros son iguales" << endl;
	}
}

int main ()
{
	int a;//N1
	int b;//N2
	cout << "Ingrese el primer numero" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero" << endl;
	cin >> b;
	menorAcero(&a,&b);//Llama a la funcion
	
}


