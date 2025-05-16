#include<stdio.h>
#include<stdlib.h>



int main() {
    int number[5] = {12.0, 23, 2, 12, 3};
    printf(" Integer array\n");
    for (int i=0; i<5; i++) {
        printf("Int[%d]: %d \t %p\n", i+1, number[i], &number[i] );
    }

    char david[] = {'D', 'a', 'v', 'i', 'd'};
    printf("\n Character array\n");
    for (int i=0; i<5; i++) {
        printf("Char[%d]: %c \t %p\n", i+1, david[i], &david[i]);
    }

    double dnumber[] = {22.345, 34, 56, 34, 34};
    printf("\n Double array\n");
    for(int i=0; i<5; i++) {
        printf("Double[%d]: %lf \t %p \n", i+1, dnumber[i], &dnumber[i]);
    }

    short snumber[5] = {23, 12, 34, 56, 34};
    printf("\n Short array \n");
    for(int i=0; i<sizeof(snumber)/sizeof(snumber[0]) ; i++) {
        printf("Short[%d]: %hd \t %p \n", i+1, snumber[i], &snumber[i]);
    }
    printf("%d  %d\n", sizeof(snumber), sizeof(snumber[0]));

    long long llnumber[5] = {2, 3, 4, 6, 0};
    printf("\n Long long array \n");
    for (int i=0; i<sizeof(llnumber)/sizeof(llnumber[0]); i++) {
        printf("Long long[%d]: %lld \t %p \n", i+1, llnumber[i], &llnumber[i]);
    }

    long double ldnumber[5] = {2, 3, 4, 6, 0};
    printf("\n Long double array \n");
    for (int i=0; i<sizeof(ldnumber)/sizeof(ldnumber[0]); i++) {
        printf("Long double[%d]: %Lf \t %p \n", i+1, ldnumber[i], &ldnumber[i]);
    }


}
