#include <stdio.h>

int main (){
    char Cidade1[50], Cidade2[50]; //Cidade cadastrada com até 50 caracteres
    char codigo1[4], Codigo2[4]; //codigo com ate 4 caracteres pois sera letra e numero
    float Pib1, Pib2;
    int Populacao1, Populacao2, opcao, comparacao;
    float Areakm1, Areakm2, densidade1, densidade2, pibpercapita1, pibpercapita2;
    char Estado1, Estado2;
    int Pontosturistico1, Pontosturistico2; 

    printf("//Menu Principal\\\n");
    printf("1. Iniciar o jogo\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do Jogo\n");
    printf("Selecione uma opção: ");
    scanf("%d", &opcao);//O jogador escolherá qual item do menu ele quer ir

    switch (opcao)
    {
    case 1:
    printf("***Cadastrar nova carta***\n"); //Aqui será iniciará o cadastro das cartas.
    printf("Digite o Estado em letra unica: "); //Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado1);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &codigo1); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade1);

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
    scanf(" %d", &Pontosturistico1);  
    
    printf("*Proxima carta cidade*\n"); //Aqui será inicio do cadastro da segunda carta.
    printf("Digite o Estado em letra unica: "); //Indicando para o usuário como inicar o cadastro.
    scanf(" %c", &Estado2);

    printf("Digite o codigo da carta, a letra do estado mais numero, ex. P1, P2: ");
    scanf(" %s", &Codigo2); //Codigo da carta para identificação.
    
    printf("Digita a cidade: ");
    scanf(" %s", &Cidade2);

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
    scanf(" %d", &Pontosturistico2);  
    //Aqui será feita a comparação dos dados para determinar a carta vencedora
    printf("*Vamos comparar qual carta tem o maior Pib Per capita e determinar qual carta saira vencedora*\n");
    printf("Escolha qual item deseja comparar\n");
    printf("1. População\n");
    printf("2. Pib\n");
    printf("3. Area Km²\n");
    printf("4.Pib per capita\n");
    printf("5. Pontos turisticos\n");
    printf("6. Densidade\n");
    printf("Qual item deseja?: ");
    scanf("%d", &comparacao);

    switch (comparacao){//Aqui será feita comparação dos dados apresentados
        case 1:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("População carta 1: %d milhões\n", Populacao1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("População carta 2: %d milhões\n", Populacao2);
           if (Populacao1 > Populacao2){
            printf("## População da carta 1 Venceu ##\n");
           }else if (Populacao1 == Populacao2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## População da carta 2 venceu ##\n");
           }
        break;
        case 2:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("Pib carta 1: %f milhões\n", Pib1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("Pib carta 2: %f milhões\n", Pib2);
           if (Pib1 > Pib2){
            printf("## Pib da carta 1 Venceu ##\n");
           }else if (Pib1 == Pib2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## Pib da carta 2 venceu ##\n");
           }
        break;
        case 3:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("Area km² carta 1: %f milhões\n", Areakm1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("Area km² carta 2: %f milhões\n", Areakm2);
           if (Areakm1 > Areakm2){
            printf("## Area km² da carta 1 Venceu ##\n");
           }else if (Areakm1 == Areakm2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## Area km² da carta 2 venceu ##\n");
           }
        break;
        case 4:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("Pib per capita carta 1: %.3f\n", pibpercapita1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("Pib per capita carta 2: %.3f\n", pibpercapita2);
           if (pibpercapita1 > pibpercapita2){
            printf("## Pib per capita da carta 1 Venceu ##\n");
           }else if (pibpercapita1 == pibpercapita2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## Pib per capita da carta 2 venceu ##\n");
           }
        break;
        case 5:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("Pontos turisticos carta 1: %d\n", Pontosturistico1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("Pontos turisticos carta 2: %d\n", Pontosturistico2);
           if (Pontosturistico1 > Pontosturistico2){
            printf("## Pontos turisticos da carta 1 Venceu ##\n");
           }else if (Pontosturistico1 == Pontosturistico2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## Pontos turisticos da carta 2 venceu ##\n");
           }
        break;
        case 6:
        printf("\\Carta 1//\n");
        printf("Cidade carta 1: %s\n", Cidade1);
        printf("Densidade carta 1: %.3f\n", densidade1);
        printf("\\Carta 2//\n");
        printf("Cidade carta 2: %s\n", Cidade2);
        printf("Densidade carta 2: %.3f\n", densidade2);
           if (densidade1 < densidade2){
            printf("## Densidade da carta 1 menor, portanto é a vencedora ##\n");
           }else if (densidade1 == densidade2){
            printf("## Resultado deu empate ##\n");
           } else{
            printf("## Densidade da carta 2 menor. portanto é a vencedora ##\n");
           }
        break;
      }
    break;
    case 2://Aqui será exibida as regras do jogo
        printf("!!Regras do jogo!!\n");
        printf("1. Cadastras os dados das cartas\n");
        printf("2. Escolher qual dado será comparado\n");
        printf("3. Vence a carta com maior valor, exceto para densidade pois vencerá a carta com menor valor\n");
    break;
    case 3: 
        printf("Saindo do jogo!\n");
    break;
    default:
        printf("Opção invalida\n");
        break;
    }

    return 0;    
}