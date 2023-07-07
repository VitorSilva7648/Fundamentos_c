#include <stdio.h>
#include <locale.h>

void main(){

//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 6, b = 3;
//def operações
//soma
    printf("O valor da soma de %d e %d é: %d!",a,b, a+b);
//subtração
    printf("\nO valor da subtração de %d e %d é: %d!",a,b, a-b);
//multiplicação
    printf("\nO valor da multiplicação de %d e %d é: %d!",a,b, a*b);
//divisão
    printf("\nO valor da divisão de %d e %d é: %d!",a,b, a/b);
//resto da divisão
    printf("\nO valor do resto da divisão de %d e %d é: %d!",a,b, a%b);
//valor absoluto
    printf("\nO valor absoluto de -5 é: %d!",abs(-5));
}
