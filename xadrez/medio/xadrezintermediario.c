#include <stdio.h>

int main(){
    int rainha, bispo = 1, torre = 1, cavalo = 1;
     
    printf("Rainha se moverá para:\n");
    for(rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda\n");
    }
    printf("\n");//printf \n para pular uma linha de uma codigo a outro

    printf("Torre se moverá para:\n");

    while(torre <= 5)
    {
      printf("Direita \n");
      torre++;
    }
    printf("\n");

    printf("Bispo se moverá para:\n");

    do
    {
        printf("cima\n");//Remete a movimentação diagonal do bispo
        if(bispo <= 5){
            printf("Direita\n");
        }
        bispo++;
    }while(bispo <= 5);
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