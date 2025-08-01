#include <stdio.h>

int main (){
    char Cidade[50]; //Cidade cadastrada com até 50 caracteres
    char codigo[4]; //codigo com ate 4 caracteres pois sera letra e numero
    float Pib;
    int Populacao;
    float Areakm;
    char Estado;
    int Pontosturistico;

    printf("***Cadastrar nova carta***\n"); //Aqui será iniciará o cadastro das cartas.
    printf("Digite o Estado em letra unica: "); //Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao);

    printf("Digite a área: ");
    scanf(" %f", &Areakm);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);    
    
    printf("*Proxima carta cidade*\n"); //Aqui será inicio do cadastro da segunda carta.
    printf("Digite o Estado em letra unica: ");//Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao);

    printf("Digite a área: ");
    scanf(" %f", &Areakm);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);    
    
    printf("*Proxima carta cidade*\n"); //Aqui será inicio do cadastro da segunda carta.

    return 0;
}
