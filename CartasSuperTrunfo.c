#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
char estado;
char codigo [4];
char nomeCidade [50];
int população;
float area;
float pib;
int pontosTuristicos;

  // Área para entrada de dado
  printf(" Cadastro das cartas super triunfo\n");

  printf("digite a letra do estado: \n");
  scanf(" %c", &estado);

  printf("digite o codigo da carta : \n");
  scanf(" %s",codigo);

  printf("digite o nome da cidade: \n");
  scanf(" %[^\n]s",nomeCidade);

  printf("digite a população: \n");
  scanf(" %d",&população);

  printf("digite a area em km²: \n");
  scanf(" %f",&area);

  printf("digite o pib em bilhões: \n");
  scanf(" %f",&pib);

  printf("digite a quantidade de pontos turisticos: \n");
  scanf(" %d", &pontosTuristicos);

  // Área para exibição dos dados da cidade
  printf("--- Dados da carta---\n");

  printf("estado: %c\n", estado);
  printf("nome da cidade: %s\n", nomeCidade);
  printf("população: %d\n", população);
  printf("area: %.2f km²\n", area);
  printf("pib: %.2f bilhões de reais\n", pib);
  printf("pontos turistico: %d\n", pontosTuristicos);

return 0;
} 
