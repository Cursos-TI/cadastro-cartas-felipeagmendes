#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  
  char estado1, estado2;
  char codigo1[3], codigo2[3];
  char cidade1[50], cidade2[50];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int turistico1, turistico2;

  // Área para entrada de dados

  //Entrada da primeira carta
  
  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado1);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo1);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade1);

  printf("Digite o numero da população: ");
  scanf("%d", &populacao1);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area1);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib1);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico1);

  //Entrada da segunda carta

  printf("Digite a letra do estado - Uma letra de A a H: ");
  scanf(" %c", &estado2);

  printf("Digite o codigo da carta - Soma da letra do estado mais um digito de 1 a 4: ");
  scanf("%s", codigo2);
  
  printf("Digite o nome da cidade: ");
  scanf("%s", cidade2);

  printf("Digite o numero da população: ");
  scanf("%d", &populacao2);

  printf("Digite o numero da area da cidade: ");
  scanf("%f", &area2);

  printf("Digite o PIB da cidade: ");
  scanf("%f", &pib2);

  printf("Digite o numero de pontos turisticos: ");
  scanf("%d", &turistico2);


  // Área para exibição dos dados da cidade

  //Exibição da primeira carta

  printf("AQUI ESTÃO OS DADOS DA PRIMEIRA CARTA:\n\n");
  printf("Carta: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Area: %.2f km².\n", area1);
  printf("PIB: %.2f bilhões de reais.\n", pib1);
  printf("Numero de Pontos Turisticos: %d\n\n", turistico1);

    //Exibição da segunda carta

  printf("AQUI ESTÃO OS DADOS DA SEGUNDA CARTA:\n\n");
  printf("Carta: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Area: %.2f km².\n", area2);
  printf("PIB: %.2f bilhões de reais.\n", pib2);
  printf("Numero de Pontos Turisticos: %d\n", turistico2);

return 0;
} 
