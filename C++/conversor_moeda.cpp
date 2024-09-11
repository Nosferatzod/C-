#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double valorOriginal;
    double taxaConversao;
    double valorConvertido;

    cout << "Digite o valor a ser convertido: ";
    cin >> valorOriginal;

    if (valorOriginal < 0) {
        cout << "O valor a ser convertido não pode ser negativo." << endl;
        return 1;
    }

    cout << "Digite a taxa de conversão (quanto 1 unidade da moeda original vale na nova moeda): ";
    cin >> taxaConversao;

    if (taxaConversao <= 0) {
        cout << "A taxa de conversão deve ser maior que zero." << endl;
        return 1;
    }

    valorConvertido = valorOriginal * taxaConversao;

    cout << fixed << setprecision(2);

    cout << "Valor convertido: " << valorConvertido << endl;

    return 0;
}
