#include <iostream>
using namespace std;

int main() {
    int num_ataques;
    double dano_base, multiplicadorCritico, dano_total = 0.0;


    cout << "Quantos ataques foram realizados? ";
    cin >> num_ataques;

    if (num_ataques <= 0) {
        cout << "Número de ataques deve ser maior que 0." << endl;
    }

    for (int i = 0; i < num_ataques; ++i) {
        cout << "Digite o dano base do ataque " << (i + 1) << ": ";
        cin >> dano_base;

        cout << "Digite o multiplicador de crítico do ataque " << (i + 1) << ": ";
        cin >> multiplicadorCritico;

        if (multiplicadorCritico < 0.0 || multiplicadorCritico > 2.0) {
            cout << "Multiplicador de crítico deve estar entre 0.0 e 2.0." << endl;
            return 1; 
        }

        dano_total += dano_base * multiplicadorCritico;
    }

    cout << "O dano total causado pelo personagem é: " << dano_total << endl;

    return 0;
}
