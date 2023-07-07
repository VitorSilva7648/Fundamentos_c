#include <stdio.h>
#include <locale.h>
#include <time.h>
#define TAM 3

void main(){
//incluir acento nas palavras
    setlocale(LC_ALL,"");
//definição de vetores
    int vet[TAM], i;
//valores alocados no vetor manualmente
/*
    vet[0] = 1;
    vet[1] = 18;
    vet[2] = 5;
    printf("Os valores presenter no vetor são:\n");
    printf("Posição 0: %d\n", vet[0]);
    printf("Posição 1: %d\n", vet[1]);
    printf("Posição 2: %d\n", vet[2]);
//com laço
    printf("\n");
    for(i=0;i<TAM;i++){
        printf("Posição %d: %d\n",i, vet[i]);
    }
*/
//valores alocados no vetor a partir do usuario
    printf("Digite 3 valores para o vetor que será exibido na tela!\n");
    for(i=0;i<TAM;i++){
        scanf("%d", &vet[i]);
    }
    printf("Os valores do vetor são:\n");
    for(i=0;i<TAM;i++){
        printf("Posição %d: %d\n",i, vet[i]);
    }
}
