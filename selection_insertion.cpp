#include <iostream>
#include <vector>

void selectionSort(std::vector<int>& vendas) {
    int n = vendas.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (vendas[j] < vendas[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(vendas[i], vendas[minIndex]);
    }
}

void insertionSort(std::vector<int>& vendas) {
    int n = vendas.size();
    for (int i = 1; i < n; ++i) {
        int key = vendas[i];
        int j = i - 1;
        while (j >= 0 && vendas[j] > key) {
            vendas[j + 1] = vendas[j];
            j--;
        }
        vendas[j + 1] = key;
    }
}

void printVendas(const std::vector<int>& vendas) {
    for (int venda : vendas) {
        std::cout << venda << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> vendas = {500, 600, 400, 700, 750, 800, 650, 550,
                               620, 680, 710, 690, 800, 640, 580,
                               660, 730, 750, 540, 710, 700, 690,
                               630, 670, 720, 680, 690, 650, 710,
                               660};

    int escolha;
    std::cout << "Escolha o método de ordenação:\n";
    std::cout << "1. Ordenar usando Selection Sort\n";
    std::cout << "2. Ordenar usando Insertion Sort\n";
    std::cout << "Digite sua escolha (1 ou 2): ";
    std::cin >> escolha;

    switch (escolha) {
        case 1:
            selectionSort(vendas);
            std::cout << "Vendas ordenadas usando Selection Sort:\n";
            break;
        case 2:
            insertionSort(vendas);
            std::cout << "Vendas ordenadas usando Insertion Sort:\n";
            break;
        default:
            std::cout << "Escolha inválida!\n";
            return 1;
    }

    printVendas(vendas);

    return 0;
}
