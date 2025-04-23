#include <stdio.h>

// Estrutura da carta
typedef struct {
    char estado[50];
    int codigo;
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
} Carta;

// Função para imprimir uma carta
void imprimirCarta(Carta c) {
    printf("\n==== CARTA ====");
    printf("\nEstado/Regi\xC3\xA3o: %s", c.estado);
    printf("\nC\xC3\xB3digo: %d", c.codigo);
    printf("\nCidade: %s", c.nome_cidade);
    printf("\nPopula\xC3\xA7\xC3\xA3o: %d", c.populacao);
    printf("\n\xC3\x81rea (km\xC2\xB2): %.2f", c.area_km2);
    printf("\nPIB: R$ %.2f bilh\xC3\xB5es", c.pib);
    printf("\nPontos Tur\xC3\xADsticos: %d", c.pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km\xC2\xB2", c.densidade_populacional);
    printf("\nPIB per Capita: R$ %.2f\n", c.pib_per_capita);
}

int main() {
    Carta carta1, carta2;

    // Leitura da carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado/Regiao: ");
    scanf(" %[^\n]%*c", carta1.estado);
    printf("Codigo da Carta: ");
    scanf("%d%*c", &carta1.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta1.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area em KM2: ");
    scanf("%f", &carta1.area_km2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Cálculos carta 1
    carta1.densidade_populacional = carta1.populacao / carta1.area_km2;
    carta1.pib_per_capita = (carta1.pib * 1000000000) / carta1.populacao;

    // Leitura da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado/Regiao: ");
    scanf(" %[^\n]%*c", carta2.estado);
    printf("Codigo da Carta: ");
    scanf("%d%*c", &carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta2.nome_cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area em KM2: ");
    scanf("%f", &carta2.area_km2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos carta 2
    carta2.densidade_populacional = carta2.populacao / carta2.area_km2;
    carta2.pib_per_capita = (carta2.pib * 1000000000) / carta2.populacao;

    // Impressão das cartas
    printf("\n\n===== CARTAS CADASTRADAS =====\n");
    imprimirCarta(carta1);
    imprimirCarta(carta2);

    return 0;
}
