#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int i;
//Taboada do n�mero 5
    printf("Taboada do n�mero 5:\n");
    for(i=1;i<=10; i++){//= a+1;
        printf("5 x %d = %d\n", i, 5*i);
    }
//contagem crescente
    printf("Contagem crescente!\n");
    for(i=1;i<=10; i++){//= a+1;
        printf("%d\n", i);
    }
//contagem decrescente
    printf("Contagem decrescente!\n");
    for(i=10;i>0; i--){//= a+1;
        printf("%d\n", i);
    }
}
