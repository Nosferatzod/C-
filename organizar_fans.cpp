#include <iostream>
#include <vector>
#include <iomanip> // Para std::setprecision

using namespace std;

// Função para realizar Bubble Sort
void bubbleSort(vector<int>& fans) {
    int n = fans.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (fans[j] < fans[j + 1]) { // Ordem decrescente
                swap(fans[j], fans[j + 1]);
            }
        }
    }
}

// Função para realizar Selection Sort
void selectionSort(vector<int>& fans) {
    int n = fans.size();
    for (int i = 0; i < n - 1; i++) {
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (fans[j] > fans[maxIndex]) { // Ordem decrescente
                maxIndex = j;
            }
        }
        swap(fans[i], fans[maxIndex]);
    }
}

// Função para exibir os fãs por região
void displayFans(const vector<int>& fans) {
    for (int fan : fans) {
        cout << fan << " ";
    }
    cout << endl;
}

int main() {
    vector<int> fans = {
        5, 3, 6, 7, 2, 4, 8, 3, 9, 10,
        6, 7, 2, 5, 8, 4, 10, 7, 6, 9,
        5, 4, 2, 3, 6, 7, 5, 9, 4, 8
    };

    int choice;
    cout << "Escolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort (Decrescente)\n";
    cout << "2. Ordenar usando Selection Sort (Decrescente)\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> choice;

    if (choice == 1) {
        bubbleSort(fans);
        cout << "Fãs organizados usando Bubble Sort:\n";
    } else if (choice == 2) {
        selectionSort(fans);
        cout << "Fãs organizados usando Selection Sort:\n";
    } else {
        cout << "Escolha inválida!\n";
        return 1; // Encerrar o programa em caso de escolha inválida
    }

    displayFans(fans);

    return 0;
}
