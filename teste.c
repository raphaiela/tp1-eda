//arquivo temporário para testar funções
#include "corpus.h"

int main(void)
{

    char *arquivo = "tripadvisor_hotel_reviews.csv";
    FILE* fp = fopen(arquivo, "r");
    // aglutina(fp, arquivo);

    char *arquivo2 = "Notas1.txt";
    FILE* fp2 = fopen(arquivo2, "r");
    cria_vet(fp,arquivo);

    return 0;

}