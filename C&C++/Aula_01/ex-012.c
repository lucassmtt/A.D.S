// Exercício 7
// Escreva um programa que lê o tamanho do lado de um quadrado e 
// imprima um quadrado daquele tamanho com asteriscos e espaços em branco. 
// Seu programa deve funcionar para quadrados com lados de todos os tamanhos entre 1 e 20.
// Para lado igual a 5:


#include <stdio.h>
#include <stdlib.h>


int main(){
    
    int coluna, linha, num, i;
    printf("Digite um número para criar um quadrado: ");
    scanf("%d", &num);

    for (coluna = 0; coluna < num; coluna++){
        
        for (linha = 0; linha <num; linha++){            

            
            if (linha == 0 | linha == num - 1){
                printf("*");
                if (linha >= 1){
                    for (i=0; i < num; i++){
                        printf(" ");
                    }    
                }
   
            }


        }
        printf("\n");
    }
}