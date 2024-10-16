#include <iostream>
#include <vector>

using namespace std;

// Função para realizar Bubble Sort
void bubbleSort(vector<int>& skills, bool ascending) {
    int n = skills.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((ascending && skills[j] > skills[j + 1]) || 
                (!ascending && skills[j] < skills[j + 1])) {
                swap(skills[j], skills[j + 1]);
            }
        }
    }
}

// Função para realizar Selection Sort
void selectionSort(vector<int>& skills, bool ascending) {
    int n = skills.size();
    for (int i = 0; i < n - 1; i++) {
        int targetIndex = i;
        for (int j = i + 1; j < n; j++) {
            if ((ascending && skills[j] < skills[targetIndex]) || 
                (!ascending && skills[j] > skills[targetIndex])) {
                targetIndex = j;
            }
        }
        swap(skills[i], skills[targetIndex]);
    }
}

// Função para exibir as habilidades de dança
void displaySkills(const vector<int>& skills) {
    for (int skill : skills) {
        cout << skill << " ";
    }
    cout << endl;
}

int main() {
    vector<int> skills = {
        80, 75, 90, 85, 70, 95, 60, 80, 
        85, 90, 70, 75, 80, 95, 60, 85, 
        90, 70, 80, 75, 95, 85, 70, 80, 
        75, 95, 70, 90, 60, 85
    };

    int sortMethod, order;
    cout << "Escolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort\n";
    cout << "2. Ordenar usando Selection Sort\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> sortMethod;

    cout << "Escolha o tipo de ordenação:\n";
    cout << "1. Ordenar de forma crescente (menor para maior)\n";
    cout << "2. Ordenar de forma decrescente (maior para menor)\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> order;

    bool ascending = (order == 1);

    if (sortMethod == 1) {
        bubbleSort(skills, ascending);
        cout << "Habilidades organizadas usando Bubble Sort:\n";
    } else if (sortMethod == 2) {
        selectionSort(skills, ascending);
        cout << "Habilidades organizadas usando Selection Sort:\n";
    } else {
        cout << "Escolha inválida!\n";
        return 1; // Encerrar o programa em caso de escolha inválida
    }

    displaySkills(skills);

    return 0;
}
