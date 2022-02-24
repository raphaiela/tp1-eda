#include "arq.h"
#include "corpus.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{

   char* name = "Nota2.txt";
   FILE *fp;
   fp = fopen(name, "r");
    
    cria_vet(fp,name);

   return 0;
}