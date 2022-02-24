//ta escrito alguma coisa?
//o arquivo existe?
//BIBLIOTECA DE MANIPULAÇÃO DO ARQUIVO CSV
#ifndef _ARQ_H
#define _ARQ_H

//importando bibliotecas auxiliares
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//caso precise declarar uma variavel, declare aqui

//declaracao das funcoes
int valida_nome(char *nome_do_arquivo);
int existe_arquivo(char *nome_do_arquivo);
int mostrar_conteudo(FILE *arquivo);

#endif