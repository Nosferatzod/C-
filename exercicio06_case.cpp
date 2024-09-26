#include <iostream>

int main() {
    std::string aminoacidos;
    int countA = 0, countC = 0, countG = 0, countT = 0;

    std::cout << "Digite a sequência de aminoácidos: ";
    std::cin >> aminoacidos;

    for (char amino : aminoacidos) {
        switch (amino) {
            case 'A':
                countA++;
                break;
            case 'C':
                countC++;
                break;
            case 'G':
                countG++;
                break;
            case 'T':
                countT++;
                break;
            default:
                break;
        }
    }

    std::cout << "A: " << countA << std::endl;
    std::cout << "C: " << countC << std::endl;
    std::cout << "G: " << countG << std::endl;
    std::cout << "T: " << countT << std::endl;

    return 0;
}
