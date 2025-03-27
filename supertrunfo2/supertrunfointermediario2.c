#include <stdio.h>
#include <string.h> // Para usar funções de string

int main() {
    // Declaração de variáveis para a primeira carta
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

    // Declaração de variáveis para a segunda carta
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

    // Menu interativo para escolher o atributo a ser comparado
    int opcao;
    printf("\nEscolha o atributo para comparar as cartas:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Densidade Populacional\n");
    printf("5. PIB per Capita\n");
    printf("6. Pontos Turísticos\n");
    printf("7. Super Poder\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    float valor1, valor2;
    const char *atributo;

    switch(opcao) {
        case 1: // População
            valor1 = populacao1;
            valor2 = populacao2;
            atributo = "População";
            break;
        case 2: // Área
            valor1 = area1;
            valor2 = area2;
            atributo = "Área";
            break;
        case 3: // PIB
            valor1 = pib1;
            valor2 = pib2;
            atributo = "PIB";
            break;
        case 4: // Densidade Populacional
            valor1 = densidade1;
            valor2 = densidade2;
            atributo = "Densidade Populacional";
            break;
        case 5: // PIB per Capita
            valor1 = pib_per_capita1;
            valor2 = pib_per_capita2;
            atributo = "PIB per Capita";
            break;
        case 6: // Pontos Turísticos
            valor1 = pontos_turisticos1;
            valor2 = pontos_turisticos2;
            atributo = "Pontos Turísticos";
            break;
        case 7: // Super Poder
            valor1 = super_poder1;
            valor2 = super_poder2;
            atributo = "Super Poder";
            break;
        default:
            printf("Opção inválida!\n");
            return 0;
    }

    // Exibição dos resultados de comparação
    printf("\nComparação pelo atributo: %s\n", atributo);
    printf("%s: %.2f vs %s: %.2f\n", nome1, valor1, nome2, valor2);

    // Lógica de comparação
    if (opcao == 4) { // Para a densidade populacional, a regra inverte
        if (valor1 < valor2) {
            printf("%s venceu! Quanto à %s\n", nome1, atributo);
        } else if (valor1 > valor2) {
            printf("%s venceu! Quanto à %s\n", nome2, atributo);
        } else {
            printf("Empate!\n");
        }
    } else {
        if (valor1 > valor2) {
            printf("%s venceu! Quanto à %s\n", nome1, atributo);
        } else if (valor1 < valor2) {
            printf("%s venceu! Quanto à %s\n", nome2, atributo);
        } else {
            printf("Empate!\n");
        }
    }

    return 0;
}