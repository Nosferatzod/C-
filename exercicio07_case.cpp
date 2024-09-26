#include <iostream>
#include <iomanip>

double calcularPopulacao(double populacaoInicial, double taxaCrescimento, int geracao) {
    return populacaoInicial * pow(1 + taxaCrescimento / 100, geracao);
}

int main() {
    double populacaoInicial;
    double taxaCrescimento;
    int geracoes;

    std::cout << "Digite o número inicial de indivíduos: ";
    std::cin >> populacaoInicial;
    std::cout << "Digite a taxa de crescimento (em porcentagem): ";
    std::cin >> taxaCrescimento;
    std::cout << "Digite o número de gerações: ";
    std::cin >> geracoes;

    for (int i = 1; i <= geracoes; i++) {
        double populacaoAtual = calcularPopulacao(populacaoInicial, taxaCrescimento, i);
        std::cout << "População após " << i << " geração: " << std::fixed << std::setprecision(4) << populacaoAtual << std::endl;
    }

    return 0;
}
