#include <iostream>
#include <vector>
#include <iomanip> // Para std::setprecision

using namespace std;

// Função para realizar Bubble Sort
void bubbleSort(vector<double>& scores) {
    int n = scores.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (scores[j] < scores[j + 1]) { // Ordem decrescente
                swap(scores[j], scores[j + 1]);
            }
        }
    }
}

// Função para realizar Insertion Sort
void insertionSort(vector<double>& scores) {
    int n = scores.size();
    for (int i = 1; i < n; i++) {
        double key = scores[i];
        int j = i - 1;
        while (j >= 0 && scores[j] < key) { // Ordem decrescente
            scores[j + 1] = scores[j];
            j--;
        }
        scores[j + 1] = key;
    }
}

// Função para exibir os álbuns
void displayScores(const vector<double>& scores) {
    cout << fixed << setprecision(4); // Para mostrar 4 casas decimais
    for (double score : scores) {
        cout << score << " ";
    }
    cout << endl;
}

int main() {
    vector<double> scores = {
        89.0651, 95.4805, 94.0230, 86.3919, 96.7627, 83.6630,
        96.2819, 90.8391, 81.4960, 83.8841, 82.5377, 99.6183,
        97.6745, 97.8607, 87.5581, 85.3594, 92.1513, 83.8347,
        95.3876, 83.0570, 87.5763, 89.0502, 83.3633, 80.0361,
        83.0502, 81.5310, 82.7322, 84.4340, 84.8335, 82.7916,
        88.1666, 95.5569, 82.0760, 87.3993, 88.2708, 84.4348,
        85.2470, 99.4255, 85.2060, 88.1903, 80.8430, 94.1189,
        94.4674, 83.0433, 92.6951, 97.2446, 97.9635, 96.4502,
        94.4477, 86.4615
    };

    int choice;
    cout << "Escolha o método de ordenação:\n";
    cout << "1. Ordenar usando Bubble Sort (Decrescente)\n";
    cout << "2. Ordenar usando Insertion Sort (Decrescente)\n";
    cout << "Digite sua escolha (1 ou 2): ";
    cin >> choice;

    if (choice == 1) {
        bubbleSort(scores);
        cout << "Álbuns ordenados usando Bubble Sort:\n";
    } else if (choice == 2) {
        insertionSort(scores);
        cout << "Álbuns ordenados usando Insertion Sort:\n";
    } else {
        cout << "Escolha inválida!\n";
        return 1; // Encerrar o programa em caso de escolha inválida
    }

    displayScores(scores);

    return 0;
}
