#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//rand diferente
    srand((unsigned)time(NULL));
//defini��o de variaveis com o resto da div por 3
    int aleatorio = rand() %3;
//defini��o de variaveis com o resto da div por 5
    int aleatorio1 = (rand() %5)+1;
        printf("%d", aleatorio1);
}
