#include <stdio.h>

void movertorre(int torre){
    if(torre > 0){
        printf("Direita\n");
    movertorre(torre - 1);
    }
}

void moverrainha(int rainha){
    if(rainha > 0){
        printf("Esquerda\n");
        moverrainha(rainha - 1);
    }
}

void moverbispo(int bispoo){
    if(bispoo > 0){
        printf("Cima\n");//Ordem para movimentação vertical.
        if(bispoo > 0){
            printf("Direita\n");//Ordem para movimentação horizontal.
        }
        moverbispo(bispoo - 1);
    }
}

int main(){
    int cavalo = 1;
    int bispo = 1;
    printf("Torre se moverá para:\n");
    movertorre(5);
    printf("\n");

    printf("Rainha se moverá para:\n");
    moverrainha(8);
    printf("\n");

    // Movimentação do Bispo com loop
    printf("Bispo se moverá para:\n");
    moverbispo (5);
    printf("\n");
    
    printf("O cavalo se moverá para:\n");
    while(cavalo --)//Esta decrementado -- para a movimentação final ser executada uma vez
    {
        for(int i = 0; i < 2; i ++)//imprime pra cima duas vezes
        {
            printf("Cima\n");
        }
        printf("Direita\n");//imprime pra direita uma vez
    }
    printf("\n");

    return 0;

}