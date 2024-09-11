#include <iostream>

int main() {
    const int NUM_PERSONAGENS = 5;
    int forca[NUM_PERSONAGENS], destreza[NUM_PERSONAGENS], inteligencia[NUM_PERSONAGENS];
    int somaForca = 0, somaDestreza = 0, somaInteligencia = 0;

    for (int i = 0; i < NUM_PERSONAGENS; ++i) {
        std::cout << "Digite a Força, Destreza e Inteligência do personagem " << (i + 1) << ":\n";
        std::cin >> forca[i] >> destreza[i] >> inteligencia[i];
        somaForca += forca[i];
        somaDestreza += destreza[i];
        somaInteligencia += inteligencia[i];
    }

    std::cout << "Média da Força: " << static_cast<double>(somaForca) / NUM_PERSONAGENS << std::endl;
    std::cout << "Média da Destreza: " << static_cast<double>(somaDestreza) / NUM_PERSONAGENS << std::endl;
    std::cout << "Média da Inteligência: " << static_cast<double>(somaInteligencia) / NUM_PERSONAGENS << std::endl;

    return 0;
}
