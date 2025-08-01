#include <stdio.h>

int main (){
    char Cidade[50]; //Cidade cadastrada com até 50 caracteres
    char codigo1[4], Codigo2[4]; //codigo com ate 4 caracteres pois sera letra e numero
    float Pib1, Pib2;
    int Populacao1, Populacao2;
    float Areakm1, Areakm2, densidade1, densidade2, pibpercapita1, pibpercapita2;
    char Estado;
    int Pontosturistico; 

    printf("***Cadastrar nova carta***\n"); //Aqui será iniciará o cadastro das cartas.
    printf("Digite o Estado em letra unica: "); //Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo1); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao1);

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm1);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib1);

    /*para o resultado do pibpercapita utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    pibpercapita1 = (float)(Pib1 / Populacao1);
    printf("Pib Per capita: %.3f\n", pibpercapita1);
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    /*para o resultado da densidade utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    densidade1 = (float)(Populacao1 / Areakm1);
    printf("Densidade populacional: %.3f\n", densidade1); 
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);  
    
    printf("*Proxima carta cidade*\n"); //Aqui será inicio do cadastro da segunda carta.
    printf("Digite o Estado em letra unica: "); //Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &Codigo2); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade);

    printf("Digite a população: ");
    scanf(" %d", &Populacao2);

    printf("Digite a area em km²: ");
    scanf(" %f", &Areakm2);    

    printf("Digite o PIB: ");
    scanf(" %f", &Pib2);

    /*para o resultado do pibpercapita utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    pibpercapita2 = (float)(Pib2 / Populacao2);
    printf("Pib Per capita: %.3f\n", pibpercapita2);
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    /*para o resultado da densidade utilizamos a formula de divisao
    e cast para calculos entre numeros inteiros e fracionados */
    densidade2 = (float)(Populacao2 / Areakm2);
    printf("Densidade populacional: %.3f\n", densidade2); 
    //Colocamos .3 na %f para informar que serão apenas 3 casas decimais

    printf("Digite o numero de pontos turisticos: ");
    scanf(" %d", &Pontosturistico);  
    //Aqui será feita a comparação dos dados para determinar a carta vencedora
    printf("*Vamos comparar qual carta tem o maior Pib Per capita e determinar qual carta saira vencedora*\n");

    if (pibpercapita1 > pibpercapita2){
        printf("A carta 1 venceu\n"); //Se os dados da carta 1 forem maiores elá sera vencedora
    }else { //Importante fazer a abrir e fechar cada comando {} para executar corretamente.
        printf("A carta 1 perdeu\n"); //Se os dados da carta 1 forem menores ela será perdedora
    }

    return 0;    
}