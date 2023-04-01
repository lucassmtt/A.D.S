// Exercício de aquecimento 3
// Faça um programa onde o usuário digita dois valores, e imprima na tela todos os
// valores no intervalo entre os valores digitados.

#include <stdio.h>
#include <stdlib.h>


int main(){
    //Declarando as variáveis do primeiro e segundo número
    int primeiro_Valor, segundoValor;
    
    //Perguntando e definindo o primeiro valor
    printf("Digite um valor: ");
    scanf("%d", &primeiro_Valor);

    //Perguntando e definindo o segundo valor
    printf("Digite um segundo valor: ");
    scanf("%d", &segundoValor);

    if (primeiro_Valor < segundoValor){
        for (primeiro_Valor, segundoValor; segundoValor >= primeiro_Valor; primeiro_Valor++){
            printf("%d \n", primeiro_Valor);
        }
    }
    else{
        for (primeiro_Valor, segundoValor; primeiro_Valor >= segundoValor; primeiro_Valor--){
            printf("%d \n", primeiro_Valor);
        }
    }
}