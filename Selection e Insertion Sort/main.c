#include <stdio.h>
#include <stdlib.h>
#include "lib.h"

/* O programa vai abrir abrir dois arquivos txt.
*   O primeiro vai ser ordenado atraves do selection sort
*   e sera criado outro arquivo txt com os numeros ordenados.
*   O segundo vai ser ordenado atraves do insertion sort e
*   e sera criado outro arquivi txt com os numeros ordenados.
*/

int main()
{
    FILE *arquivo1, *arquivo2;

    arquivo1 = fopen("instancias-num/num.1000.1.in", "r");
    if(tentarAbrir(arquivo1, 1) == 0) {
        processarArqSelection(arquivo1);
        printf("\n>>>Criado novo arquivo 'num.1000.1.in' 1 ordenado. O arquivo esta na pasta do projeto.");
    }

    arquivo2 = fopen("instancias-num/num.10000.2.in", "r");
    if(tentarAbrir(arquivo2, 2) == 0) {
        processarArqInsertion(arquivo2);
        printf("\n>>>Criado novo arquivo 'num.10000.2.in' 2 ordenado. O arquivo esta na pasta do projeto.");
    }

    return 0;
}
