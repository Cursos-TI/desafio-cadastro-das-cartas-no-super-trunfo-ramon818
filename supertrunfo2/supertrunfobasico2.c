#include <stdio.h>
#include <string.h> // Para usar funções de string

int main() {
    // Declaração de variáveis para a primeira cidade
    char estado1[50], codigo1[10], nome1[50];
    float populacao1, area1, pib1, densidade1, pib_per_capita1;
    int pontos_turisticos1;
    float super_poder1; // Variável de super poder

    // Entrada de dados da primeira cidade
    printf("Informe o estado da primeira cidade: ");
    scanf(" %[^\n]", estado1);
    printf("Informe o código da primeira cidade: ");
    scanf("%s", codigo1);
    printf("Informe o nome da primeira cidade: ");
    scanf(" %[^\n]", nome1);
    printf("Informe a população da primeira cidade: ");
    scanf("%f", &populacao1);
    printf("Informe a área da primeira cidade (km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da primeira cidade (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);

    // Cálculo da densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Cálculo do super poder
    super_poder1 = populacao1 + area1 + pib1 + densidade1 + pib_per_capita1 + pontos_turisticos1;

    // Declaração de variáveis para a segunda cidade
    char estado2[50], codigo2[10], nome2[50];
    float populacao2, area2, pib2, densidade2, pib_per_capita2;
    int pontos_turisticos2;
    float super_poder2; // Variável de super poder

    // Entrada de dados da segunda cidade
    printf("\nInforme o estado da segunda cidade: ");
    scanf(" %[^\n]", estado2);
    printf("Informe o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Informe o nome da segunda cidade: ");
    scanf(" %[^\n]", nome2);
    printf("Informe a população da segunda cidade: ");
    scanf("%f", &populacao2);
    printf("Informe a área da segunda cidade (km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da segunda cidade (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculo da densidade populacional e PIB per capita
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;

    // Cálculo do super poder
    super_poder2 = populacao2 + area2 + pib2 + densidade2 + pib_per_capita2 + pontos_turisticos2;

    // Exibição dos resultados
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("População: %.0f\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %.0f\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Comparações
    printf("\nComparações:\n");
    printf("População 1 > População 2: %d\n", populacao1 > populacao2);
    printf("Área 1 > Área 2: %d\n", area1 > area2);
    printf("PIB 1 > PIB 2: %d\n", pib1 > pib2);
    printf("Densidade 1 > Densidade 2: %d\n", densidade1 > densidade2);
    printf("PIB per Capita 1 > PIB per Capita 2: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Pontos Turísticos 1 > Pontos Turísticos 2: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Super Poder 1 > Super Poder 2: %d\n", super_poder1 > super_poder2);

    // Comparações para determinar o vencedor.
    if(populacao1 > populacao2){
        printf("%s venceu! quanto à população\n", nome1);    
    } else {
        printf("%s venceu! quanto à população\n", nome2);    
    }

    if(area1 > area2){
        printf("%s venceu! quanto à área.\n", nome1);
    } else {
        printf("%s venceu! quanto à área.\n", nome2);    
    }

    if(pib1 > pib2){
        printf("%s venceu! quanto ao PIB.\n", nome1);    
    } else {
        printf("%s venceu! quanto ao PIB.\n", nome2);    
    }

    if(densidade1 < densidade2){  
        printf("%s venceu! quanto à densidade.\n", nome1);
    } else {
        printf("%s venceu! quanto à densidade.\n", nome2);    
    }

    if(pib_per_capita1 > pib_per_capita2){
        printf("%s venceu! quanto ao PIB per capita.\n", nome1);
    } else {
        printf("%s venceu! quanto ao PIB per capita.\n", nome2);
    }

    if(pontos_turisticos1 > pontos_turisticos2){
        printf("%s venceu! quanto aos pontos turísticos.\n", nome1);
    } else {
        printf("%s venceu! quanto aos pontos turísticos.\n", nome2);
    }

    if(super_poder1 > super_poder2){
        printf("%s venceu! quanto ao super poder.\n", nome1);
    } else {
        printf("%s venceu! quanto ao super poder.\n", nome2);
    }

    return 0;
}
