#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    char palavra[255];
//instru��o ao usuario
    printf("Digite uma palavra: ");
//limpar o buffer
    setbuf(stdin, 0);
//ler  string
    fgets(palavra, 255,stdin);
//limpar memoria n�o utilizada
    palavra[strlen(palavra)-1] = '\0';
//imprimir palavra
    printf("A palavra digitada foi: %s", palavra);
}

