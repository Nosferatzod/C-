#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Digite o número de elementos no array: ";
    cin >> n;

    if (n <= 0) {
        cout << "O número de elementos deve ser um inteiro positivo." << endl;
        return 1;
    }

    int* array = new int[n];
    cout << "Digite os " << n << " elementos do array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> array[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (array[j] > array[j + 1]) {
                // Troca os elementos
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }

    cout << "Array ordenado:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << array[i] << " ";
    }
    
    return 0;
}
