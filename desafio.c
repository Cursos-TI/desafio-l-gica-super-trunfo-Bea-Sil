
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

     // Menu interativo
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per Capita\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s e %s...\n", nome1, nome2);
    printf("---------------------------------------\n");

    switch (opcao) {
        case 1:
            printf("Atributo: População\n");
            printf("%s: %d habitantes\n", nome1, populacao1);
            printf("%s: %d habitantes\n", nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Atributo: Área\n");
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("Atributo: PIB\n");
            printf("%s: %.2f bilhões\n", nome1, pib1);
            printf("%s: %.2f bilhões\n", nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d pontos\n", nome1, pontosTuristicos1);
            printf("%s: %d pontos\n", nome2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Atributo: Densidade Populacional\n");
            printf("%s: %.2f hab/km²\n", nome1, densidade_populacional1);
            printf("%s: %.2f hab/km²\n", nome2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
                printf("Vencedor: %s (menor densidade vence)\n", nome1);
            else if (densidade_populacional2 < densidade_populacional1)
                printf("Vencedor: %s (menor densidade vence)\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 6:
            printf("Atributo: PIB per Capita\n");
            printf("%s: %.2f\n", nome1, pib_per_capta1);
            printf("%s: %.2f\n", nome2, pib_per_capta2);
            if (pib_per_capta1 > pib_per_capta2)
                printf("Vencedor: %s\n", nome1);
            else if (pib_per_capta2 > pib_per_capta1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    printf("---------------------------------------\n");
    printf("Fim da comparação.\n");


    return 0;
}
