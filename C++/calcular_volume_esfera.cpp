#include <iostream> // Inclui a biblioteca para entrada e saída de dados
#include <iomanip>  // Inclui a biblioteca para manipulação de fluxo
using namespace std;

int main()
{
    double raio, result_pi, raio2 , result_pi2, result2;
    double pi = 3.14, pi_dois = 3.14 , result; // Valor de pi para cálculos
    cout << "Digite o valor do raio da primeira esfera: ";
    cin >> raio; // Lê o número fornecido pelo usuário

    cout << "Digite o raio da segunda esfera:";
    cin >> raio2;
    
    result_pi = 4 * pi;
    result = (result_pi * (raio * raio) * raio) / 3;

    result_pi2 = 4 * pi_dois
    result2 =      
    cout << "O volume da esfera é: ";
    // Configura o formato para fixar o número de casas decimais em 2
    cout << fixed << setprecision(2) << result << endl;

    return 0;
}
