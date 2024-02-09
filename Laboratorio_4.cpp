#include <iostream>
#include <cmath>

using namespace std;

//Declaraci�n de funciones
float opMatematica(float num1, float num2, char operador);
void imprimirRes(float resultado);

// Funci�n principal
int main() {
	int cantOperaciones;
	float num1, num2, resultado;
	char operador;

	cout << "Ingrese la cantidad de operaciones a realizar: ";
	cin >> cantOperaciones;

  
	for (int i = 0; i < cantOperaciones; i++) {
		cout << "\nIngrese el primer numero: ";
    	cin >> num1;
    	cout << "Ingrese el segundo numero: ";
    	cin >> num2;
    	cout << "Ingrese el operador (+, -, *, /, %: ";
    	cin >> operador;

		resultado = opMatematica(num1, num2, operador);

    	imprimirRes(resultado);
  	}

	return 0;
}

//Definici�n de la funci�n para realizar operaciones matem�ticas
float opMatematica(float num1, float num2, char operador) {
	float resultado;

	switch (operador) {
    	case '+': {
      		resultado = num1 + num2;
      		break;
      	}
      	
    	case '-': {
    		resultado = num1 - num2;
			break;
		}
      		
    	case '*': {
    		resultado = num1 * num2;
			break;
		}
      		
    	case '/': {
    		resultado = num1 / num2;
			break;
		}
      		
    	case '%': {
    		resultado = fmod(num1, num2);
			break;
		}
		
		default: cerr << "Opcion invalida" << endl;
  	}
	return resultado;
}

//Definici�n de la funci�n para imprimir resultados
void imprimirRes(float resultado) {
	cout << "El resultado es: " << resultado << endl;
}
