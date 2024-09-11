#include <iostream>

using namespace std;

int main() {
    int numero;
    int fatorial = 1;

    cout << "Digite um número inteiro positivo: ";
    cin >> numero;

    if (numero < 0) {
        cout << "O número deve ser inteiro e positivo." << endl;
        return 1;
    }

    for (int i = 1; i <= numero; ++i) {
        fatorial *= i;
    }

    cout << "O fatorial de " << numero << " é: " << fatorial << endl;

    return 0;
}
