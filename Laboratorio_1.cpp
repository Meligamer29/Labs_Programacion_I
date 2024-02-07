#include <iostream>
using namespace std;

float suma(float a, float b);
float resta(float a, float b);
float multiplicacion(float a, float b);
float division(float a, float b);

int main() {
    float num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;

    cout << "Ingrese el segundo numero: ";
    cin >> num2;
	
	cout << "\n------------ RESULTADOS ------------" << endl;
    cout << "El resultado de la suma es: " << suma(num1, num2) << endl;
	cout << "El resultado de la resta es: " << resta(num1, num2) << endl;
    cout << "El resultado de la multiplicacion es: " << multiplicacion(num1, num2) << endl;
	cout << "El resultado de la division es: " << division(num1, num2) << endl;
    

    return 0;
}



float suma(float a, float b) {
    return a + b;
}

float resta(float a, float b) {
    return a - b;
}

float multiplicacion(float a, float b) {
    return a * b;
}

float division(float a, float b) {
    return a / b;
}

