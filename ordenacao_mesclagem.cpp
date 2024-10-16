#include <iostream>

void merge(int arr[], int left, int middle, int right) {
    int leftSize = middle - left + 1;
    int rightSize = right - middle;
    int* leftArr = new int[leftSize];
    int* rightArr = new int[rightSize];

    for (int i = 0; i < leftSize; ++i) 
        leftArr[i] = arr[left + i];
    for (int i = 0; i < rightSize; ++i) 
        rightArr[i] = arr[middle + 1 + i];

    int i = 0, j = 0, k = left;
    while (i < leftSize && j < rightSize) {
        if (leftArr[i] <= rightArr[j]) 
            arr[k++] = leftArr[i++];
        else 
            arr[k++] = rightArr[j++];
    }
    
    while (i < leftSize) 
        arr[k++] = leftArr[i++];
    while (j < rightSize) 
        arr[k++] = rightArr[j++];

    delete[] leftArr;
    delete[] rightArr;
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int middle = left + (right - left) / 2;
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        merge(arr, left, middle, right);
    }
}

int main() {
    int arr[] = {5, 2, 9, 1, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    std::cout << "Original: ";
    for (int i = 0; i < size; ++i) 
        std::cout << arr[i] << " ";
    
    std::cout << "\nSorted: ";
    mergeSort(arr, 0, size - 1);
    for (int i = 0; i < size; ++i) 
        std::cout << arr[i] << " ";
    
    std::cout << std::endl;
    return 0;
}
