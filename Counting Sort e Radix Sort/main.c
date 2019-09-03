#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arquivo;

    arquivo = fopen("instancias-num/num.1000.1.in", "r");

    if(arquivo == NULL) {
        printf(">>> Nao foi possivel abrir o arquivo");
        return -1;
    }



    fclose(arquivo);

    return 0;
}
