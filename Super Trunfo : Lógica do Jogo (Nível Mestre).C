#include <stdio.h>

int main() {
    // Variáveis da carta 1
    char pais1[20];
    int pontos1;
    unsigned int populacao1;
    float area1, pib1, densidade1;

    // Variáveis da carta 2
    char pais2[20];
    int pontos2;
    unsigned int populacao2;
    float area2, pib2, densidade2;

    int atributo1, atributo2;

    // Entrada da carta 1
    printf("Digite os dados da Carta 1:\n");
    printf("Nome do país: ");
    scanf("%s", pais1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos1);
    printf("População: ");
    scanf("%u", &populacao1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    densidade1 = populacao1 / area1;

    // Entrada da carta 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Nome do país: ");
    scanf("%s", pais2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontos2);
    printf("População: ");
    scanf("%u", &populacao2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    densidade2 = populacao2 / area2;

    // Menu de seleção do primeiro atributo
    printf("\nESCOLHA O PRIMEIRO ATRIBUTO:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
    scanf("%d", &atributo1);

    // Menu de seleção do segundo atributo (usando switch)
    printf("\nESCOLHA O SEGUNDO ATRIBUTO (diferente do primeiro):\n");

    switch (atributo1) {
        case 1:
            printf("2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
            break;
        case 2:
            printf("1 - População\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
            break;
        case 3:
            printf("1 - População\n2 - Área\n4 - Pontos turísticos\n5 - Densidade demográfica\n");
            break;
        case 4:
            printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade demográfica\n");
            break;
        case 5:
            printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n");
            break;
        default:
            printf("Atributo inválido!\n");
            return 1;
    }

    scanf("%d", &atributo2);

    // Verificação
    if (atributo2 == atributo1 || atributo2 < 1 || atributo2 > 5) {
        printf("Erro: o segundo atributo deve ser diferente e válido.\n");
        return 1;
    }

    // Coletando valores dos atributos
    float v1_a1, v2_a1, v1_a2, v2_a2;
    char nome_a1[30], nome_a2[30];

    // Primeiro atributo
    switch (atributo1) {
        case 1: v1_a1 = populacao1; v2_a1 = populacao2; sprintf(nome_a1, "População"); break;
        case 2: v1_a1 = area1;      v2_a1 = area2;      sprintf(nome_a1, "Área"); break;
        case 3: v1_a1 = pib1;       v2_a1 = pib2;       sprintf(nome_a1, "PIB"); break;
        case 4: v1_a1 = pontos1;    v2_a1 = pontos2;    sprintf(nome_a1, "Pontos turísticos"); break;
        case 5: v1_a1 = densidade1; v2_a1 = densidade2; sprintf(nome_a1, "Densidade demográfica"); break;
    }

    // Segundo atributo
    switch (atributo2) {
        case 1: v1_a2 = populacao1; v2_a2 = populacao2; sprintf(nome_a2, "População"); break;
        case 2: v1_a2 = area1;      v2_a2 = area2;      sprintf(nome_a2, "Área"); break;
        case 3: v1_a2 = pib1;       v2_a2 = pib2;       sprintf(nome_a2, "PIB"); break;
        case 4: v1_a2 = pontos1;    v2_a2 = pontos2;    sprintf(nome_a2, "Pontos turísticos"); break;
        case 5: v1_a2 = densidade1; v2_a2 = densidade2; sprintf(nome_a2, "Densidade demográfica"); break;
    }

    // Exibindo os valores dos atributos escolhidos
    printf("\nAtributos comparados:\n");
    printf("%s - Carta 1: %.2f | Carta 2: %.2f\n", nome_a1, v1_a1, v2_a1);
    printf("%s - Carta 1: %.2f | Carta 2: %.2f\n", nome_a2, v1_a2, v2_a2);

    // Pontuação individual por atributo
    int pontos_c1 = 0, pontos_c2 = 0;

    // Comparação do primeiro atributo
    if (atributo1 == 5) {
        (v1_a1 < v2_a1) ? (pontos_c1++) : (v1_a1 > v2_a1 ? pontos_c2++ : 0);
    } else {
        (v1_a1 > v2_a1) ? (pontos_c1++) : (v1_a1 < v2_a1 ? pontos_c2++ : 0);
    }

    // Comparação do segundo atributo
    if (atributo2 == 5) {
        (v1_a2 < v2_a2) ? (pontos_c1++) : (v1_a2 > v2_a2 ? pontos_c2++ : 0);
    } else {
        (v1_a2 > v2_a2) ? (pontos_c1++) : (v1_a2 < v2_a2 ? pontos_c2++ : 0);
    }

    // Soma total dos atributos
    float soma1 = v1_a1 + v1_a2;
    float soma2 = v2_a1 + v2_a2;

    // Resultado final
    printf("\n========= RESULTADO FINAL =========\n");
    printf("Soma dos atributos - %s: %.2f\n", pais1, soma1);
    printf("Soma dos atributos - %s: %.2f\n", pais2, soma2);

    if (soma1 > soma2)
        printf("VENCEDORA: Carta 1 (%s)\n", pais1);
    else if (soma2 > soma1)
        printf("VENCEDORA: Carta 2 (%s)\n", pais2);
    else
        printf("EMPATE!\n");

    return 0;
}
