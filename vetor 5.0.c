/*Exercicio 5
 Faça um programa que preencha um vetor com 10 numeros reais, calcule e mostre a quantidade de numeros negativos e a soma dos números positivos desse vetor. */

 #include <stdio.h>

int main() {
    float numeros[10]; // Vetor para armazenar os 10 números reais
    int qtd_negativos = 0; // Contador para a quantidade de números negativos
    float soma_positivos = 0; // Variável para armazenar a soma dos números positivos

    // Solicitar ao usuário que insira os 10 números reais
    printf("Digite 10 numeros reais:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &numeros[i]);
    }

    // Calcular a quantidade de números negativos e a soma dos números positivos
    for (int i = 0; i < 10; i++) {
        if (numeros[i] < 0) {
            qtd_negativos++;
        } else {
            soma_positivos += numeros[i];
        }
    }

    // Imprimir a quantidade de números negativos e a soma dos números positivos
    printf("Quantidade de numeros negativos: %d\n", qtd_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);

    return 0;
}
