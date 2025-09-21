
#include <stdio.h>


int main() {
   // Carta 1
    char estado1;
    char codigo1 [10];
    char nome1 [50];
    int populacao1;
    float area1, pib1;
     int pontosTuristicos1;
    float densidade_populacional1;
    float pib_per_capta1;
    
    // Carta 2
    char estado2;
    char codigo2 [10];
    char nome2 [50];
    int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade_populacional2;
    float pib_per_capta2;

    char cidadevencedora [50];
    
    // Cadastro da carta 1
     printf("\n=== Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Código da carta (ex:A01): ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (Km²): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    pib_per_capta1 = pib1 / populacao1;
    densidade_populacional1 = (float) populacao1 / area1;

    
    // Cadastro carta 2
     printf("\n=== Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Código da carta (ex:A01): ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nome2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (Km²): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    pib_per_capta2 = pib2 / populacao2;
    densidade_populacional2 = (float) populacao2 / area2;

    // Exibir dados
    printf("\n=== Carta 1 ===\n");
    printf("Cidade: %s (%c)\n", nome1, estado1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f\n", pib_per_capta1);

    printf("\n=== Carta 2 ===\n");
    printf("Cidade: %s (%c)\n", nome2, estado2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f\n", pib_per_capta2);

    // Comparação (Pib)
      printf("\n Comparação de cartas (atributos: Populaçao): \n");

      printf("Carta 1 - %s (%c): %.2f\n", nome1,estado1,pib_per_capta1);
      printf("Carta 2 - %s (%c): %.2f\n", nome2,estado2,pib_per_capta2);

    if (pib1 > pib2) {
     printf("O Pib da cidade 1 é maior doque da cidade 2.\n");
    } else {
        printf("A cidade 2 tem o Pib maior.\n");
     }

    return 0;
}
