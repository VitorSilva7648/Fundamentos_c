#include <stdio.h>
#include <locale.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//defini��o de variaveis
    int a = 10;
//conectivo l�gico 'e' (and) precisa satisfazer as duas condi��es
    if(a>5 && a>15){
        printf("O valor da vari�vel 'a' esta entre 5 e 15!");
    }
//conectivo l�gico 'ou' (or) precisa satisfazer apenas uma das condi��es
    if(a>5 || a>15){
        printf("A vari�vel 'a' � maior que 5 ou 15!");
    }
//conectivo l�gico 'ou' e 'e'
    if((a>5 && a>15) || a==20){
        printf("A vari�vel 'a' � maior que 5 e 15 ou � igual a 20!");
    }
}
