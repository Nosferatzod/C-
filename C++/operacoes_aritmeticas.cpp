#include <iostream> // Inclui a biblioteca para entrada e saída de dados

using namespace std;

int main()
{
    int numero;
    // Solicita ao usuário que insira um número inteiro
    cout << "Digite um numero inteiro: ";
    cin >> numero; // Lê o número fornecido pelo usuário

    if (numero <= 1)
    {
        cout << "Número não é primo";
    }
    else
    {
        for (int i = 2; i < numero; i++)
        {
            if (numero % i == 0)
            {
                cout << "Número não é primo";
                return 0;
            }
        }
    }
    cout << "Número é primo";

    return 0;
}