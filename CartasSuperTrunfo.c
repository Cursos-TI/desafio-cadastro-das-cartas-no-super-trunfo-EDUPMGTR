#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    //variaveis da primeira carta
    
    char codigo1[3];
    char estado1[20];
    char cidade1[35];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    //variaveis da segunda carta

    char codigo2[3];
    char estado2[20];
    char cidade2[35];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    
     //Informações da primeira carta
    
    printf("Digite o codigo da primeira carta: ");
    scanf("%s",codigo1);
    printf("o codigo é: %s \n", codigo1);

    printf("Digite o estado da primeira carta: ");
    scanf("%s",estado1);
    printf("o estado é: %s \n", estado1);
    
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);
    printf("A cidade é: %s \n", cidade1);

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);
    printf("A população é: %d\n",populacao1);

    printf("Digite a area em km² da primeira carta: ");
    scanf("%f", &area1);
    printf("A area é: %f km²\n ", area1);

    printf("Qual é o PIB da primeira carta: ");
    scanf("%f", &pib1);
    printf("O PIB é: %f \n", pib1);

    printf("Quantos pontos turisticos tem? da primeira carta: ");
    scanf("%d", &pontosTuristicos1);
    printf("Existem %d Pontos Turisticos  \n", pontosTuristicos1);

    // informações da segunda carta

    printf("Digite o codigo da segunda carta: ");
    scanf("%s",codigo2);
    printf("o codigo é: %s \n", codigo2);

    printf("Digite o estado da segunda carta: ");
    scanf("%s",estado2);
    printf("o estado é: %s \n", estado2);
    
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", cidade2);
    printf("A cidade é: %s \n", cidade2);

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);
    printf("A população é: %d\n",populacao2);

    printf("Digite a area em km² da segunda carta: ");
    scanf("%f", &area2);
    printf("A area é: %f km²\n ", area2);

    printf("Qual é o PIB da segunda carta: ");
    scanf("%f", &pib2);
    printf("O PIB é: %f \n", pib2);

    printf("Quantos pontos turisticos tem? da segunda carta: ");
    scanf("%d", &pontosTuristicos2);
    printf("Existem %d Pontos Turisticos  \n", pontosTuristicos2);

    printf("Informações da primeira carta\n");
    printf("\n");

    printf("codigo da primeira carta: %s \n",codigo1);
    printf("Estado da primeira carta: %s \n",estado1);
    printf("nome da cidade da primeira carta: %s \n",cidade1);
    printf("a população da primeira carta: %d \n",populacao1);
    printf("a area da primeira carta: %d \n",area1);
    printf("o PIB da primeira carta: %f \n",pib1);
    printf("numero de pontos turisticos da primeira carta: %d \n",pontosTuristicos1);

    printf("\n");
    printf("Informações da segunda carta\n");
    printf("\n");

    printf("codigo da segunda carta: %s \n",codigo2);
    printf("Estado da segunda carta: %s \n",estado2);
    printf("nome da cidade da segunda carta: %s \n",cidade2);
    printf("a população da segunda carta: %d \n",populacao2);
    printf("a area da segunda carta: %d \n",area2);
    printf("o PIB da segunda carta: %f \n",pib2);
    printf("numero de pontos turisticos da segunda carta: %d \n",pontosTuristicos2);

    return 0;
}
