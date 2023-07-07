#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

//incluir acento nas palavras
    setlocale(LC_ALL,"");
//criando matriz
    int matriz [2][2], i, j;
/*
//preenchendo a matriz
    matriz [0][0] = 2;
    matriz [0][1] = 5;
    matriz [1][0] = 8;
    matriz [1][1] = 1;
    printf("\n");
//imprimir matriz
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
//verificando os indices
//          printf("\ni = %d j = %d", i, j);
        }
    }
*/
//lendo valores
    printf("Digite 4 numeros para preencher a matriz!\n");
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
//verificando os indices
        scanf("%d", &matriz[i][j]);
        }
    }
//informando ao usuario o que será feito com os dados
    printf("A matriz com os numeros digitados e:\n");
//imprimindo os valores digitados pelo usuario
    for(i=0;i<2;i++){
        for(j=0;j<2;j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
}
}
