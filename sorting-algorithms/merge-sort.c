#include <stdio.h>

//function to merge two subarrays
void merge(int arr[], int left, int mid, int right) {
    int i, j, k;
    // calculate sizes of the two subarrays
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // create temporary arrays
    int L[n1], R[n2];

    // copy data to temp arrays L[] and R[]
    for (i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // merge the temp arrays back into arr[left..right]
    i = 0;  // initial index of first subarray
    j = 0;  // initial index of second subarray
    k = left;  // initial index of merged subarray

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // copy the remaining elements of L[], if any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // copy the remaining elements of R[], if any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// recursive function to divide the array
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        // find the middle point
        int mid = left + (right - left) / 2;

        // sort first and second halves
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);

        // merge the sorted halves
        merge(arr, left, mid, right);
    }
}

// print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


int main() {
    int arr[] = {12, 11, 13, 5, 6, 7, 23, 12, 3, 5, 8, 54, 3,21};
    int arr_size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: \t");
    printArray(arr, arr_size);

    mergeSort(arr, 0, arr_size - 1);

    printf("\n");
    printf("Sorted array: \t\t");
    printArray(arr, arr_size);
    return 0;
}
