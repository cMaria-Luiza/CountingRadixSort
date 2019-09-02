#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int tA = 12, tB = 15;
    int A[] = {15, 4, -3, 5, -14, 0, 8, 12, 17, 2, 22, 47},
    B[] = {4, 8, 1, 15, 32, 20, 5, 12, 42, 44, 9, 10, -5, 11, 33};


    // TESTANDO O SELECTION SORT
    printf("\n>>>Vetor original\n");
    print(A, tA);
    selectionSort(A, tA);
    printf("\n>>>Vetor apos o selection sort\n");
    print(A, tA);


    // TESTANDO O INSERTION SORT
    printf("\n>>>Vetor original\n");
    print(B, tB);
    insertionSort(B, tB);
    printf("\n>>>Vetor apos o insertion sort\n");
    print(B, tB);



    return 0;
}
