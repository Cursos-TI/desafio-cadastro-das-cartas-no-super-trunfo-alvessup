#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    //Váriaveis dos dados das duas cartas

    char estado1[10], estado2[10];
    char codigocarta1[4], codigocarta2[4];
    char cidade1[25], cidade2[25];
    int populacao1, populacao2; 
    float area1, area2;
    float pib1, pib2;
    int numeropontosturisticos1, numeropontosturisticos2;

    //Carta 01

    printf("Digite os dados da Carta 01: \n");
    printf("Digite Nome do Estado (Letra de A a H): ");
    scanf(" %s", estado1);

    printf("Digite Codigo Carta (ex: A01, B02): ");
    scanf(" %s", codigocarta1);

    printf("Digite Nome Cidade: ");
    scanf(" %s", cidade1);

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

    printf("Digite Nome Cidade: ");
    scanf(" %s", cidade2);

    printf("Digite a Populacao: ");
    scanf(" %d", &populacao2);

    printf("Digite a Area: ");
    scanf(" %f", &area2);

    printf("Digite o PIB: ");
    scanf(" %f", &pib2);

    printf("Digite Numero de Pontos Turisticos: ");
    scanf(" %d", &numeropontosturisticos2);

    printf("\n");
        
    // Exibição dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo da Carta: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos1);

    printf("\n");

    // Exibição dos dados da segunda carta
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo da Carta: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", numeropontosturisticos2);


    return 0;
    

}