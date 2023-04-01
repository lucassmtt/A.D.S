// Exercício de aquecimento 4
// Faça um programa que imprima na tela a soma dos valores pares de um intervalo
// definido pelo usuário. Faça uma versão com FOR, WHILE e WHILE-DO


#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Declarando as variáveis do primeiro e segundo número
    int valorUm, valorDois;

    //Definindo o primeiro valor
    printf("Defina um intervalo de números \nDigite o primeiro valor: ");
    scanf("%d", &valorUm);

    //Definindo o segundo valor
    printf("Digite o segundo valor: ");
    scanf("%d", &valorDois);

    //Vendo qual é o maior número
    if (valorUm > valorDois)
    {
        //Declarando um contador, soma e a variável que vai indicar quais números são pares
        int delta;
        int soma = 0;
        int cont = 1;

        //Calculando a variação
        delta = valorUm - valorDois;

        while (cont <= delta)
        {
            if (cont % 2 == 0)
            {
                printf("%d \n", cont);
                soma += cont;
            }
            cont++;
        }
        printf("A soma dos números pares entre o intervalo de %d e %d é %d", valorUm, valorDois, soma);
    }
    else
    {
        int delta;
        int soma = 0;
        int cont = 1;
        delta = valorDois - valorUm;

        while (cont <= delta)
        {
            if (cont % 2 == 0)
            {
                printf("%d \n", cont);
                soma += cont;
            }
            cont ++;
        }
        printf("A soma dos valores pares entre o intervalo de %d e %d é %d", valorDois, valorUm, soma);
    }
}