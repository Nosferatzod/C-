#include <iostream>

void selectionSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        int minIndex = i; // Corrigido para 'i' ao invés de '1'
        for (int j = i + 1; j < size; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // Corrigido o separador
    }
    std::cout << std::endl;

    selectionSort(arr, size);

    std::cout << "Array ordenado usando Selection Sort: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " "; // Corrigido o separador
    }
    std::cout << std::endl;

    return 0;
}
