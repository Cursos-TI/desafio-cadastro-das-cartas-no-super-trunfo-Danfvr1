#include <stdio.h>
#include <string.h>

// TESTE Daniel

int main(){
  // Dados da primeira carta estado1
    char estado1[50] = "A"; // Aqui estou me referindo ao estado do Rio de janeiro
    char codigocarta1[50] = "A01";
    char cidade1[50] = "Volta Redonda";
    int populacao1 = 261563;
    float km1 = 182.483;
    float pib1 = 19.600;
    int pt1 = 8; // pt > abreviaçao de ponto turistico

// exibindo os dados da carta 1
    printf("----DADOS DA CARTA----\n");

    printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigocarta1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3f Km²\n", km1);
    printf("PIB: %.3f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pt1);

// Dados da segunda carta estado2
    char estado2[50] = "B"; // Aqui estou me referindo ao estado de São Paulo
    char codigocarta2[50] = "B02";
    char cidade2[50] = "São José do Barreiro";
    int populacao2 = 3800;
    float km2 = 570;
    float pib2 = 63.300;
    int pt2 = 10; // pt > abreviaçao de ponto turistico

    printf("\n"); // adiciona uma linha em branco para separar

// exibindo os dados da carta 2
    printf("----DADOS DA CARTA----\n");

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigocarta2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.f Km²\n", km2);
    printf("PIB: %.3f milhoes de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pt2);

    return 0;
}