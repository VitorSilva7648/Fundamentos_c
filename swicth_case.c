#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int a = 1;
    char b = 'x';
//escolha de caso manualmente
/*
    if(a==1){
        printf("Op��o escolhida: 1");
    }else if(a==2){
        printf("Op��o escolhida: 2");
    }else if(a==3){
        printf("Op��o escolhida: 3");
    }else{
        printf("\Op��o invalida!");
    }
*/
//escolha de caso com switch
    switch(a){
        case 1:
            printf("Op��o escolhida: 1");
            break;
        case 2:
            printf("Op��o escolhida: 2");
            break;
        case 3:
            printf("Op��o escolhida: 3");
            break;
        default:
             printf("Op��o inv�lida!");
            break;
    }
//switch com char
    switch(b){
        case 'x':
            printf("\nOp��o escolhida: x");
            break;
        default:
            printf("\nOp��o inv�lida!");
            break;
    }
}
