#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    int num1;
    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero: ";
    cin >> num1; // Lê o número fornecido pelo usuário
    
    if (num1%2==0)
    {
        cout << "O numero é par";
    }else{
        cout << "O numero é impar";
    }

    return 0;
}