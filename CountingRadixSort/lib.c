#include "lib.h"

void countingSort(int *A, int tam, int k)
{
    int aux[++k];
    for(int i = 0; i < k; i++) {
        aux[i] = 0; // zera todas as posicoes
    }

    for(int i = 0; i < tam; i++) {
        aux[A[i]] = aux[A[i]] + 1; // incrementa toda vez que o valor aparecer no array principal
    }

    for(int i = 0, j = 0; j < k; j++) {
        for(int m = aux[j]; m > 0; m--) {
            A[i++] = j;
        }
    }
}

int maiorValor(int *A, int tam)
{
    int maior = 0;
    for(int i = 0; i < tam; i++) {
        if(A[i] > maior)
            maior = A[i];
    }

    return maior;
}
