#include <stdio.h>
#include <locale.h>

void main(){

//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int a = 6, b = 3;
//def opera��es
//soma
    printf("O valor da soma de %d e %d �: %d!",a,b, a+b);
//subtra��o
    printf("\nO valor da subtra��o de %d e %d �: %d!",a,b, a-b);
//multiplica��o
    printf("\nO valor da multiplica��o de %d e %d �: %d!",a,b, a*b);
//divis�o
    printf("\nO valor da divis�o de %d e %d �: %d!",a,b, a/b);
//resto da divis�o
    printf("\nO valor do resto da divis�o de %d e %d �: %d!",a,b, a%b);
//valor absoluto
    printf("\nO valor absoluto de -5 �: %d!",abs(-5));
}
