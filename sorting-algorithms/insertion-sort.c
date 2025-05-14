#include<stdio.h>

void insertion_sort(int array[], int size) {
    int i, key, j;
    for (i = 1; i < size; i++) {
        key = array[i];
        j = i - 1;
    
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int size) {
    for(int i=0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int array[] = {2, 5, 6, 23, 7, 2, 99, 3, 0};
    int size = sizeof(array)/sizeof(array[0]);

    printf("Original array: ");
    printArray(array, size);

    insertion_sort(array, size);

    printf("Sorted array: ");
    printArray(array, size);
}