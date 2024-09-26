#include <iostream>
using namespace std;

int main() {
    double temperatura;
    char unidade;

    cout << "Digite a temperatura: ";
    cin >> temperatura;
    cout << "Digite a unidade de medida (C para Celsius, F para Fahrenheit): ";
    cin >> unidade;

    if (unidade == 'C' || unidade == 'c') {
        double fahrenheit = (temperatura * 9 / 5) + 32;
        cout << "Temperatura convertida para Fahrenheit: " << fahrenheit << " F" << endl;
    } else if (unidade == 'F' || unidade == 'f') {
        double celsius = (temperatura - 32) * 5 / 9;
        cout << "Temperatura convertida para Celsius: " << celsius << " C" << endl;
    } else {
        cout << "Unidade inválida!" << endl;
    }

    return 0;
}
