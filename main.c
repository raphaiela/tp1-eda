#include <stdio.h>
#include <string.h>
#include "arq.h"

int main(void)
{
    while (1){ //loop enquanto não conseguir abrir o arquivo
        char dataset[100];

        printf("Por favor, insira o nome do arquivo: ");
        scanf("%s", dataset);

        if(valida_nome){}
        else{
            printf("Nome invalido. ");
            continue;
        }

        if(existe_arquivo(dataset)){
            //tenta ler o arquivo, se abrir, quebra o loop,
            //senão...
        }
        else{
            printf("Arquivo nao encontrado. ");
        }
    }
    
}