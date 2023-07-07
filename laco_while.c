#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 0, b = 11;
//contagem crescente
    printf("Contagem crescente!\n");
    while(a<10){
        a++;//= a+1;
        printf("%d\n", a);
    }
//contagem decrescente
    printf("Contagem decrescente!\n");
    while(b>1){
        b--;//= b-1;
        printf("%d\n", b);
    }
}
