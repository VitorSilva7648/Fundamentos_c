#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int opcao;
//conferir a opcão
    while(opcao<1 || opcao>3){
       //obtendo dados do usuario
    printf("Escolha uma opção:\n");
    printf("Opção 1\n");
    printf("Opção 2\n");
    printf("Opção 3\n");
    printf("Digite a opção escolhida: ");
    scanf("%d", &opcao);
//Resultado da escolha
    switch(opcao){
        case 1:
            printf("A opção escolhida foi a 1!");
        break;
        case 2:
            printf("A opção escolhida foi a 2!");
        break;
        case 3:
            printf("A opção escolhida foi a 3!");
        break;
        default:
            printf("A opção escolhida é invalida!");
        break;
    }
}
}
