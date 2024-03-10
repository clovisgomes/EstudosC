#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Número a ser adivinhado pelo jogador
    int numeroSecreto = 42;
    int tentativa;

    printf("Bem-vindo ao jogo de adivinhação!\n");
    printf("Tente adivinhar o número secreto entre 1 e 100.\n");

    // Loop principal do jogo
    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        // Verifica se a tentativa está correta
        if (tentativa == numeroSecreto) {
            printf("Parabéns! Você acertou o número secreto: %d\n", numeroSecreto);
        } else {
            printf("Tente novamente.\n");
        }
    } while (tentativa != numeroSecreto);

    return 0;
}

