#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // N�mero a ser adivinhado pelo jogador
    int numeroSecreto = 42;
    int tentativa;

    printf("Bem-vindo ao jogo de adivinha��o!\n");
    printf("Tente adivinhar o n�mero secreto entre 1 e 100.\n");

    // Loop principal do jogo
    do {
        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        // Verifica se a tentativa est� correta
        if (tentativa == numeroSecreto) {
            printf("Parab�ns! Voc� acertou o n�mero secreto: %d\n", numeroSecreto);
        } else {
            printf("Tente novamente.\n");
        }
    } while (tentativa != numeroSecreto);

    return 0;
}

