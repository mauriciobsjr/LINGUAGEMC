#include <stdio.h>

int main() {
    char Cidade[50]; //Cidade cadastrada com até 50 caracteres
    char codigo[4]; //codigo com ate 4 caracteres pois sera letra e numero
    float Pib, superpoder1, superpoder2;
    int Populacao;
    float Areakm, densidade, pibpercapita;
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

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib);

    /*para o resultado do pibpercapita utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    pibpercapita = (float)(Pib / Populacao);
    printf("Pib Per capita: %.3f\n", pibpercapita);
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    /*para o resultado da densidade utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    densidade = (float)(Populacao / Areakm);
    printf("Densidade populacional: %.3f\n", densidade);
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);  

    //Superpoder será a soma de todas as variáveis disponiveis e a carta com a maior somatoria ganha
    superpoder1 = (float) Pib + pibpercapita + Populacao + Areakm + densidade + Pontosturistico;
    printf("Superpoder: %.2f\n", superpoder1);
    //Colocamos .2 na %f para informar que serão apenas 2 casas decimais

    printf("*Proxima carta cidade*\n");  //Aqui será inicio do cadastro da segunda carta.

    return 0;
}
