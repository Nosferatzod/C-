#include <iostream>
using namespace std;

int main() {
    int numero;
    bool primo = true;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (numero <= 0) {
        cout << "O número deve ser um inteiro positivo." << endl;
        return 1;
    }

    if (numero <= 1) {
        primo = false;
    } else if (numero == 2) {
        primo = true; 
    } else if (numero % 2 == 0) {
        primo = false;
    } else {
        for (int i = 3; i * i <= numero; i += 2) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }
    }

    if (primo) {
        cout << numero << " é um número primo." << endl;
    } else {
        cout << numero << " não é um número primo." << endl;
    }

    return 0;
}
