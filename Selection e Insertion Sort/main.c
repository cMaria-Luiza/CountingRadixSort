#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include "lib.h"

int main()
{
    FILE *arquivo;
    int cont = 0, tamanho = 0;
    char i[100], *primeiraLinha;

    arquivo = fopen("instancias-num/num.10000.4.in", "r");
    if(arquivo == NULL)
    {
        printf(">>>Nao foi possivel abrir o arquivo.\n");
        return 0;
    }

    fgets(i, sizeof i, arquivo);
    primeiraLinha = strtok(i, " ");
    tamanho = atoi(primeiraLinha);
    int vetor[tamanho];
    while(!feof(arquivo)) {
        fscanf(arquivo, "%d", &vetor[cont++]);
        //printf("%d\n", vetor[cont++]);
    }

    fclose(arquivo);
    //printf("\n tamanho do arquivo: %d", tamanho);

    selectionSort(vetor, tamanho);
    print(vetor, tamanho);


    return 0;
}


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

/* retorna o indice do menor valor do array a partir da posicao
    passada nos parametros(start)*/
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
    for(int i = 0; i < tam-1; i++) {
        printf("%d\n", A[i]);
    }
    //printf("%d.\n", A[tam-1]);
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
