#include <iostream>
#include <math.h>
using namespace std;

//Función para hacer uso del menu
int menu(){
	
	int op;
	system("cls");
	
	cout << "---------- BIENVENIDO ----------" << endl;
	cout << "Opciones del menu" << endl;
	cout << "1. Operaciones aritmeticas." << endl;
	cout << "2. Calculo de una potencia." << endl;
	cout << "3. Determinar si un numero es primo." << endl;
	cout << "4. Determinar si un anio es bisiesto." << endl;
	cout << "5. Salir." << endl << endl;
	cout << "Ingresa tu opcion: ";
	cin >> op;
	
	return op;
	
}

//Función para realizar una suma
float suma(float a, float b){
	return a + b;
}

//Función para realizar una resta
float resta(float a, float b){
	return a - b;
}

//Función para realizar una multiplicación
float multi(float a, float b){
	return a * b;
}

//Función para realizar una división
float division(float a, float b){
	return a / b;
}

//Función para calcular la potencia de un número
float calcularPotencia(float a, float b){
	
	return pow(a, b);
}

//Función para calcular si un número es primo
bool esPrimo(int numero) {
    
    if (numero <= 1) {
        return false;
    }
    
    for (int i = 2; i <= sqrt(numero); i++) {
        if (numero % i == 0) {
            return false; 
        }
    }

    return true; 
}

bool esBisiesto(int anio) {
    return (anio % 4 == 0 && anio % 100 != 0) || (anio % 400 == 0);
}


//Función principal del programa
int main(){
	
	//Variables que serán de utilidad para que el menu funcione
	int op;
	char resp = 's';
	
	while(resp == 's'){
		system("cls");
		
		//La variable op utiliza la función de menú para poder funcionar
		op = menu();
		
		//El switch que le dará funcionalidad al menú de opciones
		switch(op){
			//Caso para hacer uso de las funciones que realizan operaciones aritméticas
			case 1: {
				system("cls");
				
				float num1, num2;
				
				cout << "Ingrese el primer numero: ";
				cin >> num1;
				
				cout << "Ingrese el segundo numero: ";
				cin >> num2;
				
				cout << "\n------------ RESULTADOS ------------" << endl;
    			cout << "El resultado de la suma es: " << suma(num1, num2) << endl;
				cout << "El resultado de la resta es: " << resta(num1, num2) << endl;
    			cout << "El resultado de la multiplicacion es: " << multi(num1, num2) << endl;
				cout << "El resultado de la division es: " << division(num1, num2) << endl;
				
				break;
			}
			
			//Caso para hacer uso de la funcion calcularPotencia
			case 2: {
				system("cls");
				
				float base, exponente;
				
				cout << "Ingrese la base: ";
				cin >> base;
				
				cout << "Ingrese el exponente: ";
				cin >> exponente;
				
				cout << "\nEl resultado de " << base << " elevado a la " << exponente << " es: " << calcularPotencia(base, exponente) << endl;
				break;
			}
			
			//Caso para hacer uso de la función que determina si un número es primo o no
			case 3: {
				system("cls");
				
				int numero;
				
    			cout << "Ingrese un numero entero positivo: ";
    			cin >> numero;

    
    			cout << "El numero " << numero << " es primo: " << boolalpha << esPrimo(numero) << endl;
				break;
			}
			
			//Caso para hacer uso de la función que determina si un año es bisiesto o no
			case 4: {
				system("cls");
				
				int anio;

    			cout << "Ingrese un anio: ";
    			cin >> anio;
    			
    			if (esBisiesto(anio)) {
        			cout << anio << " es un anio bisiesto." << endl;
    			} else {
        			cout << anio << " no es un anio bisiesto." << endl;
    			}
				break;
			}
			
			case 5: {
				exit(0);
				break;
			}
			
			default: cerr << "Opcion invalida." << endl;
		}
	cout << "\nDesea escoger otra opcion (s/n): ";
	cin >> resp;
	}
	
	return 0;
	
}


