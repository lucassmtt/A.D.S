// Exercício 5
// Escreva um programa em C que solicita 10 números ao usuário, 
// através de um laço while, e ao final mostre os dois 
// maiores números digitados pelo usuário.


#include <stdlib.h>
#include <stdio.h>


int main(){

    int cont, num;
    int numeros[10];
    int maiores_numeros[2];
    
    cont = 0;

    while(cont < 10){

        printf("Digite um número: ");
        scanf("%d", &num);

        numeros[cont] = num;

        cont++;
    }
    
    cont = 0;
    
    int maior_num, segundo_maior_num;
    maior_num = 0;
    segundo_maior_num = 0;

    while (cont < 10){

        if (numeros[cont] > maior_num){

            if (maior_num > segundo_maior_num){

                segundo_maior_num = maior_num;
            }

            maior_num = numeros[cont];

        }

        if (maior_num >= segundo_maior_num && numeros[cont] != maior_num){

            if (numeros[cont] > segundo_maior_num){
                segundo_maior_num = numeros[cont];
            }
            segundo_maior_num = numeros[cont];

        }

        cont ++;

    }

    printf("O maior número foi %d e o segundo maior número foi %d", maior_num, segundo_maior_num);

    return 0;
}

