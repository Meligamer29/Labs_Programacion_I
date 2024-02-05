#include <iostream>
#include <math.h>
using namespace std;

//Funci�n para hacer uso del menu
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

//Funci�n para realizar una suma
float suma(float a, float b){
	return a + b;
}

//Funci�n para realizar una resta
float resta(float a, float b){
	return a - b;
}

//Funci�n para realizar una multiplicaci�n
float multi(float a, float b){
	return a * b;
}

//Funci�n para realizar una divisi�n
float division(float a, float b){
	return a / b;
}

//Funci�n para calcular la potencia de un n�mero
float calcularPotencia(float a, float b){
	
	return pow(a, b);
}

//Funci�n para calcular si un n�mero es primo
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


//Funci�n principal del programa
int main(){
	
	//Variables que ser�n de utilidad para que el menu funcione
	int op;
	char resp = 's';
	
	while(resp == 's'){
		system("cls");
		
		//La variable op utiliza la funci�n de men� para poder funcionar
		op = menu();
		
		//El switch que le dar� funcionalidad al men� de opciones
		switch(op){
			//Caso para hacer uso de las funciones que realizan operaciones aritm�ticas
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
			
			//Caso para hacer uso de la funci�n que determina si un n�mero es primo o no
			case 3: {
				system("cls");
				
				int numero;
				
    			cout << "Ingrese un numero entero positivo: ";
    			cin >> numero;

    
    			cout << "El numero " << numero << " es primo: " << boolalpha << esPrimo(numero) << endl;
				break;
			}
			
			//Caso para hacer uso de la funci�n que determina si un a�o es bisiesto o no
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


