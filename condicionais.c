#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 4, b=3;
//condicional simples
    if(a==4){
        printf("O valor de a é: %d",a);
    }
//par ou impar
    if(a%2==1){
        printf("\nA variável a é impar");
    }else{
        printf("\nA variável a é par");
    }
//condicional composta
    if(b==1){
        printf("O valor de b é: %d",b);
    }else if(b==2){
        printf("\nO valor de b é: %d",b);
    }else{
        printf("\nO valor de b não é 1 nem 2!");
    }
}
