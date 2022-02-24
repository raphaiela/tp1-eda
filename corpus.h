//BIBLIOTECA DE MANIPULAÇÃO DOS ARQUIVOS TXT CRIADOS

// lembre-se de usar "extern+type+name" para declarar as variáveis a serem implementadas em corpus.c
// lembre-se aqui aqui apenas são declaradas as variáveis e as funções, sendo posteriormente usadas em corpus.c
// exemplo de declaração de variável: extern const double VarChar;
// exemplo de declaração de funções: double perimetro_circulo(raio);

#ifndef _CORPUS_H
#define _CORPUS_H

//importando bibliotecas auxiliares
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

//caso precise declarar uma variavel, declare aqui

//declaracao das funcoes
void cria_arquivos();
void aglutina(FILE *f, char *nome_do_arquivo);
<<<<<<< Updated upstream

#endif
=======
void cria_vet(FILE *f, char *nome_do_arquivo);

#endif
>>>>>>> Stashed changes
