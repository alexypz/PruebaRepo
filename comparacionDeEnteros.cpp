#include <iostream>
using namespace std;

int main() {
	int numero1, numero2;
	cout << "Ingrese el primer numero: ";
	cin >> numero1;

	cout << "Ingrese el segundo numero: ";
	cin >> numero2;
	if (numero1 > numero2) {
		cout << "El primer numero es mayor que el segundo." << endl;
	} else if (numero1 < numero2) {
		cout << "El primer numero es menor que el segundo." << endl;
	} else {
		cout << "Los numeros son iguales." << endl;
	}
	return 0;
}