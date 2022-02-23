//BIBLIOTECA DE MANIPULAÇÃO DOS ARQUIVOS TXT CRIADOS
#include <stdio.h>

void cria_arquivos(){
    FILE *fp = NULL;
    fp = fopen("Nota1.txt" ,"w");
    fp = fopen("Nota2.txt" ,"w");
    fp = fopen("Nota3.txt" ,"w");
    fp = fopen("Nota4.txt" ,"w");
    fp = fopen("Nota5.txt" ,"w");
}
void aglutina(FILE *f, char *nome_do_arquivo){
    FILE *f = fopen(nome_do_arquivo, "r");
}