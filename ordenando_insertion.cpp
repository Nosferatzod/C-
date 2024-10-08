#include <iostream>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; ++i) {
        int key = arr[i];  // Corrigido para arr[i]
        int j = i - 1;     // Corrigido para i - 1
        // Encontra a posição correta para inserir o elemento atual
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;  // Corrigido para j = j - 1
        }
        arr[j + 1] = key;  // Corrigido para arr[j + 1] = key;
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};  // Corrigido para {}
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Array original: ";
    for (int i = 0; i < size; ++i) {  // Corrigido para i
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    insertionSort(arr, size);

    std::cout << "Array ordenado usando Insertion Sort: ";  // Corrigido para << 
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";  // Corrigido para incluir " << " e um espaço
    }
    std::cout << std::endl;

    return 0;
}
