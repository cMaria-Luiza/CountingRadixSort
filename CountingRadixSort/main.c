#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

int main()
{
    int tam = 11;
    int vetor[MAX] = {5, 6, 10, 15, 1, 6, 0, 5, 2, 1, 0};
    countingSort(vetor, tam);

    printf("\n");
    for(int i = 0; i < tam; i++) {
        printf("%d \t", vetor[i]);
    }


    return 0;
}
