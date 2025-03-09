#include <stdio.h>

int main() {
    // Variáveis para a Carta 1
    char estado1;
    char codigo1[4]; // 3 caracteres + '\0' para o terminador de string
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Solicitar dados da Carta 1
    printf("Digite os dados da Carta 1:\n");

    printf("Estado (A-H):A");
    scanf(" %c", &estado1);

    printf("Código da Carta (ex: A01): A01");
    scanf("%s", codigo1);

    printf("Nome da Cidade: SAO PAULO");
    scanf(" %[^\n]", cidade1); // Lê a linha inteira, incluindo espaços

    printf("População: 12325000");
    scanf("%d", &populacao1);

    printf("Área (em km²): 152111");
    scanf("%f", &area1);

    printf("PIB (em bilhões de reais): 69928");
    scanf("%f", &pib1);

    printf("Número de Pontos Turísticos: 50");
    scanf("%d", &pontos_turisticos1);

    // Solicitar dados da Carta 2
    printf("\nDigite os dados da Carta 2:\n");

    printf("Estado (A-H): B");
    scanf(" %c", &estado2);

    printf("Código da Carta (ex: B02): B02");
    scanf("%s", codigo2);

    printf("Nome da Cidade: RIO DE JANEIRO");
    scanf(" %[^\n]", cidade2);

    printf("População: 6748000");
    scanf("%d", &populacao2);

    printf("Área (em km²): 120025");
    scanf("%f", &area2);

    printf("PIB (em bilhões de reais): 30050");
    scanf("%f", &pib2);

    printf("Número de Pontos Turísticos: 30");
    scanf("%d", &pontos_turisticos2);

    // Exibir os dados da Carta 1
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    // Exibir os dados da Carta 2
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}