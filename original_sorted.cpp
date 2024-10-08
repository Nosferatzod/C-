#include <iostream>
using namespace std;

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; ++j) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i]; // Troca arr[i] e arr[j]
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1]; // Troca arr[i + 1] e arr[high]
    arr[i + 1] = arr[high];
    arr[high] = temp;

    return i + 1;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high);
        quickSort(arr, low, pivotIndex - 1); // Ordena as partições antes
        quickSort(arr, pivotIndex + 1, high); // Ordena as partições depois
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5}; // Correção da inicialização do array
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Correção na impressão
    }
    cout << endl;

    quickSort(arr, 0, size - 1); // Correção na chamada do quickSort

    cout << "Sorted: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " "; // Correção na impressão
    }
    cout << endl;

    return 0;
}
