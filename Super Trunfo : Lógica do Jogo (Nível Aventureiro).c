
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Variáveis da carta 1
    char pais1[20];
    int pontosturisticos1; 
    unsigned int populacao1;
    float area1, pib1, densidadepopulacional1; 
        
    // Variáveis da carta 2
    char pais2[20];
    int pontosturisticos2; 
    unsigned int populacao2;
    float area2, pib2, densidadepopulacional2;

    //Atributo escolhido para comparação
    int atributoEscolhido;

    // Leitura de dados da carta 1
    printf("------------------DIGITE OS DADOS DA CARTA 1---------------------\n");
    printf("Informe o país:\n");
    scanf("%s", pais1);
    printf("Informe quantos pontos turísticos tem no país:\n");
    scanf("%d", &pontosturisticos1);
    printf("Informe o numero de habitantes do país:\n");
    scanf("%u", &populacao1);
    printf("Informe a área do país:\n");
    scanf("%f", &area1);
    printf("Informe o pib do país:\n");
    scanf("%f", &pib1);

    densidadepopulacional1 = populacao1 / area1;

    // Leitura de dados da carta 2
    printf("------------------DIGITE OS DADOS DA CARTA 2---------------------\n");
    getchar();
    printf("Informe o país:\n");
    scanf("%s", pais2);
    printf("Informe quantos pontos turísticos tem no país:\n");
    scanf("%d", &pontosturisticos2);
    printf("Informe o numero de habitantes do país:\n");
    scanf("%u", &populacao2);
    printf("Informe a área do país:\n");
    scanf("%f", &area2);
    printf("Informe o pib do país:\n");
    scanf("%f", &pib2);
   
    densidadepopulacional2 = populacao2 / area2;

    printf("Escolha qual atributo quer comparar:\n");
    printf("Digite (1) para comparar pela população;\n");
    printf("Digite (2) para comparar pela área;\n");
    printf("Digite (3) para comparar pelo pib;\n");
    printf("Digite (4) para comparar pelo número de pontos turísticos;\n");
    printf("Digite (5) para comparar pela densidade demográfica;\n\n");
    scanf("%d", &atributoEscolhido);   

    printf("\nCarta 1 - %s\n", pais1);
    printf("Carta 2 - %s\n", pais2);

    switch (atributoEscolhido)
    {
        case 1:
            printf("\nComparação de cartas (Atributo Escolhido: População)\n");
            break;

        case 2:
            printf("\nComparação de cartas (Atributo Escolhido: Área)\n");
            break;

        case 3:
            printf("\nComparação de cartas (Atributo Escolhido: PIB)\n");
            break;

        case 4:
            printf("\nComparação de cartas (Atributo Escolhido: Pontos Turísticos)\n");
            break;

        case 5:
            printf("\nComparação de cartas (Atributo Escolhido: Densidade Demográfica)\n");
            break;
        
        default:
            printf("Opção inválida!");
            break;
    }

        // Dados da CARTA 1
    printf("\n--------------------CARTA 1---------------------- \n");
    printf("País: %s \n", pais1);
    printf("População: %u \n", populacao1);
    printf("Área: %f km² \n", area1);
    printf("PIB: %f Bilhões de Reais \n", pib1);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos1); 
    printf("Densidade Populacional: %f hab/km² \n", densidadepopulacional1);
    
    // Dados da CARTA 2
    printf("\n--------------------CARTA 2----------------------\n");
    printf("País: %s \n", pais2);
    printf("População: %u \n", populacao2);
    printf("Área: %f km² \n", area2);
    printf("PIB: %f Bilhões de Reais \n", pib2);
    printf("Número de Pontos Turísticos: %d \n", pontosturisticos2);
    printf("Densidade Populacional: %f hab/km² \n\n", densidadepopulacional2); 

    switch (atributoEscolhido)
    {
        case 1:
            if (populacao1 > populacao2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Empate!");
            }
            break;

        case 2:
            if (area1 > area2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Empate!");
            }
            break;

        case 3:
            if (pib1 > pib2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Empate!");
            }
            break;

        case 4:
            if (pontosturisticos1 > pontosturisticos2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Empate!");
            }
            break;

        case 5:
            if (densidadepopulacional1 < densidadepopulacional2){
                printf("Resultado: Carta 1 (%s) venceu!\n", pais1);
            } else if (densidadepopulacional2 > densidadepopulacional1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", pais2);
            } else {
                printf("Empate!");
            }
            break;
        
        default:
            printf("Opção inválida!");
            break;
    }

    return 0;
}
