#include <stdio.h>

int main(){

    // variaveis da primeira carta

    char codigo1[3];
    char estado1[20];
    char cidade1[35];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapta1;

    //variaveis da segunda carta

    char codigo2[3];
    char estado2[20];
    char cidade2[35];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapta2;
    
    //Informações da primeira carta
    
    printf("Digite o codigo da primeira carta: ");    
    scanf("%s",codigo1);                                            //atribuir resposta ao codigo 1
    printf("o codigo é: %s \n", codigo1);                           //exibir resposta do codigo 1

    printf("Digite o estado da primeira carta: ");
    scanf("%s",estado1);                                            //atribuir resposta ao estado 1
    printf("o estado é: %s \n", estado1);                           //exibir resposta do estado 1
    
    printf("Digite o nome da cidade da primeira carta: ");
    scanf("%s", cidade1);                                           //atribuir resposta ao cidade 1
    printf("A cidade é: %s \n", cidade1);                           //exibir resposta do cidade 1

    printf("Digite a população da primeira carta: ");
    scanf("%d", &populacao1);                                       //atribuir resposta ao populacao1
    printf("A população é: %d\n",populacao1);                       //exibir resposta do populacao 1

    printf("Digite a area em km² da primeira carta: ");
    scanf("%f", &area1);                                            //atribuir resposta ao area 1
    printf("A area é: %.2f km²\n ", area1);                         //exibir resposta do area 1

    printf("Qual é o PIB da primeira carta: ");
    scanf("%f", &pib1);                                             //atribuir resposta ao pib 1
    printf("O PIB é: %.2f \n", pib1);                               //exibir resposta do pib 1

    printf("Quantos pontos turisticos tem? da primeira carta: ");
    scanf("%d", &pontosTuristicos1);                                //atribuir resposta ao pontosTuristicos 1
    printf("Existem %d Pontos Turisticos  \n", pontosTuristicos1);  //exibir resposta do pontosTuristicos 1

    densidadePopulacional1 = (float) populacao1 / area1;            //conversão da populacao1 pra float pra conseguir dividir pela area pra calcular a densidade populacional

    pibPerCapta1 = (float) populacao1 / pib1;                       //conversão da populacao1 pra float pra dividir pelo pib gerando o pib per capta 1

    // informações da segunda carta

    printf("Digite o codigo da segunda carta: ");
    scanf("%s",codigo2);                                            //atribuir resposta ao codigo 2
    printf("o codigo é: %s \n", codigo2);                           //exibir resposta do codigo 2

    printf("Digite o estado da segunda carta: ");
    scanf("%s",estado2);                                            //atribuir resposta ao estado 2
    printf("o estado é: %s \n", estado2);                           //exibir resposta do estado 2
    
    printf("Digite o nome da cidade da segunda carta: ");
    scanf("%s", cidade2);                                           //atribuir resposta ao cidade 2
    printf("A cidade é: %s \n", cidade2);                           //exibir resposta do cidade 2

    printf("Digite a população da segunda carta: ");
    scanf("%d", &populacao2);                                       //atribuir resposta ao populacao 2
    printf("A população é: %d\n",populacao2);                       //exibir resposta do populacao 2

    printf("Digite a area em km² da segunda carta: ");
    scanf("%f", &area2);                                            //atribuir resposta ao area 2
    printf("A area é: %.2f km²\n ", area2);                         //exibir resposta do area 2

    printf("Qual é o PIB da segunda carta: ");
    scanf("%f", &pib2);                                             //atribuir resposta ao pib 2
    printf("O PIB é: %.2f \n", pib2);                               //exibir resposta do pib 2

    printf("Quantos pontos turisticos tem? da segunda carta: ");
    scanf("%d", &pontosTuristicos2);                                //atribuir resposta ao pontos turisticos 2
    printf("Existem %d Pontos Turisticos  \n", pontosTuristicos2);  //exibir resposta do pontos turisticos 2

    densidadePopulacional2 = (float) populacao2 / area2;            //conversão da populacao2 pra float pra conseguir dividir pela area pra calcular a densidade populacional

    pibPerCapta2 = (float) populacao2 / pib2;                       //conversão da populacao2 pra float pra dividir pelo pib gerando o pib per capta 2

    printf("Informações da primeira carta\n");                      //exibir informações da primera carta
    printf("\n");

    printf("codigo da primeira carta: %s \n",codigo1);
    printf("Estado da primeira carta: %s \n",estado1);
    printf("nome da cidade da primeira carta: %s \n",cidade1);
    printf("a população da primeira carta: %d \n",populacao1);
    printf("a area da primeira carta: %.2f \n",area1);
    printf("o PIB da primeira carta: %.2f \n",pib1);
    printf("numero de pontos turisticos da primeira carta: %d \n",pontosTuristicos1);
    printf("a Densidade Populacional da primeira cidade é: %.2f \n", densidadePopulacional1);
    printf("o PIB per capta da primeira cidade é: %.2f \n", pibPerCapta1);

    printf("\n");
    printf("Informações da segunda carta\n");                      //exibir informações da segunda carta
    printf("\n");

    printf("codigo da segunda carta: %s \n",codigo2);
    printf("Estado da segunda carta: %s \n",estado2);
    printf("nome da cidade da segunda carta: %s \n",cidade2);
    printf("a população da segunda carta: %d \n",populacao2);
    printf("a area da segunda carta: %.2f \n",area2);
    printf("o PIB da segunda carta: %.2f \n",pib2);
    printf("numero de pontos turisticos da segunda carta: %d \n",pontosTuristicos2);
    printf("a Densidade Populacional da segunda cidade é: %.2f \n", densidadePopulacional2);
    printf("o PIB per capta da primeira cidade é: %.2f \n", pibPerCapta2);

    return 0;

} 
