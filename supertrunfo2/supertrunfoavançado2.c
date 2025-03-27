#include <stdio.h>
#include <string.h>  // Adiciona a biblioteca para usar strcpy

// Declarando as variáveis dos dois países
float populacao1, populacao2, area1, area2, pib1, pib2, densidade1, densidade2, pib_per_capita1, pib_per_capita2;
int pontos_turisticos1, pontos_turisticos2, super_poder1, super_poder2;
char pais1[50], pais2[50], atributo1[50];  // A variável atributo1 precisa ser uma string (char[])

// Função principal
int main() {
    int opcao1;
    float valor1, valor2;

    // Dados dos países (você pode preencher com os valores reais ou deixar como entrada)
    printf("Informe o nome do primeiro país: ");
    scanf("%s", pais1);
    printf("Informe o nome do segundo país: ");
    scanf("%s", pais2);

    // Definindo os valores (esses podem ser preenchidos com valores reais)
    printf("Informe a população de %s: ", pais1);
    scanf("%f", &populacao1);
    printf("Informe a população de %s: ", pais2);
    scanf("%f", &populacao2);

    printf("Informe a área de %s: ", pais1);
    scanf("%f", &area1);
    printf("Informe a área de %s: ", pais2);
    scanf("%f", &area2);

    printf("Informe o PIB de %s: ", pais1);
    scanf("%f", &pib1);
    printf("Informe o PIB de %s: ", pais2);
    scanf("%f", &pib2);

    printf("Informe a densidade populacional de %s: ", pais1);
    scanf("%f", &densidade1);
    printf("Informe a densidade populacional de %s: ", pais2);
    scanf("%f", &densidade2);

    printf("Informe o PIB per capita de %s: ", pais1);
    scanf("%f", &pib_per_capita1);
    printf("Informe o PIB per capita de %s: ", pais2);
    scanf("%f", &pib_per_capita2);

    printf("Informe o número de pontos turísticos de %s: ", pais1);
    scanf("%d", &pontos_turisticos1);
    printf("Informe o número de pontos turísticos de %s: ", pais2);
    scanf("%d", &pontos_turisticos2);

    printf("Informe o valor do super poder de %s: ", pais1);
    scanf("%d", &super_poder1);
    printf("Informe o valor do super poder de %s: ", pais2);
    scanf("%d", &super_poder2);

    // Exibindo menu para escolha dos atributos a serem comparados
    printf("Escolha dois atributos para comparar:\n");
    printf("1. População + Área\n");
    printf("2. População + PIB\n");
    printf("3. População + Densidade Populacional\n");
    printf("4. População + PIB per Capita\n");
    printf("5. População + Pontos Turísticos\n");
    printf("6. População + Super Poder\n");
    printf("7. Área + PIB\n");
    printf("8. Área + Densidade Populacional\n");
    printf("9. Área + PIB per Capita\n");
    printf("10. Área + Pontos Turísticos\n");
    printf("11. Área + Super Poder\n");
    printf("12. PIB + Densidade Populacional\n");
    printf("13. PIB + PIB per Capita\n");
    printf("14. PIB + Pontos Turísticos\n");
    printf("15. PIB + Super Poder\n");
    printf("16. Densidade Populacional + PIB per Capita\n");
    printf("17. Densidade Populacional + Pontos Turísticos\n");
    printf("18. Densidade Populacional + Super Poder\n");
    printf("19. PIB per Capita + Pontos Turísticos\n");
    printf("20. PIB per Capita + Super Poder\n");
    printf("21. Pontos Turísticos + Super Poder\n");
    printf("Escolha a opção (1 a 21): ");
    scanf("%d", &opcao1);

    // Lógica de comparação com base na escolha do jogador
    switch(opcao1) {
        case 1:
            valor1 = populacao1 + area1;
            valor2 = populacao2 + area2;
            strcpy(atributo1, "População + Área");
            break;
        case 2:
            valor1 = populacao1 + pib1;
            valor2 = populacao2 + pib2;
            strcpy(atributo1, "População + PIB");
            break;
        case 3:
            valor1 = populacao1 + densidade1;
            valor2 = populacao2 + densidade2;
            strcpy(atributo1, "População + Densidade Populacional");
            break;
        case 4:
            valor1 = populacao1 + pib_per_capita1;
            valor2 = populacao2 + pib_per_capita2;
            strcpy(atributo1, "População + PIB per Capita");
            break;
        case 5:
            valor1 = populacao1 + pontos_turisticos1;
            valor2 = populacao2 + pontos_turisticos2;
            strcpy(atributo1, "População + Pontos Turísticos");
            break;
        case 6:
            valor1 = populacao1 + super_poder1;
            valor2 = populacao2 + super_poder2;
            strcpy(atributo1, "População + Super Poder");
            break;
        case 7:
            valor1 = area1 + pib1;
            valor2 = area2 + pib2;
            strcpy(atributo1, "Área + PIB");
            break;
        case 8:
            valor1 = area1 + densidade1;
            valor2 = area2 + densidade2;
            strcpy(atributo1, "Área + Densidade Populacional");
            break;
        case 9:
            valor1 = area1 + pib_per_capita1;
            valor2 = area2 + pib_per_capita2;
            strcpy(atributo1, "Área + PIB per Capita");
            break;
        case 10:
            valor1 = area1 + pontos_turisticos1;
            valor2 = area2 + pontos_turisticos2;
            strcpy(atributo1, "Área + Pontos Turísticos");
            break;
        case 11:
            valor1 = area1 + super_poder1;
            valor2 = area2 + super_poder2;
            strcpy(atributo1, "Área + Super Poder");
            break;
        case 12:
            valor1 = pib1 + densidade1;
            valor2 = pib2 + densidade2;
            strcpy(atributo1, "PIB + Densidade Populacional");
            break;
        case 13:
            valor1 = pib1 + pib_per_capita1;
            valor2 = pib2 + pib_per_capita2;
            strcpy(atributo1, "PIB + PIB per Capita");
            break;
        case 14:
            valor1 = pib1 + pontos_turisticos1;
            valor2 = pib2 + pontos_turisticos2;
            strcpy(atributo1, "PIB + Pontos Turísticos");
            break;
        case 15:
            valor1 = pib1 + super_poder1;
            valor2 = pib2 + super_poder2;
            strcpy(atributo1, "PIB + Super Poder");
            break;
        case 16:
            valor1 = densidade1 + pib_per_capita1;
            valor2 = densidade2 + pib_per_capita2;
            strcpy(atributo1, "Densidade Populacional + PIB per Capita");
            break;
        case 17:
            valor1 = densidade1 + pontos_turisticos1;
            valor2 = densidade2 + pontos_turisticos2;
            strcpy(atributo1, "Densidade Populacional + Pontos Turísticos");
            break;
        case 18:
            valor1 = densidade1 + super_poder1;
            valor2 = densidade2 + super_poder2;
            strcpy(atributo1, "Densidade Populacional + Super Poder");
            break;
        case 19:
            valor1 = pib_per_capita1 + pontos_turisticos1;
            valor2 = pib_per_capita2 + pontos_turisticos2;
            strcpy(atributo1, "PIB per Capita + Pontos Turísticos");
            break;
        case 20:
            valor1 = pib_per_capita1 + super_poder1;
            valor2 = pib_per_capita2 + super_poder2;
            strcpy(atributo1, "PIB per Capita + Super Poder");
            break;
        case 21:
            valor1 = pontos_turisticos1 + super_poder1;
            valor2 = pontos_turisticos2 + super_poder2;
            strcpy(atributo1, "Pontos Turísticos + Super Poder");
            break;
        default:
            printf("Opção inválida!\n");
            return 1;
    }

    // Comparação e exibição do resultado
    printf("\nResultado da comparação entre %s e %s em %s:\n", pais1, pais2, atributo1);
    printf("%s: %.2f\n", pais1, valor1);
    printf("%s: %.2f\n", pais2, valor2);

    if (valor1 > valor2) {
        printf("%s é maior em %s!\n", pais1, atributo1);
    } else if (valor1 < valor2) {
        printf("%s é maior em %s!\n", pais2, atributo1);
    } else {
        printf("Ambos os países são iguais em %s.\n", atributo1);
    }

    return 0;
}
