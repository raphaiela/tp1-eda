//arquivo temporário para testar funções
#include "corpus.h"

int main(void)
{

    /*
    char *arquivo = "dataset.csv";S
    FILE* fp = fopen(arquivo, "r");
    aglutina(fp, arquivo);
    */

    char *arquivo2 = "Nota5.txt";
    FILE* fp2 = fopen(arquivo2, "r");
    cria_vet(fp2,arquivo2);

    return 0;

}