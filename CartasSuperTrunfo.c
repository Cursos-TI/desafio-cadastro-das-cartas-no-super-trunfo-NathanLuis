#include <stdio.h>
#include <stdlib.h>

// Nivel Mestre concluido
// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // Declaração das Variáveis do jogador 1
    char estado1[2]; // oito estados (A a H)
    char codigo1[4]; // cada estado com quatro cidades (1 a 4) Ex: A01, estado A, cidade 01
    int populacao1; // população da cidade
    float area1; // área da cidade em km²
    float pib1; // PIB da cidade em bilhões
    int pontos_turisticos1; // número de pontos turísticos da cidade
    float densidade_populacional1; // densidade populacional (população/área)
    float pib_per_capita1; // PIB per capita (PIB/população)

    // Declaração das Variáveis do jogador 2
    char estado2[2]; // oito estados (A a H)
    char codigo2[4]; // cada estado com quatro cidades (1 a 4) Ex: A01, estado A, cidade 01
    int populacao2; // população da cidade
    float area2; // área da cidade em km²
    float pib2; // PIB da cidade em bilhões
    int pontos_turisticos2; // número de pontos turísticos da cidade
    float densidade_populacional2; // densidade populacional (população/área)
    float pib_per_capita2; // PIB per capita (PIB/população)

    float super_poder1;
    float super_poder2;
// Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    // Cadastro do jogador 1
    printf("Jogador 1, insira os dados da sua cidade:\n"); 

    printf("Estado (A-H): ");
    scanf("%s", estado1);

    printf("Codigo da cidade (Ex: A01): ");
    scanf("%s", codigo1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);


    densidade_populacional1 = populacao1 / area1; // Calculando densidade populacional

    pib_per_capita1 = pib1 / populacao1; // Calculando PIB per capita

    printf("\n");

    // Cadastro do jogador 2
    printf("Jogador 2, insira os dados da sua cidade:\n");

    printf("Estado (A-H): ");
    scanf("%s", estado2);

    printf("Codigo da cidade (Ex: A01): ");
    scanf("%s", codigo2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = populacao2 / area2; // Calculando densidade populacional

    pib_per_capita2 = pib2 / populacao2; // Calculando PIB per capita

    printf("\n");
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------------------------------\n");
    printf("Dados das cidades cadastradas:\n");
    printf("-------------------------------\n");
    // Exibição dos dados do jogador 1
    printf("Dados da cidade do Jogador 1:\n");
    printf("Estado: %s\n", estado1);

    printf("Codigo da cidade: %s\n", codigo1);

    printf("Populacao: %d\n", populacao1);

    printf("Area (km2): %.2f\n", area1);

    printf("PIB (bilhoes): %.2f\n", pib1);

    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);

    printf("Densidade populacional (hab/km2): %.2f\n", densidade_populacional1);

    printf("PIB per capita (bilhoes/hab): %.6f\n", pib_per_capita1);

    printf("\n");
    
    // Exibição dos dados do jogador 2

    printf("----------------------------------\n");

    printf("Dados da cidade do Jogador 2:\n");
    printf("Estado: %s\n", estado2);

    printf("Codigo da cidade: %s\n", codigo2);
    
    printf("Populacao: %d\n", populacao2);

    printf("Area (km2): %.2f\n", area2);

    printf("PIB (bilhoes): %.2f\n", pib2);

    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);

    printf("Densidade populacional (hab/km2): %.2f\n", densidade_populacional2);

    printf("PIB per capita (bilhoes/hab): %.6f\n", pib_per_capita2);

    super_poder1 = (1/densidade_populacional1) + pib_per_capita1 + pontos_turisticos1;
    super_poder2 = (1/densidade_populacional2) + pib_per_capita2 + pontos_turisticos2;

    printf("\n");

    printf("-------------------------------\n");
    printf("Comparacao entre as cidades:\n");
    printf("-------------------------------\n");

    printf("\n");

    // Comparação dos Atributos:

    if (populacao1 > populacao2) {
        printf("Jogador 1 tem a cidade com maior populacao.\n");
    } else if (populacao1 < populacao2) {
        printf("Jogador 2 tem a cidade com maior populacao.\n");
    } else {
        printf("As cidades tem a mesma populacao.\n");
    }

    if (area1 > area2) {
        printf("Jogador 1 tem a cidade com maior area.\n");
    } else if (area1 < area2) {
        printf("Jogador 2 tem a cidade com maior area.\n");
    } else {
        printf("As cidades tem a mesma area.\n");
    }

    if (pib1 > pib2) {
        printf("Jogador 1 tem a cidade com maior PIB.\n");
    } else if (pib1 < pib2) {
        printf("Jogador 2 tem a cidade com maior PIB.\n");
    } else {
        printf("As cidades tem o mesmo PIB.\n");
    }

    if (pontos_turisticos1 > pontos_turisticos2) {
        printf("Jogador 1 tem a cidade com maior numero de pontos turisticos.\n");
    } else if (pontos_turisticos1 < pontos_turisticos2) {
        printf("Jogador 2 tem a cidade com maior numero de pontos turisticos.\n");
    } else {
        printf("As cidades tem o mesmo numero de pontos turisticos.\n");
    }

    
    if (densidade_populacional1 > densidade_populacional2) {
        printf("Jogador 1 tem a cidade com maior densidade populacional.\n");
    } else if (densidade_populacional1 < densidade_populacional2) {
        printf("Jogador 2 tem a cidade com maior densidade populacional.\n");
    } else {
        printf("As cidades tem a mesma densidade populacional.\n");
    }

    if (pib_per_capita1 > pib_per_capita2) {
        printf("Jogador 1 tem a cidade com maior PIB per capita.\n");
    } else if (pib_per_capita1 < pib_per_capita2) {
        printf("Jogador 2 tem a cidade com maior PIB per capita.\n");
    } else {
        printf("As cidades tem o mesmo PIB per capita.\n");
    }

    if (super_poder1 > super_poder2) {
        printf("Jogador 1 tem a cidade com maior super poder.\n");
    } else if (super_poder1 < super_poder2) {
        printf("Jogador 2 tem a cidade com maior super poder.\n");
    } else {
        printf("As cidades tem o mesmo super poder.\n");
    }
    
    printf("\n");

    system("pause");
    return 0;
}

// Nível Mestre, codigo completo.