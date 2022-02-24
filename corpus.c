#include "corpus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//funcao1
void cria_arquivos(){
    FILE *fp = NULL;
    fp = fopen("Nota1.txt" ,"w");
    fp = fopen("Nota2.txt" ,"w");
    fp = fopen("Nota3.txt" ,"w"); 
    fp = fopen("Nota4.txt" ,"w"); 
    fp = fopen("Nota5.txt" ,"w");
}

//funcao2
void aglutina(FILE *f, char *nome_do_arquivo){
    char buffer[100000];
        int row = 0;
        int column = 0;
    while (fgets(buffer, 100000, f)) {
    
            column = 0;
            row++;
            if (row == 1)
                continue;
    
            char* value = strtok(buffer, "\n");
  
            while (value) {
        
                // Column 1
                if (column == 0) {
                    printf("review :");
                }
  
                // Column 2
                if (column == 1) {
                    printf("\nnota :");
                }
  
                printf("%s", value);
                printf("nota=");
                printf(value[strlen(value)-1]);
                value = strtok(NULL, "\n");
                column++;
            }
  
            printf("\n");
        }
}


void cria_vet(FILE *f, char *nome_do_arquivo)
{
 
    char name;
    char *p1, *p2;
    int qtd =14966022;

    f = fopen(nome_do_arquivo, "r");
    
    if (f == NULL)
    {
        printf("Erro ao tentar abrir o arquivo!");
        system("pause");
        exit(1);// saindo do programa
    }
    printf("Lendo e exibindo dados do arquivo \n\n");


    do // faça
    {   
        //faz a leitura do caracter no arquivo apontado por f
        name = fgetc(f);
        //exibindo o caracterer na tela  
        printf("%c",name);

    }while(name!=EOF); // enquanto não for final de arquivo
    fclose(f); // fechando o arquivo
    system("pause"); //somente para windows

}
