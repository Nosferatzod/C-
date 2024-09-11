#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    int num1;
    int num2;
    int resultado;
    // Solicita ao usuário que insira um número inteiro
    cout << "Digite o primeiro numero: ";
    cin >> num1; // Lê o número fornecido pelo usuário

    cout << "Digite o segundo numero: ";
    cin >> num2; // Lê o número fornecido pelo usuário
    
    resultado = num1 + num2;
    
    cout <<"A soma dos dois numeros:";
    cout <<resultado;

    return 0;
}