#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int opcao;
//conferir a opc�o
    while(opcao<1 || opcao>3){
       //obtendo dados do usuario
    printf("Escolha uma op��o:\n");
    printf("Op��o 1\n");
    printf("Op��o 2\n");
    printf("Op��o 3\n");
    printf("Digite a op��o escolhida: ");
    scanf("%d", &opcao);
//Resultado da escolha
    switch(opcao){
        case 1:
            printf("A op��o escolhida foi a 1!");
        break;
        case 2:
            printf("A op��o escolhida foi a 2!");
        break;
        case 3:
            printf("A op��o escolhida foi a 3!");
        break;
        default:
            printf("A op��o escolhida � invalida!");
        break;
    }
}
}
