#include <iostream> // Inclui a biblioteca para entrada e saída de dados
#include <iomanip>
using namespace std;

int main()
{
    double base;
    double altura;
    double area;
    // Solicita ao usuário que insira um número inteiro
    cout << "Digite a base do triângulo: ";
    cin >> base; // Lê o número fornecido pelo usuário

    cout << "Digite a altura: ";
    cin >> altura; // Lê o número fornecido pelo usuário
    
    area = (base * altura) / 2;
    
    cout <<"A medida do triângulo:";
    cout << fixed << setprecision(2) << area << endl;

    return 0;
}