#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    double lado1;
    double lado2;
    double lado3;
    // Solicita ao usuário que insira um número inteiro
    cout << "Digite a primeira medida do triângulo: ";
    cin >> lado1; // Lê o número fornecido pelo usuário

    cout << "Digite a segunda medida do triângulo: ";
    cin >> lado2; // Lê o número fornecido pelo usuário

    cout << "Digite a terceira medida do triângulo: ";
    cin >> lado3; // Lê o número fornecido pelo usuário

    if (lado1 + lado2 > lado3 && lado1 + lado3 > lado2 && lado2 +lado3 > lado1){
        cout << "É possivel fazer um triângulo";

    return 0;
    }else{
        cout << "Não é possivel fazer um triângulo";
    }
}