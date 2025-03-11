#include <stdio.h>

// Desafio Super Trunfo - Cidades
// Tema 1 - Cadastro das Cartas
// Este programa permite o cadastro de cartas de cidades com atributos específicos.

int main() {
    int codigo;
    char nome[50];
    int populacao;
    float area;
    double pib;
    int pontos_turisticos;
    
    // Solicitação de entrada do usuário
    printf("Digite o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome); // Captura nome com espaços
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);
    
    printf("Digite o PIB da cidade em bilhões: ");
    scanf("%lf", &pib);
    
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontos_turisticos);
    
    // Exibição dos dados cadastrados
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d habitantes\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    
    return 0;
}
