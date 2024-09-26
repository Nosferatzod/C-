#include <iostream>
#include <vector>
using namespace std;

double calcularMedia(const vector<double> &notas)
{
    double soma = 0;
    for (double nota : notas)
    {
        soma += nota;
    }
    double media = soma / notas.size();
    return media;
}
int main()
{
    vector<double> notas = {7.5, 8.0, 6.5, 9.0, 7.0};
    double media = calcularMedia(notas);
    cout << "A média das notas é:" << media << endl;

    return 0;
}