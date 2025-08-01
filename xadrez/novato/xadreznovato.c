#include <stdio.h>

int main(){
    int rainha, bispo = 1, torre = 1;
     
    printf("Rainha se moverá para:\n");
    for(rainha = 0; rainha < 8; rainha++)
    {
        printf("Esquerda\n");
    }
    
    printf("Torre se moverá para:\n");

    while(torre <= 5)
    {
      printf("Direita \n");
      torre++;
    }

    printf("Bispo se moverá para:\n");

    do
    {
        printf("Cima - Direita\n");
        bispo++;
    }while(bispo <= 5);

    return 0;

}