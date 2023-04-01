// Exercício 1

// Desenvolva um programa que leia um valor N inteiro positivo, calcule e mostre o valor de E,
// conforme a fórmula abaixo:
// E = 1 + 1/1! + 1/2! + 1/3! + ... + 1/N!


#include <stdio.h>
#include <stdlib.h>


int main(){
    int i, n;
    float f = 1.0, e = 1.0;

    printf("Digite um número: ");
    scanf("%d", &n);

    for (i = 1; i < n; i++){
        f *= i;
        e = e + (1.0 / f);
    }
    printf("O valor de 'e' é %f", e);
return 0;
}