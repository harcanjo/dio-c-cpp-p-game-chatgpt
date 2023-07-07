#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int jogador, computador;
    int resultado;

    // Gera uma semente aleatória
    srand(time(NULL));

    printf("Bem-vindo ao jogo de Pedra, Papel e Tesoura!\n");
    printf("Escolha sua jogada:\n");
    printf("1 - Pedra\n");
    printf("2 - Papel\n");
    printf("3 - Tesoura\n");
    scanf("%d", &jogador);

    // Gera a jogada do computador aleatoriamente
    computador = rand() % 3 + 1;

    printf("Você escolheu: ");
    switch (jogador) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
        default:
            printf("Opção inválida\n");
            return 0;
    }

    printf("Computador escolheu: ");
    switch (computador) {
        case 1:
            printf("Pedra\n");
            break;
        case 2:
            printf("Papel\n");
            break;
        case 3:
            printf("Tesoura\n");
            break;
    }

    // Determina o resultado do jogo
    if (jogador == computador) {
        resultado = 0; // Empate
    } else if ((jogador == 1 && computador == 3) || (jogador == 2 && computador == 1) || (jogador == 3 && computador == 2)) {
        resultado = 1; // Jogador ganha
    } else {
        resultado = -1; // Computador ganha
    }

    // Imprime o resultado
    if (resultado == 0) {
        printf("Empate!\n");
    } else if (resultado == 1) {
        printf("Você ganhou!\n");
    } else {
        printf("Computador ganhou!\n");
    }

    return 0;
}