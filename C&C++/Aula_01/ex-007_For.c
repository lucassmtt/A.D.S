// Exercício 2
// Desenvolva um programa que leia um número N e que indique quantos 
// valores inteiros e positivos devem ser lidos a seguir. 
// Para cada número lido, mostre uma tabela contendo o valor lido e o fatorial desse valor.
// Obs: programe uma versão usando FOR e outra versão usando WHILE


#include <stdio.h>
#include <stdlib.h>


int main(){

    int qtd_de_numeros, i, numUsuario, j, fat, num;

    printf("Digite uma quantidade de números para calcular o seus fatoriais: ");
    scanf("%d", &qtd_de_numeros);

    for (i=0; i <= qtd_de_numeros; i++){

        printf("Digite um número para saber seu fatorial: ");
        scanf("%d", &numUsuario);

        num = numUsuario;

        for (fat = 1; numUsuario > 1; numUsuario--){

            fat *= numUsuario;

        }
        printf("O fatorial de %d é %d\n", num, fat);
    }
    return 0;
}