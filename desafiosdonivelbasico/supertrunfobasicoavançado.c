#include <stdio.h>

// Estrutura para armazenar os dados da carta
typedef struct {
    char nome[50];
    unsigned long int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular a densidade populacional e o PIB per capita
void calcularAtributos(Carta *carta) {
    carta->densidade_populacional = carta->populacao / carta->area;
    carta->pib_per_capita = carta->pib / carta->populacao;
    carta->super_poder = carta->populacao + carta->area + carta->pib + carta->pontos_turisticos + carta->pib_per_capita + (1.0f / carta->densidade_populacional);
}

// Função para comparar atributos
void compararAtributos(Carta c1, Carta c2) {
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", c1.populacao > c2.populacao ? 1 : 2, c1.populacao > c2.populacao);
    printf("Área: Carta %d venceu (%d)\n", c1.area > c2.area ? 1 : 2, c1.area > c2.area);
    printf("PIB: Carta %d venceu (%d)\n", c1.pib > c2.pib ? 1 : 2, c1.pib > c2.pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos ? 1 : 2, c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", c1.densidade_populacional < c2.densidade_populacional ? 1 : 2, c1.densidade_populacional < c2.densidade_populacional);
    printf("PIB per Capita: Carta %d venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita ? 1 : 2, c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta %d venceu (%d)\n", c1.super_poder > c2.super_poder ? 1 : 2, c1.super_poder > c2.super_poder);
}

int main() {
    Carta carta1, carta2;

    // Entrada de dados para a Carta 1
    printf("Digite o nome da Carta 1: ");
    scanf("%49s", carta1.nome);
    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta1.area);
    printf("Digite o PIB: ");
    scanf("%lf", &carta1.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontos_turisticos);
    calcularAtributos(&carta1);

    // Entrada de dados para a Carta 2
    printf("\nDigite o nome da Carta 2: ");
    scanf("%49s", carta2.nome);
    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);
    printf("Digite a área: ");
    scanf("%f", &carta2.area);
    printf("Digite o PIB: ");
    scanf("%lf", &carta2.pib);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontos_turisticos);
    calcularAtributos(&carta2);

    // Comparação das cartas
    compararAtributos(carta1, carta2);

    return 0;
}