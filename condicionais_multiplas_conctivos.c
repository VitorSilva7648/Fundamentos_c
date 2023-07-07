#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de variaveis
    int a = 10;
//conectivo lógico 'e' (and) precisa satisfazer as duas condições
    if(a>5 && a>15){
        printf("O valor da variável 'a' esta entre 5 e 15!");
    }
//conectivo lógico 'ou' (or) precisa satisfazer apenas uma das condições
    if(a>5 || a>15){
        printf("A variável 'a' é maior que 5 ou 15!");
    }
//conectivo lógico 'ou' e 'e'
    if((a>5 && a>15) || a==20){
        printf("A variável 'a' é maior que 5 e 15 ou é igual a 20!");
    }
}
