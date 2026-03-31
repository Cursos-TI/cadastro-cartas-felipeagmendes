#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
// Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[50], cidade2[50];
  unsigned long int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int turistico1, turistico2;
  float densidadepop1, pibpercapta1, densidadepop2, pibpercapta2;
  float poder1, poder2;
  float inversodens1, inversodens2;

//Área para entrada de dados

  //Entrada da primeira carta
  
  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo1);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o numero da população: ");
  scanf("%lu", &populacao1);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico1);

  //Area de calculo da densidade populacional e do PIB per capta da primeira carta

  densidadepop1 = (float) populacao1 / area1;
  pibpercapta1 = (float) (pib1 * 1000000000.0) / populacao1;
  inversodens1 = 1.0 / densidadepop1;
  poder1 = (float) populacao1 + area1 + pib1 + turistico1 + pibpercapta1 + inversodens1;

  //Entrada da segunda carta

  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo2);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o numero da população: ");
  scanf("%lu", &populacao2);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico2);

  //Area de calculo da densidade populacional e do PIB per capta da segunda carta

  densidadepop2 = (float) populacao2 / area2;
  pibpercapta2 = (float) (pib2 * 1000000000.0) / populacao2;
  inversodens2 = 1.0 / densidadepop2;
  poder2 = (float) populacao2 + area2 + pib2 + turistico2 + pibpercapta2 + inversodens2;

// Área para exibição dos dados da cidade

  //Exibição da primeira carta

  printf("AQUI ESTÃO OS DADOS DA PRIMEIRA CARTA:\n\n");
  printf("Carta: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Area: %.2f km².\n", area1);
  printf("PIB: %.2f bilhões de reais.\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n", turistico1);
  printf("Densidade populacional: %.2f hab/km².\n", densidadepop1);
  printf("PIB per Capta: %.2f reais.\n", pibpercapta1);
  printf("O poder da carta é: %f\n\n", poder1);

  //Exibição da segunda carta

  printf("AQUI ESTÃO OS DADOS DA SEGUNDA CARTA:\n\n");
  printf("Carta: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Area: %.2f km².\n", area2);
  printf("PIB: %.2f bilhões de reais.\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", turistico2);
  printf("Densidade populacional: %.2f hab/km².\n", densidadepop2);
  printf("PIB per Capta: %.2f reais.\n\n", pibpercapta2);
  printf("O poder da carta é: %f\n\n", poder2);

  //Comparativo das cartas

  printf("RESULTADO DO COMPARATIVO DAS CARTAS:\n\n");
  printf("População: %d\n", populacao1 > populacao2);
  printf("Area: %d\n", area1 > area2);
  printf("PIB: %d\n", pib1 > pib2);
  printf("Pontos Turisticos: %d\n", turistico1 > turistico2);
  printf("Densidade Populacional: %d\n", densidadepop1 < densidadepop2);
  printf("PIB per Capita: %d\n", pibpercapta1 > pibpercapta2);
  printf("Super Poder: %d\n", poder1 > poder2);

return 0;
} 
