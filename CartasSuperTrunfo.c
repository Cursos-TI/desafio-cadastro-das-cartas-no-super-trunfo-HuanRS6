#include <stdio.h>
#include <string.h>

#define MAX_CARTAS 100

// Estrutura da carta
typedef struct {
    char estado[50];
    int codigo;
    char nome_cidade[50];
    int populacao;
    float area_km2;
    float pib;
    int pontos_turisticos;
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
    printf("\nPontos Tur\xC3\xADsticos: %d\n", c.pontos_turisticos);
}

// Função para buscar uma carta por nome da cidade
void buscarCartaPorNome(Carta cartas[], int n, char nome[]) {
    int encontrou = 0;
    for (int i = 0; i < n; i++) {
        if (strcmp(cartas[i].nome_cidade, nome) == 0) {
            imprimirCarta(cartas[i]);
            encontrou = 1;
        }
    }
    if (!encontrou) {
        printf("\nCarta com cidade '%s' n\xC3\xA3o encontrada.\n", nome);
    }
}

int main() {
    int opcao, n = 0;
    Carta cartas[MAX_CARTAS];

    do {
        printf("\n===== MENU SUPER TRUNFO =====");
        printf("\n1. Cadastrar nova carta");
        printf("\n2. Listar todas as cartas");
        printf("\n3. Buscar carta por nome da cidade");
        printf("\n0. Sair");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (n < MAX_CARTAS) {
                    printf("\n--- Cadastro da carta %d ---\n", n + 1);
                    printf("Estado/Regiao: ");
                    scanf(" %[^\n]%*c", cartas[n].estado);
                    printf("Codigo da Carta: ");
                    scanf("%d", &cartas[n].codigo);
                    printf("Nome da Cidade: ");
                    scanf(" %[^\n]%*c", cartas[n].nome_cidade);
                    printf("Populacao: ");
                    scanf("%d", &cartas[n].populacao);
                    printf("Area em KM2: ");
                    scanf("%f", &cartas[n].area_km2);
                    printf("PIB (em bilhoes): ");
                    scanf("%f", &cartas[n].pib);
                    printf("Numero de Pontos Turisticos: ");
                    scanf("%d", &cartas[n].pontos_turisticos);
                    n++;
                } else {
                    printf("\nLimite de cartas atingido!\n");
                }
                break;
            case 2:
                if (n == 0) {
                    printf("\nNenhuma carta cadastrada ainda.\n");
                } else {
                    for (int i = 0; i < n; i++) {
                        imprimirCarta(cartas[i]);
                    }
                }
                break;
            case 3: {
                if (n == 0) {
                    printf("\nNenhuma carta cadastrada ainda.\n");
                    break;
                }
                char nome_busca[50];
                printf("\nDigite o nome da cidade para buscar: ");
                scanf(" %[^\n]", nome_busca);
                buscarCartaPorNome(cartas, n, nome_busca);
                break;
            }
            case 0:
                printf("\nSaindo...\n");
                break;
            default:
                printf("\nOpcao invalida.\n");
        }
    } while (opcao != 0);

    return 0;
}
