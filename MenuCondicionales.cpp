#include <iostream>
#include <math.h>
using namespace std;

/*1. Escribe un programa que verifique si un número ingresado por el usuario es par.
2. Crea un programa que determine si un año ingresado es bisiesto o no.
3. Desarrolla un programa que solicite al usuario dos números y determine si son iguales.
4. Realiza un programa que pida al usuario su edad y verifique si es mayor de edad (18 años o más).
5. Implementa un programa que evalúe si un estudiante aprobó un examen, considerando que la calificación de aprobación es 60 o más*/

int main(){
	
	system("cls");
	
	int menu;
	char resp = 's';
	
	while (resp == 's'){
		cout << "----------- MENU DE OPCIONES -------------\n" << endl;
		cout << "1. Verificar si un numero es par." << endl;
		cout << "2. Determinar si un anio es bisiesto." << endl;
		cout << "3. Determinar si dos numeros son iguales." << endl;
		cout << "4. Verificar si el usuario es mayor de edad." << endl;
		cout << "5. Evaluar si un estudiante aprobo un examen." << endl;
		cout << "6. Salir del menu." << endl;
		
		cout << "\nIngrese el numero de opcion deseada: ";
		cin >> menu;
		
		system("cls");
		
		switch (menu){
			case 1: {
				int num;
				cout << "VERIFICAR SI UN NUMERO ES PAR" << endl;
				cout << "\nIngrese el numero a evaluar: ";
				cin >> num;
				
				if (num % 2 == 0){
					cout << "\n" << num << " es un numero par." << endl;
				}else{
					cout << "\n" << num << " no es un numero par." << endl;
				}
				
				break;
			}	
			case 2: {
				int num_dias;
				
				cout << "DETERMINAR SI UN ANIO ES BISIESTO" << endl;
				cout << "Ingrese el numero de dias que tiene el anio: ";
				cin >> num_dias;
				
				if (num_dias == 366){
					cout << "\n" << "El anio es bisiesto." << endl;
				}else{
					cout << "\n" << "El anio no es bisiesto." << endl;
				}
				
				break;
			}
			case 3: {
				int num1, num2;
				cout << "DETERMINAR SI DOS NUMEROS SON IGUALES" << endl;
				cout << "\nIngrese el primer numero: ";
				cin >> num1;
				cout << "Ingrese el segundo numero: ";
				cin >> num2;
				
				if (num1 == num2){
					cout << "\nLos numeros son iguales." << endl;
				}else{
					cout << "\nLos numeros " << num1 << " y " << num2 << " no son iguales." << endl;
				}
				
				break;
			}	
			case 4: {
				int edad;
				
				cout <<"DETERMINAR SI EL USUARIO ES MAYOR DE EDAD" << endl;
				cout << "\nIngrese su edad: ";
				cin >> edad;
				
				if (edad >= 18){
					cout << "\nUsted es mayor de edad." << endl;
				}else{
					cout << "\nUsted no es mayor de edad." << endl;
				}
				
				break;
			}	
			case 5: {
				int nota;
				
				cout << "EVALUAR SI UN ALUMNO APROBO LA CLASE" << endl;
				cout << "\nIngrese su nota: ";
				cin >> nota;
				
				if (nota >= 61){
					cout << "Aprobo" << endl;
				}else{
					cout << "Reprobo" << endl;
				}
				
				break;
			}		
			case 6: {
				
				exit(0);
				
				break;
			}
			default: cerr << "Opcion invalida." << endl;
			system("cls");
		}
		
		cout << "\nDesea escoger otra opcion (s/n): ";
		cin >> resp;
	}
	
	system("pause");
	return 0;
}
