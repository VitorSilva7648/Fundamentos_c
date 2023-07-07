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
    do{
        a++;//= a+1;
        printf("%d\n", a);
        }while(a<10);
//contagem decrescente
    printf("Contagem decrescente!");
    do{
        b--;//= b-1;
        printf("%d\n", b);
    }while(b>1);
}
