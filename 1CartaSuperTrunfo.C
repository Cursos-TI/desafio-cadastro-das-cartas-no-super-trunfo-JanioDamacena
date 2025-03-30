#include <stdio.h>
#include <string.h>

//  armazenar os dados carta
typedef struct {
    char estado;
    char codigo[4];
    char nomeCidade[50];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    int Populacao;
    int Area;
    int PontosTuristicos;
} Carta;

int main() {
    // carta Super Trunfo de Pernambuco
    Carta cartaPernambuco;
    cartaPernambuco.estado = 'P';
    strcpy(cartaPernambuco.codigo, "P01");
    strcpy(cartaPernambuco.nomeCidade, "Recife");
    cartaPernambuco.populacao = 22546548;
    cartaPernambuco.area = 625454;
    cartaPernambuco.pib = 73.04;
    cartaPernambuco.pontosTuristicos = 254;
    cartaPernambuco.Populacao = 22546548;
    cartaPernambuco.Area = 625454;
    cartaPernambuco.PontosTuristicos = 254;

    // Impressão dos dados da carta
    printf("Estado: %c \n", cartaPernambuco.estado);
    printf("Codigo da Carta: %s \n", cartaPernambuco.codigo);
    printf("Nome da Cidade: %s \n", cartaPernambuco.nomeCidade);
    printf("Populacao: %d10 \n", cartaPernambuco.populacao);
    printf("Area (em km): %.2f \n", cartaPernambuco.area);
    printf("PIB: %.2f bilhoes de reais \n", cartaPernambuco.pib);
    printf("Pontos Turisticos: %d \n", cartaPernambuco.pontosTuristicos);

    return 0;
}
