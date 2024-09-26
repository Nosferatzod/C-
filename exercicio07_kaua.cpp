#include <iostream>
#include <iomanip>

int main() {
    double populacao;
    double taxa;
    int geracoes;

    std::cout << "Digite o número inicial de indivíduos: ";
    std::cin >> populacao;
    std::cout << "Digite a taxa de crescimento (em porcentagem): ";
    std::cin >> taxa;
    std::cout << "Digite o número de gerações: ";
    std::cin >> geracoes;

    taxa = taxa / 100 + 1;

    for (int i = 1; i <= geracoes; i++) {
        populacao *= taxa;
        std::cout << "População após " << i << " geração: " << std::fixed << std::setprecision(4) << populacao << std::endl;
    }

    return 0;
}
