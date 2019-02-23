//Programa realizado por Carlos Manuel Guevara Hernández
//Carnet: GH18015
//Fecha de entrega: 22 de febrero de 2019
//Hora: 17:10

#include <iostream> //Libreria obligatoria para el ingreso de entrada y salida de datos

using namespace  std; //Omite el termino std para cada caso en que se coloque cout y cin 

void potencia (double *n, int *p)//Eleva un numero n a una potencia p
{
	int cont = 1;//Contador utilizado en el ciclo while
	double resultado=1;//Almacena la respuesta de la operacion
	
	while (cont <= *p)//Mientras el contador sea menor al expoente p
	{
		resultado = resultado * (*n);//Multiplica resultado por si mismo p veces
		cin.get();//Pausa el sistema
		cout << "El resultado de la potencia es:  " << resultado << endl;//Muestra la respuesta
		cont++;//El contador aumenta en 1 cada vez que el ciclo se repite
	}
		
	
}

int main ()
{
	double numero;
	int exponente;
	
	//Ingreso de datos
	cout << "Ingrese el numero: ";
	cin >> numero;
	cout << "Ingrese: el exponente";
	cin >> exponente;
	
	potencia(&numero, &exponente);//LLama a la funcion

}
