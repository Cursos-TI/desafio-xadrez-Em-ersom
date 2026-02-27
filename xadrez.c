#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // constantes
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // --- Torre: (Utilizando 'for') ---
    // A torre se move 5 casas para a direita.
    printf("Movimentando a Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n"); 

    // --- Bispo: (Utilizando 'while') ---
    // O bispo se move 5 casas na diagonal.
    printf("Movimentando o Bispo:\n");
    int j = 1;
    while (j <= casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n"); 

    // --- Rainha: (Utilizando 'do-while') ---
    // A rainha se move 8 casas para a esquerda.
    printf("Movimentando a Rainha:\n");
    int k = 1;
    do {
        printf("Esquerda\n");
        k++;
    } while (k <= casasRainha);

    return 0;
}
