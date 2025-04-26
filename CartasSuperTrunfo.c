#include <stdio.h>

// Estrutura da carta
typedef struct {
    char estado[50];
    int codigo;
    char nome_cidade[50];
    unsigned long int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
    float densidade_populacional;
    float pib_per_capita;
    float super_poder;
} Carta;

// Função para calcular densidade, PIB per capita e super poder
void calcularValores(Carta* c) {
    c->densidade_populacional = c->populacao / c->area_km2;
    c->pib_per_capita = (c->pib * 1000000000.0f) / c->populacao;
    c->super_poder = (float)c->populacao + c->area_km2 + (c->pib * 1000000000.0f) + c->pontos_turisticos + c->pib_per_capita + (1.0f / c->densidade_populacional);
}

// Função para imprimir uma carta
void imprimirCarta(Carta c) {
    printf("\n==== CARTA ====");
    printf("\nEstado/Regi\xC3\xA3o: %s", c.estado);
    printf("\nC\xC3\xB3digo: %d", c.codigo);
    printf("\nCidade: %s", c.nome_cidade);
    printf("\nPopula\xC3\xA7\xC3\xA3o: %lu", c.populacao);
    printf("\n\xC3\x81rea (km\xC2\xB2): %.2f", c.area_km2);
    printf("\nPIB: R$ %.2f bilh\xC3\xB5es", c.pib);
    printf("\nPontos Tur\xC3\xADsticos: %d", c.pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km\xC2\xB2", c.densidade_populacional);
    printf("\nPIB per Capita: R$ %.2f", c.pib_per_capita);
    printf("\nSuper Poder: %.2f\n", c.super_poder);
}

// Função para exibir comparações
void compararCartas(Carta c1, Carta c2) {
    printf("\n\n===== Comparação de Cartas =====\n");
    printf("Popula\xC3\xA7\xC3\xA3o: Carta 1 venceu (%d)\n", c1.populacao > c2.populacao);
    printf("\xC3\x81rea: Carta 1 venceu (%d)\n", c1.area_km2 > c2.area_km2);
    printf("PIB: Carta 1 venceu (%d)\n", c1.pib > c2.pib);
    printf("Pontos Tur\xC3\xADsticos: Carta 1 venceu (%d)\n", c1.pontos_turisticos > c2.pontos_turisticos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", c1.densidade_populacional < c2.densidade_populacional); // menor é melhor
    printf("PIB per Capita: Carta 1 venceu (%d)\n", c1.pib_per_capita > c2.pib_per_capita);
    printf("Super Poder: Carta 1 venceu (%d)\n", c1.super_poder > c2.super_poder);
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
    scanf("%lu", &carta1.populacao);
    printf("Area em KM2: ");
    scanf("%f", &carta1.area_km2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta1.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta1.pontos_turisticos);

    // Leitura da carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado/Regiao: ");
    scanf(" %[^\n]%*c", carta2.estado);
    printf("Codigo da Carta: ");
    scanf("%d%*c", &carta2.codigo);
    printf("Nome da Cidade: ");
    scanf(" %[^\n]%*c", carta2.nome_cidade);
    printf("Populacao: ");
    scanf("%lu", &carta2.populacao);
    printf("Area em KM2: ");
    scanf("%f", &carta2.area_km2);
    printf("PIB (em bilhoes): ");
    scanf("%f", &carta2.pib);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &carta2.pontos_turisticos);

    // Cálculos
    calcularValores(&carta1);
    calcularValores(&carta2);

    // Impressão
    printf("\n\n===== CARTAS CADASTRADAS =====\n");
    imprimirCarta(carta1);
    imprimirCarta(carta2);

    // Comparações
    compararCartas(carta1, carta2);

    return 0;
}
