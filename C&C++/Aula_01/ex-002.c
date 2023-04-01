// Exercício de aquecimento 2
// Faça um programa onde o usuário digita um valor, e imprima na tela todos os valores
// entre 0 e o valor digitado.


#include <stdio.h>
#include <stdlib.h>


int main(){
    int valorUsuario, cont;

    printf("Digite um valor: ");
    scanf("%d", &valorUsuario);

    for (valorUsuario, cont=0; valorUsuario > cont; cont++){
        printf("%d \n", cont);
    }
}