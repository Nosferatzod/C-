#include <iostream>
#include <vector>

// Função que ordena um vetor usando o algoritmo Insertion Sort
void insertionSort(std::vector<int>& arr) {
    for (int i = 1; i < arr.size(); i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
    }
}

// Função que ordena um vetor usando o algoritmo Bubble Sort
void bubbleSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        for (int j = 0; j < arr.size() - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
            }
        }
    }
}

// Função que ordena um vetor usando o algoritmo Selection Sort
void selectionSort(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(arr[i], arr[minIndex]);
    }
}

// Função principal 
int main() {
    int num1;
    std::cout << "Quantos elementos você deseja ordenar? ";
    std::cin >> num1;

    if (num1 <= 0) {
        std::cout << "Número inválido." << std::endl;
        return 1;
    }

    std::vector<int> data(num1);
    std::cout << "Digite os elementos:" << std::endl;
    for (int i = 0; i < num1; i++) {
        std::cin >> data[i];
    }

    // Seleciona o algoritmo de ordenação com base no número de elementos
    if (num1 <= 20) {
        insertionSort(data);
        std::cout << "Usando Insertion Sort." << std::endl;
    } else if (num1 <= 30) {
        bubbleSort(data);
        std::cout << "Usando Bubble Sort." << std::endl;
    } else {
        selectionSort(data);
        std::cout << "Usando Selection Sort." << std::endl;
    }

    // Exibe a lista ordenada
    std::cout << "Lista ordenada: ";
    for (int num : data) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
