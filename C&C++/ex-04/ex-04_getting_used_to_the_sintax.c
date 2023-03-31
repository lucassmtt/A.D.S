#include <stdio.h>
#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <time.h>

/*
Descrição do exercício:

Faça um programa que imprima na tela os valores no intervalo entre 10 e 200.
*/

int main()
{
	int i;
	for (i = 10; i <= 200; i++)
	{
		printf("%d %n", &i);
	}
}


/*
Descrição do exercício:

Faça um programa onde o usuário digita um valor, e imprima na tela todos os valores
entre 0 e o valor digitado.
*/

int main(){
	int valor_Usuario;
	int i;

	//Imprimindo valores
	printf("Digite um número aleatório: ");

	//Entrada de dados
	scanf("%d", &valor_Usuario);

	for (i = 0; i < valor_Usuario; i++){
		printf("%d", i);
	}

}


/*
Descrição do exercício:

Faça um programa onde o usuário digita dois valores, e imprima na tela todos os
valores no intervalo entre os valores digitados.
*/
int main(){
	int numero_1, numero_2;

	printf("Digite um número para ser analisado: ");
	scanf("%d", &numero_1));

	printf("Digite outro número: ");
	scanf("%d", &numero_2);

	if (numero_1 > numero_2){
		for (numero_1, numero_2; numero_1 > numero_2; numero_1--){
			printf("%d %n", numero_1);
		}
	} 
	else{
		for (numero_1, numero_2; numero_2 > numero_1; numero_1++){
			printf("%d %n", numero_1);
		}
	}
}

