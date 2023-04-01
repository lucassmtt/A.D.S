// Exercício de aquecimento 5
// Escreva um programa que pergunta um número ao usuário, e mostra sua tabuada
// completa (de 1 até 10).


#include <stdio.h>
#include <stdlib.h>


int main(){
    int numUsuario, cont;

    printf("Digite um número para saber sua tabuada");
    scanf("%d", &numUsuario);

    for (numUsuario, cont=0; cont < 10; cont++){
        int soma = 0;
        soma = numUsuario * cont;
        printf("%d ", soma);
    }
}