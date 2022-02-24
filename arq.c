//ta escrito alguma coisa?
//o arquivo existe?
//BIBLIOTECA DE MANIPULAÇÃO DO ARQUIVO CSV

#include "arq.h"
#include <string.h>
#include <unistd.h>

int valida_nome(char *nome_do_arquivo){
    if(isblank(nome_do_arquivo)){

    }
    else{

    }
}

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