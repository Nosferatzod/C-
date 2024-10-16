#include <iostream>
#include <vector>

void bubbleSort(std::vector<int>& colors) {
    int n = colors.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (colors[j] > colors[j + 1]) {
                std::swap(colors[j], colors[j + 1]);
            }
        }
    }
}

void selectionSort(std::vector<int>& colors) {
    int n = colors.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (colors[j] < colors[minIndex]) {
                minIndex = j;
            }
        }
        std::swap(colors[i], colors[minIndex]);
    }
}

void printColors(const std::vector<int>& colors) {
    for (int color : colors) {
        std::cout << color << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> colors = {3, 1, 4, 2, 5, 6, 2, 1, 3, 4, 6, 5, 3, 4, 2, 1, 5, 6, 2, 4, 3, 1, 5, 6, 4, 2, 1, 3, 5, 2};

    int choice;
    std::cout << "Escolha um método de ordenação:\n";
    std::cout << "1. Ordenar usando Bubble Sort\n";
    std::cout << "2. Ordenar usando Selection Sort\n";
    std::cout << "Escolha (1 ou 2): ";
    std::cin >> choice;

    if (choice == 1) {
        bubbleSort(colors);
        std::cout << "Cores ordenadas usando Bubble Sort: ";
    } else if (choice == 2) {
        selectionSort(colors);
        std::cout << "Cores ordenadas usando Selection Sort: ";
    } else {
        std::cout << "Opção inválida!\n";
        return 1;
    }

    printColors(colors);
    return 0;
}
