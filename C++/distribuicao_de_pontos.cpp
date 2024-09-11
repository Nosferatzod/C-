#include <iostream>
#include <vector>

int main() {
    int numAtaques;
    double danoBase, multiplicadorCritico, danoTotal = 0.0;

    std::cout << "Digite o número de ataques realizados: ";
    std::cin >> numAtaques;

    if (numAtaques <= 0) {
        std::cout << "Número de ataques deve ser maior que 0." << std::endl;
        return 1;
    }

    std::vector<double> danosBase(numAtaques);
    std::vector<double> multiplicadoresCriticos(numAtaques);

    for (int i = 0; i < numAtaques; ++i) {
        std::cout << "Ataque " << (i + 1) << std::endl;

        std::cout << "Digite o dano base: ";
        std::cin >> danoBase;
        
        std::cout << "Digite o multiplicador de crítico (0.0 a 2.0): ";
        std::cin >> multiplicadorCritico;

        if (multiplicadorCritico < 0.0 || multiplicadorCritico > 2.0) {
            std::cout << "Multiplicador de crítico deve estar entre 0.0 e 2.0." << std::endl;
            return 1;
        }

        danosBase[i] = danoBase;
        multiplicadoresCriticos[i] = multiplicadorCritico;
    }

    for (int i = 0; i < numAtaques; ++i) {
        danoTotal += danosBase[i] * multiplicadoresCriticos[i];
    }

    std::cout << "Dano total causado pelo personagem: " << danoTotal << std::endl;

    return 0;
}
