#include <stdio.h>

    //Carta 1
    int main(){
        char estado1;            //Para escolher a letra que representa o estado escolhido 
        char codigo1[4];         //Para escolher o código da carta
        char nome1[20];
        int populacao1;
        float area1;
        float pib1;
        int pontos_turisticos1;

    //Carta 2    
        char estado2;            //Para escolher o estado 
        char codigo2[4];
        char nome2[20];
        int populacao2;
        float area2;
        float pib2;
        int pontos_turisticos2;

    //Entrada de dados da carta 1

        printf("Carta 1 - Escolha uma letra entre 'A' e 'H' que represente seu estado: \n");
        scanf(" %c", &estado1);

        printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo1);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nome1);

        printf("Insira a população da cidade: \n");
        scanf("%d", &populacao1);

        printf(" Insira a área da sua cidade: \n");
        scanf("%f", &area1);

        printf(" Insira o PIB da sua cidade: \n");
        scanf("%f", &pib1);

        printf(" Insira o número de pontos turísticos da sua cidade: \n");
        scanf("%d", &pontos_turisticos1);

    //Entrada de dados da carta 2

        printf("Agora a carta 2. Escolha uma letra entre 'A' e 'H' para sua carta.");
        scanf(" %c", &estado2);

        printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo2);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nome2);

        printf("Insira a população da cidade: \n");
        scanf("%d", &populacao2);

        printf(" Insira a área da sua cidade: \n");
        scanf("%f", &area2);

        printf(" Insira o PIB da sua cidade: \n");
        scanf("%f", &pib2);

        printf(" Insira o número de pontos turísticos da sua cidade: \n");
        scanf("%d", &pontos_turisticos2);

    //Impressão das informações

        printf("\n===== CARTA 1 =====\n");
        printf("Estado: %c", estado1);
        printf("Código: %s", codigo1);
        printf("Cidade: %s", nome1);
        printf("População: %d", populacao1);
        printf("Área: %f", area1);
        printf("PIB: %f", pib1);
        printf("Pontos turísticos: %d", pontos_turisticos1);

        printf("\n===== CARTA 2 =====\n");
        printf("Estado: %c", estado1);
        printf("Código: %s", codigo1);
        printf("Cidade: %s", nome1);
        printf("População: %d", populacao1);
        printf("Área: %f", area1);
        printf("PIB: %f", pib1);
        printf("Pontos turísticos: %d", pontos_turisticos1);

        return 0;
    }