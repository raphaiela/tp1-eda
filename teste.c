//arquivo temporário para testar funções
#include "corpus.h"

int main(void)
{
    char *arquivo = "tripadvisor_hotel_reviews.csv";
    FILE* fp = fopen(arquivo, "r");
    aglutina(fp, arquivo);
}