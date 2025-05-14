#include<stdio.h>

void bubble_sort(int array[], int size) {
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
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

    bubble_sort(array, size);

    printf("Sorted array: ");
    printArray(array, size);
}