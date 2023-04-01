// Exercício 4
// Achar o maior, menor, média e organizar números ou sequências 
// são os algoritmos mais importantes e estudados em Computação. 
// Em C não poderia ser diferente.
// Em nosso curso, obviamente, também não será diferente.

// Escreva um programa em C que solicita 10 números ao usuário, 
// através de um laço while, e ao final mostre qual destes números é o maior.


#include <stdio.h>
#include <stdlib.h>


int main(){
    int n;
    int vetor[10];
    int cont = 0;

    while (cont < 10){

        printf("Digite um número: ");
        scanf("%d", &n);

        vetor[cont] = n;

        cont ++;
    }

    cont = 0;
    int maior_num = 0;

    while (cont < 10){

        if (vetor[cont] > maior_num){
            maior_num = vetor[cont];
        } 

        cont ++;
    }
    printf("O maior número foi o %d\n", maior_num);

}