#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main() {
    //Váriaveis dos dados das duas cartas
    //Inclui algumas detalhes a mais para tornar o programa mais visual
    //busquei informações para poder melhorar em relação ao primeiro programa apresentado

    char estado1[10], estado2[10];
    char codigocarta1[4], codigocarta2[4];
    char cidade1[25], cidade2[25];
    int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int numeropontosturisticos1, numeropontosturisticos2;
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    //Carta 01

    printf("Digite os dados da Carta 01: \n");
    printf("Digite Nome do Estado (Letra de A a H): ");
    scanf(" %s", estado1);

    printf("Digite Codigo Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta1);

    printf("Digite Nome Cidade: "); // falta descobrir como inserir acentuação  
    getchar();
    fgets(cidade1, 25, stdin);
    cidade1[strcspn(cidade1, "\n")] = '\0';

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao1);

    printf("Digite a Area: ");
    scanf(" %f", &area1);

    printf("Digite o PIB: ");
    scanf(" %f", &pib1);

    printf("Digite Numero de Pontos Turisticos: ");
    scanf(" %d", &numeropontosturisticos1);

    printf("\n");
    printf("\n");
    
    //Carta 02

    printf("Digite os dados da Carta 02: \n");
    printf("Digite Nome do Estado: ");
    scanf(" %s", estado2);

    printf("Digite Codigo Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta2);

    printf("Digite Nome Cidade: "); // falta descobrir como inserir acentuação  
    getchar();
    fgets(cidade2, 25, stdin);
    cidade2[strcspn(cidade2, "\n")] = '\0';

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite Numero de Pontos Turisticos: ");
    scanf(" %d", &numeropontosturisticos2);

    printf("\n");

    // Cálculo da Densidade Populacional e PIB per Capita
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;
    
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;
        
    // Exibição dos dados da primeira carta
    printf("====================================\n");
    printf("            CARTA 1\n");
    printf("====================================\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: R$ %.2f reais\n", pibPerCapita1 * 1000000000);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("====================================\n");
    printf("            CARTA 2\n");
    printf("====================================\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: R$ %.2f reais\n", pibPerCapita2 * 1000000000);

    printf("\n");

    return 0;
    

}