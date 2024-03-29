/*Exercicio 4
Problema a ser resolvido -> Faça um programa que leia 20 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e:

a) imprima os números do vetor que são maiores que o valor referência;

b) retorne quantos números armazenados no vetor são menores que o valor de referência;

c) retorne quantas vezes o valor de referência aparece no vetor; */

#include <stdio.h>

int main() {
    int numeros[20]; // Vetor para armazenar os 20 números inteiros
    int valor_referencia;
    int maiores = 0; // Contador para os números maiores que o valor de referência
    int menores = 0; // Contador para os números menores que o valor de referência
    int ocorrencias = 0; // Contador para as ocorrências do valor de referência no vetor

    // Solicitar ao usuário que insira os 20 números inteiros
    printf("Digite 20 numeros inteiros:\n");
    for (int i = 0; i < 20; i++) {
        scanf("%d", &numeros[i]);
    }

    // Solicitar ao usuário que insira o valor de referência
    printf("Digite um valor de referencia inteiro:\n");
    scanf("%d", &valor_referencia);

    // Verificar e imprimir os números maiores que o valor de referência
    printf("Numeros maiores que o valor de referencia:\n");
    for (int i = 0; i < 20; i++) {
        if (numeros[i] > valor_referencia) {
            printf("%d ", numeros[i]);
            maiores++;
        }
    }
    printf("\n");

    // Verificar quantos números armazenados no vetor são menores que o valor de referência
    for (int i = 0; i < 20; i++) {
        if (numeros[i] < valor_referencia) {
            menores++;
        }
    }

    // Verificar quantas vezes o valor de referência aparece no vetor
    for (int i = 0; i < 20; i++) {
        if (numeros[i] == valor_referencia) {
            ocorrencias++;
        }
    }

    // Retornar os resultados
    printf("Quantidade de numeros menores que o valor de referencia: %d\n", menores);
    printf("Quantidade de vezes que o valor de referencia aparece no vetor: %d\n", ocorrencias);

    return 0;
}
