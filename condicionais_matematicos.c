#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 2,b = 3,c = 9;
//maior
    if(a>5){
        printf("%d é maior que 5!", a);
    }
//menor
    if(a<5){
        printf("%d é menor que 5!", a);
    }
//maior ou igual
    if(c>=b){
        printf("\n%d é maior que %d!", c,b);
    }
//diferente
    if(b!=10){
        printf("\n%d é diferente de %d!", b,10);
    }
}
