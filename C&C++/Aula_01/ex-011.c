// Escreva um programa que lê o tamanho do lado de um quadrado e 
// imprima um quadrado daquele tamanho com asteriscos. 
// Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.


#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int lado_quadrado, i, j;

    printf("Digite um valor entre 1 e 20: ");
    scanf("%d", &lado_quadrado);
    

    for (i=0; i<lado_quadrado; i++){
        // printf("*\n");
        for (j = 0; j<lado_quadrado; j++){
            printf("*");
        }
        printf("\n");
    }
}