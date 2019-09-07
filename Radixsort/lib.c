#include <stdio.h>

void countingSort(int *A, int tam, int k)
{
    int aux[tam], cont[10];

    for(int i = 0; i < 10; i++)
        cont[i] = 0;

    for (int i = 0; i < tam; i++)
        cont[(A[i]/k)%10]++;

    for (int i = 1; i < 10; i++)
        cont[i] += cont[i-1];

    for (int i = tam-1; i >= 0; i--)
    {
        aux[cont[(A[i]/k)%10]-1] = A[i];
        cont[(A[i]/k)%10]--;
    }

    for (int i = 0; i < tam; i++)
        A[i] = aux[i];
}

void radixSort(int *A, int tam)
{
    int m = maiorValor(A, tam);
    for (int exp = 1; m/exp > 0; exp *= 10)
        countingSort(A, tam, exp);
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
        if(A[i] < menor)
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

void ordenarArquivo(FILE *arq)
{
    int cont = 0, tamanho = 0;
    char linha[100], *primeiraLinha;

    fgets(linha, sizeof linha, arq);
    primeiraLinha = strtok(linha, " ");

    tamanho = atoi(primeiraLinha);
    int vetor[tamanho];

    while(!feof(arq)) {
        fscanf(arq, "%d", &vetor[cont++]);
    }

    fclose(arq);

    int menor = menorValor(vetor, tamanho);
    arrayPositivo(vetor, tamanho, menor);

    radixSort(vetor, tamanho);

    voltarArrayOriginal(vetor, tamanho, menor);


    criarNovoArq(vetor, tamanho);


}

void criarNovoArq(int v[], int tam)
{
    FILE *arquivo = fopen("ArquivoOrdenado.txt", "w+");

    if (arquivo != NULL) {
        for(int i = 0; i < tam; i++) {
            fprintf(arquivo,"%d\n", v[i]);
        }
        fclose(arquivo);
        printf("Novo arquivo ordenado foi criado.\n\n");
    }
}
