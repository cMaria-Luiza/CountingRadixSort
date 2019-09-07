#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

void countingSort(int *A, int tam, int k);
void radixSort(int *A, int tam);
int menorValor(int *A, int tam);
int maiorValor(int *A, int tam);
void arrayPositivo(int *A, int tam, int menor);
void voltarArrayOriginal(int *A, int tam, int menor);
void ordenarArquivo(FILE *arq);

#endif // LIB_H_INCLUDED
