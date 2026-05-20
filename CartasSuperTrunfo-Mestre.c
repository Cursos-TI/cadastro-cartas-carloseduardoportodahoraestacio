#include <stdio.h>

int main() {

    /* ══════════════════════════════════════
       VARIÁVEIS — CARTA 1
    ══════════════════════════════════════ */
    char     estado1;
    int      numero1;
    char     cidade1[50];
    long int populacao1;
    float    area1;
    float    pib1;
    int      pontos_turisticos1;
    float    densidade1;
    float    pib_per_capita1;
    double   super_poder1;

    /* ══════════════════════════════════════
       VARIÁVEIS — CARTA 2
    ══════════════════════════════════════ */
    char     estado2;
    int      numero2;
    char     cidade2[50];
    long int populacao2;
    float    area2;
    float    pib2;
    int      pontos_turisticos2;
    float    densidade2;
    float    pib_per_capita2;
    double   super_poder2;

    /* ══════════════════════════════════════
       CADASTRO — CARTA 1
    ══════════════════════════════════════ */
    printf("===========================================\n");
    printf("    SUPER TRUNFO - PAISES | Nivel Mestre  \n");
    printf("===========================================\n\n");

    printf("---------- Cadastro da Carta 1 ----------\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &numero1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%ld", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    /* ══════════════════════════════════════
       CADASTRO — CARTA 2
    ══════════════════════════════════════ */
    printf("\n---------- Cadastro da Carta 2 ----------\n\n");

    printf("Estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Numero da cidade (1 a 4): ");
    scanf("%d", &numero2);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%ld", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    /* ══════════════════════════════════════
       CÁLCULOS — CARTA 1
    ══════════════════════════════════════ */
    densidade1      = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1e9f) / (float)populacao1;
    super_poder1    = (double)populacao1
                   + (double)area1
                   + (double)pib1
                   + (double)pontos_turisticos1
                   + (double)densidade1
                   + (double)pib_per_capita1;

    /* ══════════════════════════════════════
       CÁLCULOS — CARTA 2
    ══════════════════════════════════════ */
    densidade2      = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1e9f) / (float)populacao2;
    super_poder2    = (double)populacao2
                   + (double)area2
                   + (double)pib2
                   + (double)pontos_turisticos2
                   + (double)densidade2
                   + (double)pib_per_capita2;

    /* ══════════════════════════════════════
       EXIBIÇÃO DAS CARTAS
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("         CARTAS CADASTRADAS               \n");
    printf("===========================================\n");

    /* — Carta 1 — */
    printf("\n+-----------------------------------------+\n");
    printf("|              CARTA 1                    |\n");
    printf("+-----------------------------------------+\n");
    printf("| Codigo             : %c0%d\n",      estado1, numero1);
    printf("| Cidade             : %s\n",         cidade1);
    printf("| Populacao          : %ld hab.\n",   populacao1);
    printf("| Area               : %.2f km2\n",   area1);
    printf("| PIB                : %.2f bi R$\n", pib1);
    printf("| Pontos turisticos  : %d\n",          pontos_turisticos1);
    printf("| Densidade popul.   : %.2f hab/km2\n", densidade1);
    printf("| PIB per capita     : R$ %.2f\n",    pib_per_capita1);
    printf("| Super Poder        : %.2f\n",        super_poder1);
    printf("+-----------------------------------------+\n");

    /* — Carta 2 — */
    printf("\n+-----------------------------------------+\n");
    printf("|              CARTA 2                    |\n");
    printf("+-----------------------------------------+\n");
    printf("| Codigo             : %c0%d\n",      estado2, numero2);
    printf("| Cidade             : %s\n",         cidade2);
    printf("| Populacao          : %ld hab.\n",   populacao2);
    printf("| Area               : %.2f km2\n",   area2);
    printf("| PIB                : %.2f bi R$\n", pib2);
    printf("| Pontos turisticos  : %d\n",          pontos_turisticos2);
    printf("| Densidade popul.   : %.2f hab/km2\n", densidade2);
    printf("| PIB per capita     : R$ %.2f\n",    pib_per_capita2);
    printf("| Super Poder        : %.2f\n",        super_poder2);
    printf("+-----------------------------------------+\n");

    /* ══════════════════════════════════════
       COMPARAÇÃO DAS CARTAS
       Regra: Densidade → menor vence
              Demais    → maior vence
    ══════════════════════════════════════ */
    printf("\n\n===========================================\n");
    printf("         RESULTADO DA COMPARACAO          \n");
    printf("===========================================\n\n");

    /* — População — */
    printf("Populacao          : ");
    if (populacao1 > populacao2)
        printf("Carta 1 vence! (%ld > %ld)\n", populacao1, populacao2);
    else if (populacao2 > populacao1)
        printf("Carta 2 vence! (%ld > %ld)\n", populacao2, populacao1);
    else
        printf("Empate! (%ld = %ld)\n", populacao1, populacao2);

    /* — Área — */
    printf("Area               : ");
    if (area1 > area2)
        printf("Carta 1 vence! (%.2f > %.2f)\n", area1, area2);
    else if (area2 > area1)
        printf("Carta 2 vence! (%.2f > %.2f)\n", area2, area1);
    else
        printf("Empate! (%.2f = %.2f)\n", area1, area2);

    /* — PIB — */
    printf("PIB                : ");
    if (pib1 > pib2)
        printf("Carta 1 vence! (%.2f > %.2f)\n", pib1, pib2);
    else if (pib2 > pib1)
        printf("Carta 2 vence! (%.2f > %.2f)\n", pib2, pib1);
    else
        printf("Empate! (%.2f = %.2f)\n", pib1, pib2);

    /* — Pontos turísticos — */
    printf("Pontos turisticos  : ");
    if (pontos_turisticos1 > pontos_turisticos2)
        printf("Carta 1 vence! (%d > %d)\n", pontos_turisticos1, pontos_turisticos2);
    else if (pontos_turisticos2 > pontos_turisticos1)
        printf("Carta 2 vence! (%d > %d)\n", pontos_turisticos2, pontos_turisticos1);
    else
        printf("Empate! (%d = %d)\n", pontos_turisticos1, pontos_turisticos2);

    /* — Densidade Populacional (menor vence) — */
    printf("Densidade popul.   : ");
    if (densidade1 < densidade2)
        printf("Carta 1 vence! (%.2f < %.2f) [menor e melhor]\n", densidade1, densidade2);
    else if (densidade2 < densidade1)
        printf("Carta 2 vence! (%.2f < %.2f) [menor e melhor]\n", densidade2, densidade1);
    else
        printf("Empate! (%.2f = %.2f)\n", densidade1, densidade2);

    /* — PIB per Capita — */
    printf("PIB per capita     : ");
    if (pib_per_capita1 > pib_per_capita2)
        printf("Carta 1 vence! (R$ %.2f > R$ %.2f)\n", pib_per_capita1, pib_per_capita2);
    else if (pib_per_capita2 > pib_per_capita1)
        printf("Carta 2 vence! (R$ %.2f > R$ %.2f)\n", pib_per_capita2, pib_per_capita1);
    else
        printf("Empate! (R$ %.2f = R$ %.2f)\n", pib_per_capita1, pib_per_capita2);

    /* — Super Poder — */
    printf("Super Poder        : ");
    if (super_poder1 > super_poder2)
        printf("Carta 1 vence! (%.2f > %.2f)\n", super_poder1, super_poder2);
    else if (super_poder2 > super_poder1)
        printf("Carta 2 vence! (%.2f > %.2f)\n", super_poder2, super_poder1);
    else
        printf("Empate! (%.2f = %.2f)\n", super_poder1, super_poder2);

    /* — Vencedor geral — */
    printf("\n-------------------------------------------\n");
    printf("VENCEDOR GERAL     : ");
    if (super_poder1 > super_poder2)
        printf("*** CARTA 1 - %s ***\n", cidade1);
    else if (super_poder2 > super_poder1)
        printf("*** CARTA 2 - %s ***\n", cidade2);
    else
        printf("*** EMPATE! ***\n");
    printf("-------------------------------------------\n\n");

    return 0;
}
