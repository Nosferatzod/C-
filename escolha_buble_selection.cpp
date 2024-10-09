#include <iostream>

using namespace std;

void bubbleSort(int vetor[], int tamanho) {
    bool houveTroca;

    for (int i = 0; i < tamanho - 1; i++) {
        houveTroca = false;
        cout << "\nPassagem " << i + 1 << ":\n";
        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";
            } else {
                cout << vetor[k] << " ";
            }
        }
        cout << "\n";

        for (int j = 0; j < tamanho - i - 1; j++) {
            if (vetor[j] > vetor[j + 1]) {
                cout << "\033[1;31m[Troca] " << vetor[j] << "\033[0m <-> \033[1;32m" << vetor[j + 1] << "\033[0m nos índices " << j << " e " << j + 1 << endl;

                int temporario = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = temporario;

                houveTroca = true;
            }

            for (int k = 0; k < tamanho; k++) {
                if (k == j || k == j + 1) {
                    cout << "\033[1;33m[" << vetor[k] << "]\033[0m ";
                } else {
                    cout << vetor[k] << " ";
                }
            }
            cout << "\n";
        }
        if (!houveTroca)
            break;
    }
}

void selectionSort(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        int indiceMinimo = i;
        cout << "\nPassagem " << i + 1 << ":\n";

        for (int k = 0; k < tamanho; k++) {
            if (k == i) {
                cout << "\033[1;34m[" << vetor[k] << "]\033[0m ";
            } else {
                cout << vetor[k] << " ";
            }
        }
        cout << "\n";

        for (int j = i + 1; j < tamanho; j++) {
            if (vetor[j] < vetor[indiceMinimo]) {
                indiceMinimo = j;
            }

            for (int k = 0; k < tamanho; k++) {
                if (k == j || k == indiceMinimo) {
                    cout << "\033[1;33m[" << vetor[k] << "]\033[0m ";
                } else {
                    cout << vetor[k] << " ";
                }
            }
            cout << "\n";
        }

        cout << "\033[1;31m[Troca] " << vetor[i] << "\033[0m <-> \033[1;32m" << vetor[indiceMinimo] << "\033[0m nos índices " << i << " e " << indiceMinimo << endl;

        int temporario = vetor[i];
        vetor[i] = vetor[indiceMinimo];
        vetor[indiceMinimo] = temporario;
    }
}

void imprimirVetor(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        cout << vetor[i] << " ";
    }
    cout << endl;
}

int main() {
    int membros[] = {24, 18, 30, 21, 25, 22, 26, 28, 19, 27, 23, 20, 29, 31, 24, 22, 25, 26, 20, 27, 18, 21, 19, 25, 22, 24, 30, 28, 29, 23};
    int tamanho = 30;

    cout << "Membros do grupo por tempo de treinamento (meses):\n";
    imprimirVetor(membros, tamanho);

    cout << "\nEscolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort.\n";
    cout << "2. Ordenar usando Selection Sort.\n";
    int escolha;
    cin >> escolha;

    switch (escolha) {
        case 1:
            cout << "\nOrdenando usando Bubble Sort...\n";
            bubbleSort(membros, tamanho);
            break;
        case 2:
            cout << "\nOrdenando usando Selection Sort...\n";
            selectionSort(membros, tamanho);
            break;
        default:
            cout << "Opção inválida! Tente novamente.\n";
            return 0;
    }

    cout << "\nVetor ordenado:\n";
    imprimirVetor(membros, tamanho);

    return 0;
}
