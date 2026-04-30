#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1 [5], codigo2 [5];
  char nomeCidade1 [50], nomeCidade2 [50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;

  // Área para entrada de dado 
  printf("digite a letra do estado (A-H): \n");
  scanf(" %c", &estado1);

  printf("digite o codigo da carta (ex:A01): \n");
  scanf(" %s", &codigo1); 
  
  printf("digite o nome da cidade: \n");
  scanf(" %s", nomeCidade1);

  printf("digite a população: \n");
  scanf(" %d", &populacao1);

  printf("digite a area em km²: \n");
  scanf(" %f", &area1);

  printf("digite o pib em bilhões: \n");
  scanf(" %f", &pib1);

  printf("digite a quantidade de pontos turisticos: \n");
  scanf(" %d", &pontosTuristicos1);
  
  printf("\n--- cadastro da carta 2 ---\n");

  printf("digite a letra do estado (A-H): \n");
  scanf(" %c", &estado2);

  printf("digite o codigo da carta (ex:A01): \n");
  scanf(" %s", codigo2);

  printf("digite o nome da cidade: \n");
  scanf(" %s", nomeCidade2);

  printf("digite a população: \n");
  scanf(" %d", &populacao2);

  printf("digite a area em km²: \n");
  scanf(" %f", &area2);

  printf("digite o pib em bilhões: \n");
  scanf(" %f", &pib2);

  printf("digite a quantidade de pontos turisticos: \n");
  scanf(" %d", &pontosTuristicos2);


  // Área para exibição dos dados da cidade
  printf("*** Dados da carta1: *** \n");
  printf("estado:  %c\n", estado1);
  printf("nome da cidade: %s\n", nomeCidade1);
  printf("população: %d\n", populacao1);
  printf("area: %.2f km²\n", area1);
  printf("pib: %.2f bilhões de reais\n", pib1);
  printf("pontos turistico: %d\n", pontosTuristicos1);

  printf("*** dados da carta 2: *** \n");
  printf("estado: %c\n", estado2);
  printf("nome da cidade: %s\n", nomeCidade2);
  printf("populacao: %d\n", populacao2);
  printf("area: %.2f km²\n", area2);
  printf("pib: %.2f bilhões de reais\n", pib2);
  printf("ponto turistico: %d\n", pontosTuristicos2);

  return 0;
}
