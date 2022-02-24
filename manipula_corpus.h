//BIBLIOTECA DE MANIPULAÇÃO DOS ARQUIVOS TXT CRIADOS
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