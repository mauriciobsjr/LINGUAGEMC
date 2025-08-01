#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int Numerojogador, Numerocomputador, Resultado;
    char Tipocomparacao;
    //Gerar numero aleatorio
    srand(time(0));
    Numerocomputador = rand() % 100 + 1;//NUmeros entre 1 e 100.

    //Iniciar jogo
    printf("**Bem vindo ao jogo Maior, menor ou igual!**\n");
    printf("Escolha um número e o tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");
    printf("Escolha qual o tipo de comparação: ");
    scanf("%c", &Tipocomparacao);

    printf("Digite o numero para a comparação (Entre 1 e 100): ");
    scanf("%d", &Numerojogador);
    //Exibir a escolha do computador.
    //printf("O número do computador é: %d\n", Numerocomputador);

    switch (Tipocomparacao)
    {
    case 'M':
    case 'm':
        printf("Voce escolheu a opção maior!\n");
        Resultado = Numerojogador > Numerocomputador ? 1 : 0;
        printf("O número do computador é: %d e o do jogador é: %d\n", Numerocomputador, Numerojogador);
        break;
    case 'N':
    case 'n':
        printf("Voce escolheu a opção menor!\n");
        Resultado = Numerojogador < Numerocomputador ? 1 : 0;
        printf("O número do computador é: %d e o do jogador é: %d\n", Numerocomputador, Numerojogador);
        break;
    case 'I':
    case 'i':
        printf("Voce escolheu a opção igual!\n");
        Resultado = Numerojogador == Numerocomputador ? 1 : 0;
        printf("O número do computador é: %d e o do jogador é: %d\n", Numerocomputador, Numerojogador);
        break;
    default:
        printf("Opção invalida\n");
        break;
    }

    if (Resultado == 1){
        printf("****Voce Venceu:)****\n");
    } else{
        printf("Voce perdeu :(\n");
    }
}