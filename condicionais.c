#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int a = 4, b=3;
//condicional simples
    if(a==4){
        printf("O valor de a �: %d",a);
    }
//par ou impar
    if(a%2==1){
        printf("\nA vari�vel a � impar");
    }else{
        printf("\nA vari�vel a � par");
    }
//condicional composta
    if(b==1){
        printf("O valor de b �: %d",b);
    }else if(b==2){
        printf("\nO valor de b �: %d",b);
    }else{
        printf("\nO valor de b n�o � 1 nem 2!");
    }
}
