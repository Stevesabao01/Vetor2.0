/* Exercicio 7
Faça um programa que leia e monte dois vetores de números inteiros com 20 números cada. 
Depois de montados gere um terceiro vetor formado pela diferença dos dois vetores lidos, um quarto vetor formado pela soma dos dois vetores lidos 
e por último um quinto vetor formado pela multiplicação dos dois vetores lidos.
*/

#include <stdio.h>
#include <stdio.h>

int main() {
    // Definindo o tamanho dos vetores
    int tamanho = 20;

    // Declarando os vetores
    int vetor1[tamanho];
    int vetor2[tamanho];
    int diferenca[tamanho];
    int soma[tamanho];
    int multiplicacao[tamanho];

    // Solicitar ao usuário que insira os elementos do primeiro vetor
    printf("Digite os elementos do primeiro vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor1[i]);
    }

    // Solicitar ao usuário que insira os elementos do segundo vetor
    printf("Digite os elementos do segundo vetor:\n");
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &vetor2[i]);
    }

    // Calcular a diferença entre os elementos dos vetores e armazenar no terceiro vetor
    for (int i = 0; i < tamanho; i++) {
        diferenca[i] = vetor1[i] - vetor2[i];
    }

    // Calcular a soma dos elementos dos vetores e armazenar no quarto vetor
    for (int i = 0; i < tamanho; i++) {
        soma[i] = vetor1[i] + vetor2[i];
    }

    // Calcular a multiplicação dos elementos dos vetores e armazenar no quinto vetor
    for (int i = 0; i < tamanho; i++) {
        multiplicacao[i] = vetor1[i] * vetor2[i];
    }

    // Apresentar os resultados
    printf("Vetor diferenca:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", diferenca[i]);
    }
    printf("\n");

    printf("Vetor soma:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", soma[i]);
    }
    printf("\n");

    printf("Vetor multiplicacao:\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", multiplicacao[i]);
    }
    printf("\n");

    return 0;
}
