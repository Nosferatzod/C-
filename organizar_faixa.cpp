#include <iostream>
#include <vector>

using namespace std;

// Função para realizar Bubble Sort
void bubbleSort(vector<int>& years, bool ascending) {
    int n = years.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && years[j] > years[j + 1]) || 
                (!ascending && years[j] < years[j + 1])) {
                swap(years[j], years[j + 1]);
            }
        }
    }
}

// Função para realizar Selection Sort
void selectionSort(vector<int>& years, bool ascending) {
    int n = years.size();
    for (int i = 0; i < n - 1; i++) {
        int targetIndex = i;
        for (int j = i + 1; j < n; j++) {
            if ((ascending && years[j] < years[targetIndex]) || 
                (!ascending && years[j] > years[targetIndex])) {
                targetIndex = j;
            }
        }
        swap(years[i], years[targetIndex]);
    }
}

// Função para exibir as datas de lançamento
void displayYears(const vector<int>& years) {
    for (int year : years) {
        cout << year << " ";
    }
    cout << endl;
}

int main() {
    vector<int> years = {
        2023, 2021, 2022, 2023, 2021, 2022,
        2020, 2019, 2020, 2021, 2023, 2022,
        2019, 2023, 2021, 2022, 2020, 2021,
        2019, 2020
    };

    int sortMethod, order;
    cout << "Escolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort\n";
    cout << "2. Ordenar usando Selection Sort\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> sortMethod;

    cout << "Escolha o tipo de ordenação:\n";
    cout << "1. Ordenar de forma crescente (mais antiga para mais recente)\n";
    cout << "2. Ordenar de forma decrescente (mais recente para mais antiga)\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> order;

    bool ascending = (order == 1);

    if (sortMethod == 1) {
        bubbleSort(years, ascending);
        cout << "Datas organizadas usando Bubble Sort:\n";
    } else if (sortMethod == 2) {
        selectionSort(years, ascending);
        cout << "Datas organizadas usando Selection Sort:\n";
    } else {
        cout << "Escolha inválida!\n";
        return 1; // Encerrar o programa em caso de escolha inválida
    }

    displayYears(years);

    return 0;
}
