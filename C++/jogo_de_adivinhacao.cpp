#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Inicializa o gerador de números aleatórios com uma seed baseada no tempo atual
    std::srand(std::time(0));

    // Gera um número aleatório entre 1 e 100
    int numeroSecreto = std::rand() % 100 + 1;
    int chute;
    bool acertou = false;

    std::cout << "Bem-vindo ao jogo de adivinhação!" << std::endl;
    std::cout << "Tente adivinhar o número entre 1 e 100." << std::endl;

    // Loop para continuar pedindo ao usuário até que ele adivinhe corretamente
    while (!acertou) {
        std::cout << "Digite seu palpite: ";
        std::cin >> chute;

        if (chute < numeroSecreto) {
            std::cout << "Muito baixo! Tente novamente." << std::endl;
        } else if (chute > numeroSecreto) {
            std::cout << "Muito alto! Tente novamente." << std::endl;
        } else {
            std::cout << "Parabéns! Você adivinhou o número corretamente." << std::endl;
            acertou = true;
        }
    }

    return 0;
}
