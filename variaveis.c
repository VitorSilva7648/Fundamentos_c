#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
    printf("Olá mundo! \n");
//definição de variaveis
    int a = 5;
    printf("O valor de a é %d!\n", a);
//alocando valores
    scanf("%d", &a);
    printf("O novo valor de a é %d!\n", a);
//valor de variaveis não inteiras
    float b = 7.9;
    printf("O valor de b é %f!\n", b);
//alocando valores
    scanf("%f", &b);
    printf("O novo valor de b é %f!\n", b);
//letras
    char c = 'A';
    printf("O valor de c é %c!", c);
//limpar buffer
    fflush(stdin);
    scanf("%c", &c);
    printf("O novo valor de c é %c!", c);
}
