#include <iostream>

int main(){
    std::cout << "Digite um numero: ";
    std::cin >> numero;

    if (numero % 2 == 0)
    {
        std::cout << "O número é par." << std::endl;
    }else{
        std::cout << "O número é impar." << std::endl;
    }
    return 0;
}