#include <iostream>
#include <cmath>

int main() {
    double cateto_adjacente, cateto_oposto;
    
    std::cout << "Comprimento do cateto adjacente: ";
    std::cin >> cateto_adjacente;
    
    std::cout << "Comprimento do cateto oposto: ";
    std::cin >> cateto_oposto;

    double quadrado_hipotenusa = pow(cateto_adjacente, 2) + pow(cateto_oposto, 2);
    
    std::cout << "Quadrado da hipotenusa do triângulo retângulo: " << quadrado_hipotenusa << std::endl;

    return 0;
}
