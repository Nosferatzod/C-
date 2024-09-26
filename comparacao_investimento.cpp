#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calcularJurosSimples(double capital, double taxa, int tempo) {
    return capital + (capital * (taxa / 100) * tempo);
}

double calcularJurosCompostos(double capital, double taxa, int tempo) {
    return capital * pow((1 + (taxa / 100)), tempo);
}

int main() {
    double capital, taxa;
    int tempo;

    cout << "Valor inicial do investimento: R$ ";
    cin >> capital;
    cout << "Taxa de juros (em porcentagem): ";
    cin >> taxa;
    cout << "Período de tempo (em anos): ";
    cin >> tempo;

    double montante_simples = calcularJurosSimples(capital, taxa, tempo);
    double montante_composto = calcularJurosCompostos(capital, taxa, tempo);

    cout << fixed << setprecision(2);
    cout << "Montante final do investimento com juros simples: R$ " << montante_simples << endl;
    cout << "Montante final do investimento com juros compostos: R$ " << montante_composto << endl;

    return 0;
}
