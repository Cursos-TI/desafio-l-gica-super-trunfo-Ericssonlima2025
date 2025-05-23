#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int pontosturisticos1; 
    unsigned int populacao1;
    float area1, pib1, densidadepopulacional1, pibpercapita1, densidadepopulacionalInversa1; 
    float superPoder1;
        
    // Variáveis da carta 2
    char estado2;
    char codigo2[5];
    char cidade2[20];
    int pontosturisticos2; 
    unsigned int populacao2;
    float area2, pib2, densidadepopulacional2, pibpercapita2, densidadepopulacionalInversa2; 
    float superPoder2;

    // Leitura de dados da carta 1
    printf("------------------DIGITE OS DADOS DA CARTA 1---------------------\n");
    printf("Informe o estado:\n");
    scanf("%c", &estado1);
    printf("informe o código:\n");
    scanf("%s", codigo1);
    getchar();
    printf("Informe a cidade:\n");
    fgets(cidade1, 20, stdin);
    printf("Informe quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosturisticos1);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%u", &populacao1);
    printf("Informe a área da cidade:\n");
    scanf("%f", &area1);
    printf("Informe o pib da cidade:\n");
    scanf("%f", &pib1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = (float) pib1 / populacao1;
    densidadepopulacionalInversa1 = area1 / populacao1;
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosturisticos1 + pibpercapita1 + densidadepopulacionalInversa1;

    // Leitura de dados da carta 2
    printf("------------------DIGITE OS DADOS DA CARTA 2---------------------\n");
    getchar();
    printf("Informe o estado:\n");
    scanf("%c", &estado2);
    printf("informe o código:\n");
    scanf("%s", codigo2);
    getchar();
    printf("Informe a cidade:\n");
    fgets(cidade2, 20, stdin);
    printf("Informe quantos pontos turísticos tem na cidade:\n");
    scanf("%d", &pontosturisticos2);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%u", &populacao2);
    printf("Informe a área da cidade:\n");
    scanf("%f", &area2);
    printf("Informe o pib da cidade:\n");
    scanf("%f", &pib2);
   
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = (float) pib2 / populacao2;
    densidadepopulacionalInversa2 = area2 / populacao2;
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosturisticos2 + pibpercapita2 + densidadepopulacionalInversa2;

        // Dados da CARTA 1
    printf("\n--------------------CARTA 1---------------------- \n");
    printf("Estado: %c \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %u \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f bilhões de reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1); 
    printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional1);
    printf("PIB per Carpita: %f reais \n", pibpercapita1);
    printf("Super Poder: %.2f\n", superPoder1);
    
    // Dados da CARTA 2
    printf("\n--------------------CARTA 2----------------------\n");
    printf("Estado: %c \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %u \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f bilhões de reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional2);
    printf("PIB per Carpita: %f reais \n", pibpercapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Resultado final
    printf("\nComparação de cartas (Atributo: População):\n");

    printf("Carta 1 - %s: %u\n", cidade1, populacao1);
    printf("Carta 2 - %s: %u\n", cidade2, populacao2);

    // Comparação de resultados
     if (populacao1 > populacao2){
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
     } else {
          printf("Resultado: Carta 1 (%s) venceu!\n", cidade2);
     }

     return 0;
}

