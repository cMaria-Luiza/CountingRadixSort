#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

void selectionSort(int *A, int tam);
void insertionSort(int *A, int tam);
int tentarAbrir(FILE *a, int nArq);
int processarArqInsertion(FILE *a);
int processarArqSelection(FILE *a);
void criarArquivo(FILE *a, int tam, int v[]);



#endif // LIB_H_INCLUDED
