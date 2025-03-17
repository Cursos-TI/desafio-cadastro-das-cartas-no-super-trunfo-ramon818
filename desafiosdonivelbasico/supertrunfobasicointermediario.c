

int main() {
    // Declaração de variáveis para a primeira carta
    char estado1[50], codigo1[10], nome1[50];
    float populacao1, area1, pib1, densidade1, pib_per_capita1;
    int pontos_turisticos1;
    
    // Entrada de dados da primeira carta
    printf("Informe o estado da primeira cidade: ");
    scanf("%s", estado1);
    printf("Informe o código da primeira cidade: ");
    scanf("%s", codigo1);
    printf("Informe o nome da primeira cidade: ");
    scanf("%s", nome1);
    printf("Informe a população da primeira cidade: ");
    scanf("%f", &populacao1);
    printf("Informe a área da primeira cidade (km²): ");
    scanf("%f", &area1);
    printf("Informe o PIB da primeira cidade (bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Informe o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cálculo da densidade populacional e PIB per capita da primeira cidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB de bilhões para reais
    
    // Declaração de variáveis para a segunda carta
    char estado2[50], codigo2[10], nome2[50];
    float populacao2, area2, pib2, densidade2, pib_per_capita2;
    int pontos_turisticos2;
    
    // Entrada de dados da segunda carta
    printf("\nInforme o estado da segunda cidade: ");
    scanf("%s", estado2);
    printf("Informe o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Informe o nome da segunda cidade: ");
    scanf("%s", nome2);
    printf("Informe a população da segunda cidade: ");
    scanf("%f", &populacao2);
    printf("Informe a área da segunda cidade (km²): ");
    scanf("%f", &area2);
    printf("Informe o PIB da segunda cidade (bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Informe o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita da segunda cidade
    densidade2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    
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
    
    return 0;
}