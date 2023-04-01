// Exercício 2
// Desenvolva um programa que leia um número N e que indique quantos 
// valores inteiros e positivos devem ser lidos a seguir. 
// Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
// Obs: programe uma versão usando FOR e outra versão usando WHILE


#include <stdio.h>
#include <stdlib.h>


int main(){

    int qtd_de_numeros, cont, num, cont_nasted;

    printf("Digite uma quantidade de números");
    scanf("%d", &qtd_de_numeros);

    while (cont <= qtd_de_numeros){
        int fat = 1;

        printf("Digite um número para saber seu fatorial: ");
        scanf("%d", &num);

        cont_nasted = num;

        while (cont_nasted >= 1){

            fat *= cont_nasted;

            cont_nasted--;

        }
        printf("O fatorial de %d é %d\n", num, fat);

        cont ++;
    }

    return 0
}