#include <stdio.h>

    //Variáveis da Carta 1
    int main(){ 
        char estado1;                                      //Armazena a letra que represetna o estado     
        char codigo1[4];                                   //Armazena o código que representa o estado
        char nome1[20];                                    //Armazena o nome da cidade
        int populacao1;                                    //Armazena o número que representa a população da cidade
        float area1;                                       //Armazena o número que representa a área da cidade
        float pib1;                                        //Armazena o número que representa o PIB da cidade
        int pontos_turisticos1;                            //Armazena a quantidade de pontos turísticos da cidade
        float densidade_populacional1;                     //Armazena a densidade populacional da cidade dividindo a população dela pela sua área
        float pib_per_capita1;                             //Armazena o PIB Per Capita divindo o PIB pela população da cidade
        float super_poder1;                                //Armazena o super poder da carta 

    //Variáveis da Carta 2    
        char estado2;                                      //Armazena a letra que represetna o estado     
        char codigo2[4];                                   //Armazena o código que representa o estado
        char nome2[20];                                    //Armazena o nome da cidade
        int populacao2;                                    //Armazena o número que representa a população da cidade
        float area2;                                       //Armazena o número que representa a área da cidade
        float pib2;                                        //Armazena o número que representa o PIB da cidade
        int pontos_turisticos2;                            //Armazena a quantidade de pontos turísticos da cidade
        float densidade_populacional2;                     //Armazena a densidade populacional da cidade dividindo a população dela pela sua área
        float pib_per_capita2;                             //Armazena o PIB Per Capita divindo o PIB pela população da cidade
        float super_poder2;                                //Armazena o super poder da carta 

    //Entrada de dados da carta 1

    printf("Carta 1. Escolha uma letra entre 'A' e 'H' para sua carta.\n");
    scanf(" %c", &estado1);

    printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Insira a população da cidade: \n");
    scanf("%d", &populacao1);

    printf("Insira a área da sua cidade: \n");
    scanf("%f", &area1);

    printf("Insira o PIB da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Insira o número de pontos turísticos da sua cidade: \n");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);

    //Entrada de dados da carta 2

        printf("Agora a carta 2. Escolha uma letra entre 'A' e 'H' para sua carta.\n");
        scanf(" %c", &estado2);

        printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo2);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nome2);

        printf("Insira a população da cidade: \n");
        scanf("%d", &populacao2);

        printf("Insira a área da sua cidade: \n");
        scanf("%f", &area2);

        printf("Insira o PIB da sua cidade: \n");
        scanf("%f", &pib2);

        printf("Insira o número de pontos turísticos da sua cidade: \n");
        scanf("%d", &pontos_turisticos2);

        densidade_populacional2 = populacao2 / area2;
        pib_per_capita2 = pib2 / populacao2;
        super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1 / densidade_populacional2);

    //Impressão das informações das duas cartas

        printf("\n===== CARTA 1 =====\n");
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codigo1);
        printf("Cidade: %s\n", nome1);
        printf("População: %d\n", populacao1);
        printf("Área: %.2f Km²\n", area1);
        printf("PIB: R$ %.2f bilhões\n", pib1);
        printf("Pontos turísticos: %d\n", pontos_turisticos1);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
        printf("PIB Per Capita: R$ %.2f bilhões\n", pib_per_capita1);
        printf("Super Poder: %.2f\n", super_poder1);

        printf("\n===== CARTA 2 =====\n");
        printf("Estado: %c\n", estado2);
        printf("Código: %s\n", codigo2);
        printf("Cidade: %s\n", nome2);
        printf("População: %d\n", populacao2);
        printf("Área: %.2f Km²\n", area2);
        printf("PIB: R$ %.2f bilhões\n", pib2);
        printf("Pontos turísticos: %f\n", pontos_turisticos2);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
        printf("PIB Per Capita: R$ %.2f bilhões\n", pib_per_capita2);
        printf("Super Poder: %.2f\n", super_poder2);
        
    //Comparação dos atributos
    
        printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
        printf("População: Carta %d venceu (%d)\n", (populacao1 > populacao2) ? 1 : 2, (populacao1 > populacao2) ? 1 : 0);
        printf("Área: Carta %d venceu (%d)\n", (area1 > area2) ? 1 : 2, (area1 > area2) ? 1 : 0);
        printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2) ? 1 : 2, (pib1 > pib2) ? 1 : 0);
        printf("Pontos Turísticos: Carta %d venceu (%d)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2, (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0);
        printf("Densidade Populacional: Carta %d venceu (%d)\n", (densidade_populacional1 < densidade_populacional2) ? 1 : 2, (densidade_populacional1 < densidade_populacional2) ? 1 : 0);
        printf("PIB per Capita: Carta %d venceu (%d)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2, (pib_per_capita1 > pib_per_capita2) ? 1 : 0);
        printf("Super Poder: Carta %d venceu (%d)\n", (super_poder1 > super_poder2) ? 1 : 2, (super_poder1 > super_poder2) ? 1 : 0);


        return 0;
    }