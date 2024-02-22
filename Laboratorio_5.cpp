#include <iostream>
using namespace std;

//Menú de opciones seleccionables
int menu(){
	int op;
	system("cls");
	
	cout << "---------- BIENVENIDO ----------" << endl;
	cout << "Opciones del menu" << endl;
	cout << "1. Suma de numeros pares e impares." << endl;
	cout << "2. Factorial de un numero." << endl;
	cout << "3. Contador de digitos." << endl;
	cout << "4. Ordenamiento ascendente de numeros." << endl;
	cout << "5. Suma de digitos de un numero." << endl;
	cout << "6. Salir" << endl << endl;
	
	cout << "Ingresa tu opcion: ";
	cin >> op;
	
	return op;
}

//Función para realizar una suma de números pares e impares
int suma_par_impar(int numero, bool par){
	int suma = 0;
	
	for (int i = 1; i <= numero; i++){
		if((i % 2 == 0 && par) || (i % 2 != 0 && !par)){
			suma = suma + i;
		}
	}
	return suma;	
}

//Función para calcular el factorial de un número
int factorial(int num, int factorial = 1){
	while(num != 0){
		factorial = factorial * num;
		num = num - 1;
	}
	return factorial;
}

int cuenta_digito(int n){
	int x = 0;
	
	do{
		n = n / 10;
		x++;
	}while(n != 0);
	
	return x;
}

//Función para ordenar números en orden ascendente
void ordena_numeros(){
	int arreglo[] = {34, 56, 2};
	
	cout << arreglo << endl;
	
	int n = sizeof(arreglo) / sizeof(arreglo[0]);
	
	cout << n << endl;
	
	bool intercambio;
	
	do{
		intercambio = false;
		
		for (int i = 0; i < n - 1; i++){
			if(arreglo[i] > arreglo[i + 1]){
				int temp = arreglo[i];
				arreglo[i] = arreglo[i+1];
				arreglo[i+1] = temp;
				intercambio = true;
			}
		}
	}while (intercambio==true);
	
	for(int x = 0; x < n; x++){
		cout << arreglo[x] << endl;
	}
}

//Función para sumar los dígitos de un numero
int suma_digitos(int n){
	int suma = 0;
	
	while(n > 0){
		suma = suma + n%10;
		n = n / 10;
	}
	return suma;
}

//Función principal del programa
int main(){
	int op;
	char resp = 's';
	
	while(resp == 's' || resp == 'S'){
		system("cls");
		
		//Llamado a la función de menú por medio de op
		op = menu();
		
		switch(op){
			case 1: {
				system("cls");
				
				cout << "----- SUMA DE PARES E IMPARES HASTA UN DETERMINADO NUMERO -----" << endl;
				
				int num;
				
				cout << "Ingrese el numero limite para las sumas: ";
				cin >> num;
				
				cout << "\nLa suma de pares hasta " << num << " es: " << suma_par_impar(num, true) << endl;
				cout << "La suma de impares hasta " << num << " es: " << suma_par_impar(num, false) << endl;
				
				break;
			}
			
			case 2: {
				system("cls");
				
				cout << "----- CALCULO DEL FACTORIAL DE UN NUMERO -----" << endl;
				
				int numero, fact = 1;
				
				cout << "Escriba el numero deseado: ";
				cin >> numero;
				
				cout << "\nEl factorial del numero ingresado es: " << factorial(numero, fact) << endl;
				
				break;
			}
			
			case 3: {
				system("cls");
				
				cout << "----- CONTADOR DE DIGITOS QUE CONFORMAN UN NUMERO -----" << endl;
				
				int num;
				
				cout << "Ingrese un numero: ";
				cin >> num;
				
				cout << "\nEl numero tiene " << cuenta_digito(num) << " cifras." << endl;
				
				break;
			}
			
			case 4: {
				system("cls");
				
				cout << "----- ORDEN DE NUMEROS EN FORMA ASCENDENTE -----" << endl;
				
				ordena_numeros();
				
				break;
			}
			
			case 5: {
				system("cls");
				
				cout << "----- SUMA DE LOS DIGITOS QUE CONFORMAN UN NUMERO -----" << endl;
				
				int num;
				
				cout << "Ingrese un numero mayor a 0: ";
				cin >> num;
				
				cout << "\nLa suma de sus digitos es: " << suma_digitos(num) << endl;
				
				break;
			}
			
			case 6: {
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
