//arquivo temporário para testar funções
#include "manipula_corpus.h"

int main(void)
{
    char *small = "tripadvisor_hotel_reviews.csv";
    printf("linha 6");
    FILE* fp = fopen(small, "r");
    printf("linha 8");
    aglutina(fp, small);
}