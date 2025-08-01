#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int Escolhajogador, Escolhacomputador;
    srand(time(0));
    
    printf("**Jogo de Jokenpo**\n");
    printf("Escolha uma opção\n");
    printf("1. Pedra\n");
    printf("2. Papel\n");
    printf("3. Teosura\n");
    printf("Escolha: ");
    scanf("%d", &Escolhajogador);

    Escolhacomputador = rand() % 3 + 1;

    switch (Escolhajogador)
    {
    case 1:
        printf("Jogador escolheu pedra - \n");
        break;
    case 2:
        printf("Jogador escolheu papel - \n");
        break;
    case 3:
        printf("Jogador escolheu tesoura - \n");
        break;
    default:
        printf("Opção Invalida\n");
        break;
    }
    switch (Escolhacomputador)
    {
    case 1:
        printf("Computador escolheu pedra\n");
        break;
    case 2:
        printf("Computador escolheu papel\n");
        break;
    case 3:
        printf("Computador escolheu tesoura\n");
        break;
    }

    if (Escolhacomputador == Escolhajogador)
    {
        printf("## JOGO EMPATOU ##\n");
    }else if ((Escolhajogador == 1) && (Escolhacomputador == 3) ||
              (Escolhajogador == 2) && (Escolhacomputador == 1) ||
              (Escolhajogador == 3) && (Escolhacomputador == 2) ||
              (Escolhajogador == 1) && (Escolhacomputador == 2))
    {
        printf("### PARABENS VOCE GANHOU ###\n");
    } else {
        printf("## VOCE PERDEU ##");
    }

    return 0;
}