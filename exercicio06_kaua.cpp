#include <iostream>
#include <map>

int main() {
    std::string aminoacidos;
    std::map<char, int> contagem;

    contagem['A'] = 0;
    contagem['C'] = 0;
    contagem['G'] = 0;
    contagem['T'] = 0;

    std::cout << "Digite a sequência de aminoácidos: ";
    std::cin >> aminoacidos;

    for (char amino : aminoacidos) {
        if (contagem.find(amino) != contagem.end()) {
            contagem[amino]++;
        }
    }

    for (const auto& par : contagem) {
        std::cout << par.first << ": " << par.second << std::endl;
    }

    return 0;
}
