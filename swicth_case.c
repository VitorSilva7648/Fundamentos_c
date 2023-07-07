#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 1;
    char b = 'x';
//escolha de caso manualmente
/*
    if(a==1){
        printf("Opção escolhida: 1");
    }else if(a==2){
        printf("Opção escolhida: 2");
    }else if(a==3){
        printf("Opção escolhida: 3");
    }else{
        printf("\Opção invalida!");
    }
*/
//escolha de caso com switch
    switch(a){
        case 1:
            printf("Opção escolhida: 1");
            break;
        case 2:
            printf("Opção escolhida: 2");
            break;
        case 3:
            printf("Opção escolhida: 3");
            break;
        default:
             printf("Opção inválida!");
            break;
    }
//switch com char
    switch(b){
        case 'x':
            printf("\nOpção escolhida: x");
            break;
        default:
            printf("\nOpção inválida!");
            break;
    }
}
