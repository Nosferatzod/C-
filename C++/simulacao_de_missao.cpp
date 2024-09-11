#include <iostream>
#include <cstdlib>  
#include <ctime>    

int main() {

    std::srand(std::time(0));

    int forca, destreza, sorte;

    std::cout << "Digite o valor da Força do personagem: ";
    std::cin >> forca;

    std::cout << "Digite o valor da Destreza do personagem: ";
    std::cin >> destreza;

    std::cout << "Digite o valor da Sorte do personagem: ";
    std::cin >> sorte;

    int somaAtributos = forca + destreza;
 
    int numeroAleatorio = std::rand() % 101;

    std::cout << "Número aleatório gerado: " << numeroAleatorio << std::endl;

    if (somaAtributos > 50 && sorte > numeroAleatorio) {
        std::cout << "Missão bem-sucedida!" << std::endl;
    } else {
        std::cout << "Missão fracassada!" << std::endl;
    }

    return 0;
}
