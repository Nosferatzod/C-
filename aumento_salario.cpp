#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double salario_atual, porcetangem_aumento, novo_salario;

    cout << "Salário atual: R$ ";
    cin >> salario_atual;

    cout << "Porcentagem de aumento salarial (%): ";
    cin >> porcetangem_aumento;

    novo_salario = salario_atual + (salario_atual * (porcetangem_aumento / 100));

    cout << fixed << setprecision(2); 
    cout << "Novo salário: R$ " << novo_salario << endl;

    return 0;
}
