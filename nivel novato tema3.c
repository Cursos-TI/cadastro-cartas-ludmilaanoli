#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 3 - Cadastro das cartas
// Objetivo: No nível novato

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[5];
  char nomeCidade1 [50], nomeCidade2 [50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibperCapita1, pibperCapita2;
  float superpoder1, superpoder2, pontos1, pontos2;

  // Área para entrada de dado 
  printf("\n--- cadastro da carta 1 ---\n");

  printf("digite a letra do estado (A-H): \n");
  scanf(" %c", &estado1);

  printf("digite o codigo da carta (ex:A01):\n");
  scanf("%s", codigo1);

  printf("digite o nome da cidade: \n");
  scanf(" %[^\n]s", nomeCidade1);

  printf("digite a população: \n");
  scanf(" %lu", &populacao1);

  printf("digite a area em km²: \n");
  scanf(" %f", &area1);

  printf("digite o pib em bilhões: \n");
  scanf(" %f", &pib1);

  printf("digite a quantidade de pontos turisticos: \n");
  scanf(" %d", &pontosTuristicos1);
  
  printf("\n--- cadastro da carta 2 ---\n");

  printf("digite a letra do estado (A-H): \n");
  scanf(" %c", &estado2);

  printf("digite o codigo da carta(ex:A01): \n");
  scanf(" %s", codigo2);

  printf("digite o nome da cidade: \n");
  scanf(" %[^\n]s", nomeCidade2);

  printf("digite a população: \n");
  scanf(" %lu", &populacao2);

  printf("digite a area em km²: \n");
  scanf(" %f", &area2);

  printf("digite o pib em bilhões: \n");
  scanf(" %f", &pib2);

  printf("digite a quantidade de pontos turisticos: \n");
  scanf(" %d", &pontosTuristicos2);

  //area para calculos
  densidadePopulacional1 = (float)populacao1 / area1;
  pibperCapita1 = pib1 *1000000000/ populacao1;

  densidadePopulacional2 = (float)populacao2 / area2;
  pibperCapita2 = pib2 *1000000000/ populacao2;

  // calculo do super poder

  //superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibperCapita1 + (1.0f / densidade1);
  //superpoder2 = (float)populacao1 + area2 + pib2 + (float)pontos2 + pibperCapita2 + (1.0f / densidade2);
  
  // exibicao dos resultados
  printf("\n comparação de carta:\n");
  // o valor resultado da expresão (valor1 > valor2) sera 1 ou 0
  printf("população: carta 1 venceu (%d)\n", populacao1 > populacao2);
  printf("area: carta 1 venceu (%d)\n", area1 > area2);
  printf("pib: carta 1 venceu (%d)\n", pib1 > pib2);
  printf("pontos turisticos: carta 1 venceu (%d)\n", pontos1 > pontos2);

  //determinar o vencedor do super trunfo

  if (superpoder1 > superpoder2) {     
    printf("carta 1 venceu o super trunfo!\n");
  } else {
    printf("carta 2 venceu o super trunfo!\n");
  } 

  // Área para exibição dos dados da cidade
  printf("\n *** Dados da carta1: *** \n");
  printf("estado:  %c\n", estado1);
  printf("nome da cidade: %s\n", nomeCidade1);
  printf("população: %lu\n", populacao1);
  printf("area: %.2f km²\n", area1);
  printf("pib: %.2f bilhões de reais\n", pib1);
  printf("pontos turistico: %d\n", pontosTuristicos1);
  printf("densidade populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("pib per Capita: %.2f reais\n", pibperCapita1);

  printf("\n *** dados da carta 2: *** \n");
  printf("estado: %c\n", estado2);
  printf("nome da cidade: %s\n", nomeCidade2);
  printf("populacao: %lu\n", populacao2);
  printf("area: %.2f km²\n", area2);
  printf("pib: %.2f bilhões de reais\n", pib2);
  printf("ponto turistico: %d\n", pontosTuristicos2);
  printf("densidade populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("pib per Capita: %.2f reais\n", pibperCapita2);


  return 0;
}