#include <stdio.h>
#include "lib.h"

void selectionSort(int *A, int tam)
{
    int m, aux;
    for(int i = 0; i < tam; i++) {
        m = menorIndex(A, tam, i);
        aux = A[i];
        A[i] = A[m];
        A[m] = aux;
    }
}

int menorIndex(int A[], int tam, int s)
{
    int index = s;
    for(int i = ++s; i < tam; i++) {
        if(A[i] < A[index])
            index = i;
    }
    return index;
}


void print(int A[], int tam)
{
    printf("\t>>> ");
    for(int i = 0; i < tam-1; i++)
        printf("%d, ", A[i]);
    printf("%d.\n", A[tam-1]);
}

void insertionSort(int *A, int tam)
{
    int elemento, j;
    for(int i = 1; i < tam; i++) {
        elemento = A[i];
        j = i;
        while(j > 0 && A[j-1] > elemento) {
            A[j] = A[j-1];
            j -= 1;
        }
        A[j] = elemento;
    }
}
