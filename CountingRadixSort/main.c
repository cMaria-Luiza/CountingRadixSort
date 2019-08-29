#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int tam = 11;
    int vetor[MAX] = {6, 0, 2, 0, 1, 3, 4, 6, 1, 3, 2};
    int maior = maiorValor(vetor, tam);
    printf("%d", maior);
    countingSort(vetor, tam, maior);

    printf("\n");
    for(int i = 0; i < tam; i++) {
        printf("%d \t", vetor[i]);
    }


    return 0;
}
