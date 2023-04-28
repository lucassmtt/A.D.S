import java.util.Random;

class ex01 {
    public static void main(String[] args) {
        Random MyRandom = new Random();

        int[] meuVetor = new int[100];
        for (int i = 0; i < 100; i++) {
            meuVetor[i] = MyRandom.nextInt(1000);
        }

        for (int j = 0; j < 100; j++) {
            System.out.println(meuVetor[j] + "\n");
        }

        int soma, k, num;

        for (k = 0, num = 0, soma = 0; k < 100; k++) {
            num = meuVetor[k];
            soma += num;
        }
        System.out.println("------------------------------");
        System.out.println(soma);

        int maior_num, menor_num, l;

        for (l = 0, num = 0, maior_num = 0, menor_num = 100; l < 100; l++) {
            num = meuVetor[l];
            if (num > maior_num) {
                maior_num = num;
            }
            if (num < menor_num) {

            }
        }
    }
}