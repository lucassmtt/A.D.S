// Exercício 4
// Achar o maior, menor, média e organizar números ou sequências 
// são os algoritmos mais importantes e estudados em Computação. 
// Em C não poderia ser diferente.
// Em nosso curso, obviamente, também não será diferente.

// Escreva um programa em C que solicita 10 números ao usuário, 
// através de um laço For, e ao final mostre qual destes números é o maior.


#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, num;
    int vetor[10];

    for (i = 0; i < 10; i++){

        printf("Digite um número: ");
        scanf("%d", &num);

        vetor[i] = num;
    }

    int maior_num = 0;

    for (i = 0; i < 10; i++){

        if (vetor[i] > maior_num){
            maior_num = vetor[i];
        }

    }

    printf("O maior número foi %d", maior_num);

    return 0;
}