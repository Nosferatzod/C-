#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
    int numNotas;
    double nota, peso;
    double somaNotasPonderadas = 0.0;
    double somaPesos = 0.0;

    cout << "Digite o número de notas: ";
    cin >> numNotas;

    if (numNotas <= 0) {
        cout << "O número de notas deve ser maior que zero." << endl;
        return 1;
    }

    for (int i = 0; i < numNotas; ++i) {
        
        cout << "Digite a nota " << (i + 1) << ": ";
        cin >> nota;
        cout << "Digite o peso da nota " << (i + 1) << ": ";
        cin >> peso;

        if (nota < 0 || peso < 0) {
            cout << "Nota e peso devem ser valores não negativos." << endl;
            return 1;
        }

        somaNotasPonderadas += nota * peso;
        somaPesos += peso;
    }

    if (somaPesos == 0) {
        cout << "A soma dos pesos não pode ser zero." << endl;
        return 1;
    }

    double mediaPonderada = somaNotasPonderadas / somaPesos;

    cout << fixed << setprecision(2);

    cout << "A média ponderada das notas é: " << mediaPonderada << endl;

    return 0;
}
