#include <stdio.h>

    int main(){
        char estado;
        char codigo[3];
        char nome;
        int populacao;
        float area;
        float pib;
        int turisticos;

        printf("Escolha uma letra entre 'A' e 'H' para sua carta 1");
        scanf("%s", &estado);

        printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nome);

        printf("Insira a população da cidade: \n");
        scanf("%d", &populacao);

        printf(" Insira a área da sua cidade: \n");
        scanf("%f", &area);

        printf(" Insira o PIB da sua cidade: \n");
        scanf("%f", &pib);

        printf(" Insira o número de pontos turísticos da sua cidade: \n");
        scanf("%d", &pib);

        printf("Agora a carta 2. Escolha uma letra entre 'A' e 'H' para sua carta.");
        scanf("%s", &estado);

        printf("Vamos criar o código de sua carta. Insira a letra do estado seguida de um número de 01 a 04: \n");
        scanf("%s", &codigo);

        printf("Insira o nome da cidade: \n");
        scanf("%s", &nome);

        printf("Insira a população da cidade: \n");
        scanf("%d", &populacao);

        printf(" Insira a área da sua cidade: \n");
        scanf("%f", &area);

        printf(" Insira o PIB da sua cidade: \n");
        scanf("%f", &pib);

        printf(" Insira o número de pontos turísticos da sua cidade: \n");
        scanf("%d", &pib);

        printf("Nome do aluno: %s - Matrícula: %d", nome, matricula);
        printf("Idade: %d - Altura: %f", idade, altura);

        return 0;
    }