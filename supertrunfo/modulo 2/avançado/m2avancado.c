#include <stdio.h>

int main (){
    char Cidade1[50], Cidade2[50]; //Cidade cadastrada com até 50 caracteres
    char codigo1[4], Codigo2[4]; //codigo com ate 4 caracteres pois sera letra e numero
    float Pib1, Pib2,  superpoder1, superpoder2;
    int Populacao1, Populacao2, opcao, escolha1, escolha2;
    float Areakm1, Areakm2, densidade1, densidade2, pibpercapita1, pibpercapita2;
    char Estado1, Estado2;
    int Pontosturistico1, Pontosturistico2, resultado1, resultado2;


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
    printf("#######################\n");
    printf("\n");//pular linha.
    //Impressão das cartas
    printf("Carta 1\n");
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", Cidade1);
    printf("População: %d milhões\n", Populacao1);
    printf("Area: %.1f Km²\n", Areakm1);
    printf("Pib: %.2f milhões\n", Pib1);
    printf("Pib per capita: %.3f\n", pibpercapita1);
    printf("Densidade: %.3f\n", densidade1);
    printf("Pontos turisticos: %d\n", Pontosturistico1);
    printf("***************\n");
    printf("\n");

    printf("Carta 2\n");
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Cidade2);
    printf("População: %d milhões\n", Populacao2);
    printf("Area: %.1f Km²\n", Areakm2);
    printf("Pib: %.2f milhões\n", Pib2);
    printf("Pib per capita: %.3f\n", pibpercapita2);
    printf("Densidade: %.3f\n", densidade2);
    printf("Pontos turisticos: %d\n", Pontosturistico2);
    printf("***************\n");
    printf("\n");

    //Aqui será feita a comparação dos dados para determinar a carta vencedora
    printf("Inicio da comparação das cartas\n");
    printf("*Nãp pode repetir os mesmo itens.*\n");
    printf("Escolha o primeiro item que deseja comparar\n");
    printf("1. População\n");
    printf("2. Pib\n");
    printf("3. Area Km²\n");
    printf("4.Pib per capita\n");
    printf("5. Pontos turisticos\n");
    printf("6. Densidade\n");
    printf("Item 1: ");
    scanf("%d", &escolha1);
    printf("\n");
    //comparação dos itens da carta 1 com carta 2.
    switch (escolha1){
        case 1:
        printf("Você escolheu item população para comparação\n");
        printf("\n");
        resultado1 = Populacao1 > Populacao2 ? 1 : 0; 
        break;

        case 2:
        printf("Você escolheu item PIB para comparação\n");
        printf("\n");
        resultado1 = Pib1 > Pib2 ? 1 : 0;
        break;

        case 3:
        printf("Você escolheu item Area km² para comparação\n");
        printf("\n");
        resultado1 = Areakm1 > Areakm2 ? 1 : 0;
        break;

        case 4:
        printf("Você escolheu item pib per capita para comparação\n");
        printf("\n");
        resultado1 = pibpercapita1 > pibpercapita2 ? 1 : 0;
        break;

        case 5:
        printf("Você escolheu item pontos turisticos para comparação\n");
        printf("\n");
        resultado1 = Pontosturistico1 > Pontosturistico2 ? 1 : 0;
        break;

        case 6:
        printf("Você escolheu item densidade para comparação\n");
        printf("\n");
        resultado1 = densidade1 < densidade2 ? 1 : 0;
        break;
        default:
        printf("Opção invalida\n");//caso o usuario escolha uma opção fora do menu sujerido
        break;
      }
    printf("Inicio da comparação das cartas\n");
    printf("*Nãp pode repetir os mesmo itens.*\n");
    printf("Escolha o segundo item que deseja comparar\n");
    printf("1. População\n");
    printf("2. Pib\n");
    printf("3. Area Km²\n");
    printf("4.Pib per capita\n");
    printf("5. Pontos turisticos\n");
    printf("6. Densidade\n");
    printf("Item 1: ");
    scanf("%d", &escolha2);
    printf("\n");

    if(escolha1 == escolha2){//nao pode escolher os mesmos itens
        printf("Você escolheu o mesmo atributo!\n");//aparecerá caso seja escolhi os mesmos itens
    }else{
        switch (escolha2){//segunda escolha para comparação
            case 1:
            printf("Você escolheu item população para comparação\n");
            printf("\n");
            resultado2 = Populacao1 > Populacao2 ? 1 : 0;
            break;
    
            case 2:
            printf("Você escolheu item PIB para comparação\n");
            printf("\n");
            resultado2 = Pib1 > Pib2 ? 1 : 0;
            break;
    
            case 3:
            printf("Você escolheu item Area km² para comparação\n");
            printf("\n");
            resultado2 = Areakm1 > Areakm2 ? 1 : 0;
            break;
    
            case 4:
            printf("Você escolheu item pib per capita para comparação\n");
            printf("\n");
            resultado2 = pibpercapita1 > pibpercapita2 ? 1 : 0;
            break;
    
            case 5:
            printf("Você escolheu item pontos turisticos para comparação\n");
            printf("\n");
            resultado2 = Pontosturistico1 > Pontosturistico2 ? 1 : 0;
            break;
    
            case 6:
            printf("Você escolheu item densidade para comparação\n");
            printf("\n");
            resultado2 = densidade1 < densidade2 ? 1 : 0;
            break;
            default:
            printf("Opção invalida\n");
            break;
          }
        if(resultado1 && resultado2){//comparação dos itens
            printf("\n");
            printf("Parabéns você venceu!!!\n");//se o resultado das escolhas forem 1, verdade, resultado 1 vence.
        }else if(resultado1 != resultado2){//se resultado forem diferentes, no caso resultado 1 = 1 e resultado 2 = 0
            printf("\n");
            printf("EMPATOU!!\n");
        }else{
            printf("\n");
            printf("Infelizmente você perdeu!\n");//se todos os resultado forem 0, resultado 1 perde.
        }
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