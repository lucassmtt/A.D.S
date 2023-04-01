// Exercício de aquecimento 4
// Faça um programa que imprima na tela a soma dos valores pares de um intervalo
// definido pelo usuário. Faça uma versão com FOR, WHILE e WHILE-DO


#include <stdio.h>
#include <stdlib.h>


int main(){
    //Declarando as variáveis do primeiro e segundo número
    int valorUm, valorDois;

    //Definindo o primeiro valor
    printf("Defina um intervalo de números \n Digite o primeiro valor: ");
    scanf("%d", &valorUm);

    //Definindo o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d", &valorDois);

    //Vendo qual é o maior número
    if(valorUm > valorDois){
        //Delarando um contador, soma e a variável que vai indicar quais números são pares
        int delta, cont, soma;

        //Calculando a variação
        delta = valorUm - valorDois;

        for(delta, soma=0, cont=0; cont < delta; cont++){
            //Verificando se o número é par
            if (cont % 2 == 0){
                soma += cont;
                printf("%d \n", cont);
            }
        }
        printf("O total somando todos os números pares no intervalo de %d e %d foi %d.", valorUm, valorDois, soma);
    }
    else{
        int delta, cont, soma;
        delta = valorDois - valorUm;

        for (delta, soma=0, cont=0; cont < delta; cont++){
            if (cont % 2 == 0){
                soma += cont;
                printf("%d \n", cont);
            }
        }
        printf("O total somando todos os números pares no intervalo de %d e %d foi %d.", valorUm, valorDois, soma);
    }
}