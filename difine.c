#include <stdio.h>
#include <locale.h>
#define TAM 10

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int i;
//contage crescente
    printf("Contagem crescente!\n");
    for(i=1;i<=TAM; i++){//= a+1;
        printf("%d\n", i);
    }
//contagem decrescente
    printf("Contage decrescente!\n");
    for(i=TAM;i>0; i--){//= a+1;
        printf("%d\n", i);
    }
}
