/*Exercicio 6
Dados dois vetores A e B de tamanho 10, realize o produto escalar desses vetores usando um laço. 
Apresente no final os dois vetores e o resultado do produto. */

#include <stdio.h>

int main(){
    int tamanho = 10;
    int vetorA[tamanho];
    int vetorB[tamanho];
    int produto_escalar = 0;

    printf("Digite os elementos do vetor A:\n");
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorA[i]);
    }

    printf("Digite os elementos do vetor B:\n");
    for(int i = 0; i < tamanho; i++) {
        scanf("%d", &vetorB[i]);
    }

    for(int i = 0; i <  tamanho; i++) {
        produto_escalar += vetorA[i] * vetorB[i];
    }

    printf("Vetor A: ");
    for(int i = 0; i < tamanho; i++) {
        printf("%d",  vetorA[i]);

    }
    printf("\n");

    printf("Vetor B: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetorB[i]);
    }
    printf("\n");

    // Apresentar o resultado do produto escalar
    printf("Resultado do produto escalar: %d\n", produto_escalar);

    return 0;
    
    
}