// Cajero Automatico.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
/*Crear un programa que simule un cajero con un saldo inicial de 1000 Dolares*/
#include <iostream>
using namespace std;

int main()
{
	int saldo_inicial = 1000,opcion;
	float extra, saldo = 0 ,retiro=0, saldo_retiro=0;
	cout << "SALDO ACTUAL 1000 BS"<< endl;
	cout << "Que desea hacer ahora" << endl;
	cout << "1.- Aumentar dinero , 2.- Retirar Dinero , 3.- Salir "<<endl;
	cout << "Opcion : "; cin >> opcion;

	switch (opcion)
	{
	case 1:
		cout<<"Digite la cantidad de dinero a ingresar" <<endl;
		cin >> extra;
		saldo = saldo_inicial + extra;
		cout << "Su saldo ahora es de " << saldo;
    break;
	
	case 2:
		cout << "Cuanto dinero desea retirar"<<endl;
		cin >> retiro;
		if (retiro>saldo_inicial)
		{
			cout << "Usted no puede retirar ese dinero"<<endl;
		}
		else {
			cout << "Usted retiro" << retiro;
			saldo_retiro = (saldo_inicial - retiro);
			cout << "Su saldo actual es de " << saldo_retiro;
		}
	}

	return 0;
}

