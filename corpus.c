//BIBLIOTECA DE MANIPULAÇÃO DOS ARQUIVOS TXT CRIADOS
#include "corpus.h"
#include <stdio.h>
#include <string.h>

void cria_arquivos(){
    FILE *fp = NULL;
    fp = fopen("Nota1.txt" ,"w");
    fp = fopen("Nota2.txt" ,"w");
    fp = fopen("Nota3.txt" ,"w");
    fp = fopen("Nota4.txt" ,"w");
    fp = fopen("Nota5.txt" ,"w");
}

void aglutina(FILE *f, char *nome_do_arquivo){
    cria_arquivos();
    char buffer[100000];
        int row = 0;
    while (fgets(buffer, 100000, f)) {
            row++;
            if (row == 1)
                continue;
    
            char* value = strtok(buffer, "\n");
  
            while (value) {
        
                //printf("review :");
                //printf("%s", value); 
                int nota = (int) (value[strlen(value)-1])-48;
                printf("\nnota=%d", nota);
                if(nota==1){
                    FILE *file = fopen("Nota1.txt", "r+");

                    int results = fputs(value, file);
                    if (results == EOF) {
                        printf("\nerro ao abrir nota1");
                    }
                    fclose(file);
                }
                else if (nota==2)
                {
                    FILE *file = fopen("Nota2.txt", "r+");

                    int results = fputs(value, file);
                    if (results == EOF) {
                        printf("\nerro ao abrir nota2");
                    }
                    fclose(file);
                }
                else if (nota==3)
                {
                    FILE *file = fopen("Nota3.txt", "r+");

                    int results = fputs(value, file);
                    if (results == EOF) {
                        printf("\nerro ao abrir nota3");
                    }
                    fclose(file);
                }
                else if (nota==4)
                {
                    FILE *file = fopen("Nota4.txt", "r+");

                    int results = fputs(value, file);
                    if (results == EOF) {
                        printf("\nerro ao abrir nota4");
                    }
                    fclose(file);
                }
                else if (nota==5)
                {
                    FILE *file = fopen("Nota5.txt", "r+");

                    int results = fputs(value, file);
                    if (results == EOF) {
                        printf("\nerro ao abrir nota5");
                    }
                    fclose(file);
                }
                value = strtok(NULL, "\n");
            }
  
            printf("\n");
        }
}