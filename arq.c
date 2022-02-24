#include "arq.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//funcao1
int valida_nome(char *nome_do_arquivo){
    if(isblank(nome_do_arquivo)){

    }
    else{

    }
    return 1;
}

//funcao2
int existe_arquivo(char *nome_do_arquivo){
    if(access(nome_do_arquivo, F_OK) == 0 ){
        //arquivo existe
        return 1;
    }
    else {
        //arquivo não existe
        return 0;
    }   
}

//funcao3
int Arquivo_MostraConteudo(FILE *parq){
    int c;
    if(parq == NULL)
        return 0; //Erro: ponteiro não apontado.
    while(1) {
       c = fgetc(parq);
       if( feof(parq) ) {
          break ;
       }
       printf("%c", c);
    }
    return 1;
}

