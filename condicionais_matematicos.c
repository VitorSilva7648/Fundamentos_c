#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int a = 2,b = 3,c = 9;
//maior
    if(a>5){
        printf("%d � maior que 5!", a);
    }
//menor
    if(a<5){
        printf("%d � menor que 5!", a);
    }
//maior ou igual
    if(c>=b){
        printf("\n%d � maior que %d!", c,b);
    }
//diferente
    if(b!=10){
        printf("\n%d � diferente de %d!", b,10);
    }
}
