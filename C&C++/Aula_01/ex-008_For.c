// Exercício 3
// Escreva um algoritmo e um programa em C  que mostra todos os números ímpares de 1 até 100. 
// Escreva uma versão com FOR, WHILE e DO-WHILE.


#include <stdio.h>
#include <stdlib.h>


int main(){

    int i;

    for (i=0; i<100; i++){

        if (i % 2 == 1){
            printf("%d ", i);
        }

    }

}