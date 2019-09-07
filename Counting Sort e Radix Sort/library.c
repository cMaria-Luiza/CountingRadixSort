#include <stdio.h>
#include "library.h"

void countingSort(int *A, int tam, int k)
{
    int aux[++k];
    for(int i = 0; i < k; i++) {
        aux[i] = 0;
    }

    for(int i = 0; i < tam; i++) {
        aux[A[i]] = aux[A[i]] + 1;
    }

    for(int i = 0, j = 0; j < k; j++) {
        for(int m = aux[j]; m > 0; m--) {
            A[i++] = j;
        }
    }
}

void radixSort(int *A, int tam)
{
    int m = maiorValor(A, tam);
    for(int exp = 1, m/exp > 0; exp *= 10) {
        countingSort(A, tam, exp);
    }
}

int maiorValor(int *A, int tam)
{
    int maior = A[0];
    for(int i = 1; i < tam; i++) {
        if(A[i] > maior)
            maior = A[i];
    }

    return maior;
}

int menorValor(int *A, int tam)
{
    int menor = A[0];
    for(int i = 1; i < tam; i++) {
        if(A[i] > menor)
            menor = A[i];
    }

    return menor;
}

void arrayPositivo(int *A, int tam, int menor)
{
    menor = -menor;
    for(int i = 0; i < tam; i++) {
        A[i] += menor;
    }
}

void voltarArrayOriginal(int *A, int tam, int menor)
{
    for(int i = 0; i < tam; i++)
        A[i] += menor;
}





