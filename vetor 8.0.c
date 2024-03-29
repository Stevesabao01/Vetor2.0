/*Exercicio 8
Faça um programa que tenha dois vetores A e B (tamanho 10 tipo inteiro). 
Faça uma verificação entre eles e verifique se há elementos iguais entre eles. 
Caso tenha, apresente um total de elementos iguais e em um terceiro vetor C apresente os vetores iguais.*/

#include <stdio.h>

int main() {
    // Definindo o tamanho dos vetores
    int tamanho = 10;

    // Declarando os vetores A, B e C
    int vetorA[tamanho];
    int vetorB[tamanho];
    int vetorC[tamanho]; // Vetor para armazenar os elementos iguais

    // Solicitar ao usuário que insira os elementos do vetor A
    printf("Digite os elementos do vetor A:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }

    // Solicitar ao usuário que insira os elementos do vetor B
    printf("Digite os elementos do vetor B:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorB[i]);
    }

    // Verificar se há elementos iguais entre os vetores A e B
    int qtd_iguais = 0; // Contador para o total de elementos iguais
    printf("Elementos iguais nos vetores A e B:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (vetorA[i] == vetorB[j]) {
                vetorC[qtd_iguais] = vetorA[i]; // Armazenar o elemento igual no vetor C
                qtd_iguais++;
                printf("%d ", vetorA[i]);
                break; // Encerrar a busca no vetor B após encontrar um elemento igual
            }
        }
    }
    printf("\n");

    // Apresentar o total de elementos iguais
    printf("Total de elementos iguais: %d\n", qtd_iguais);

    // Apresentar o vetor C com os elementos iguais
    printf("Vetor C (elementos iguais): ");
    for (int i = 0; i < qtd_iguais; i++) {
        printf("%d ", vetorC[i]);
    }
    printf("\n");

    return 0;
}
