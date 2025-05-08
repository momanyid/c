#include<stdio.h>
#include<stdlib.h>

int main() {
    int number = 34;
    int *ptr = &number;
    printf("Value at address number: %p\n", &number);
    printf("Value of number %d\n", number);
    printf("Value at address ptr: %d\n", *ptr);
    printf("Value of ptr: %p\n", ptr);
    
    *ptr =65;

    printf("After change\n");
    printf("Value at address number: %p\n", &number);
    printf("Value of number %d\n", number);
    printf("Value at address ptr: %d\n", *ptr);
    printf("Value of ptr: %p\n", ptr);

    //Arrays
    int numbers[5] = {10, 20, 30, 40, 50};
    int *ptrs = numbers;  // Same as &numbers[0]
    printf("\nPointer   value   Address\n");
    printf("*ptrs     = %d: %p\n", *ptrs, ptrs);
    printf("*(ptrs+1) = %d: %p\n", *(ptrs+1), ptrs+1); //Add 4 bytes to the ptr address(size of int)
    printf("*(ptrs+2) = %d: %p\n", *(ptrs+2), ptrs+2);
    printf("*(ptrs+3) = %d: %p\n", *(ptrs+3), ptrs+3);
    printf("*(ptrs+4) = %d: %p\n", *(ptrs+2), ptrs+4);
    
    //array notation
    printf("ptrs[0] = %d\n", ptrs[0]);
    printf("ptrs[1] = %d\n", ptrs[1]);
    
    int *nullptr = NULL;
    printf("Value of nullptr = %p\n", (void*)nullptr);
    //Null pointer cannot be referenced
    //it points to no memory address, Address 0 which is inaccessible
    if(nullptr != NULL) {
        *nullptr = 37;
    }
    printf("Value of nullptr = %d\n", nullptr);
}