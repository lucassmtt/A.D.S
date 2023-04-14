float numero_01 = 0;
float numero_02 = 0;
float resultado = 0;
float meu_resultado = 0;

float Somar(float numero_01, float numero_02){
    resultado = numero_01 + numero_02;
    return resultado;
}

float Subtrair(float numero_01, float numero_02){
    resultado = numero_01 - numero_02;
    return resultado;
}

float Multiplicar(float numero_01, float numero_02){
    resultado = numero_01 * numero_02;
    return resultado;
}

float Dividir(float numero_01, float numero_02){
    resultado = numero_01 / numero_02;
    return resultado;
}


int main(){
int x = 0;

printf("Digite um número para fazer um cálculo: ");
scanf("%f", &numero_01);

printf("Digite um segundo número para terminar o cálculo: ");
scanf("%f", &numero_02);

printf(" 1 = Somar \n");
printf(" 2 = Subtrair \n");
printf(" 3 = Multiplicar \n");
printf(" 4 = Dividir \n");


scanf("%d", &x);

if (x == 1){
    meu_resultado = Somar(numero_01, numero_02);
}

if (x == 2){
    meu_resultado = Subtrair(numero_01, numero_02);
}

if (x == 3){
    meu_resultado = Multiplicar(numero_01, numero_02);
}

if (x == 4){
    meu_resultado = Dividir(numero_01, numero_02);
}

printf("Seu resultado é %.2f", meu_resultado);
}