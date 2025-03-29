#include <stdio.h>
#include <string.h>
int main() {
  // Variáveis da primeira carta
  char estado1;
  char codigo1[4];
  char cidade1[70];
  int populacao1;
  float area1;
  float pib1;
  int pontos1;

  // Variáveis da segunda carta
  char estado2;
  char codigo2[4];
  char cidade2[70];
  int populacao2;
  float area2;
  float pib2;
  int pontos2;

  // coleta de dados da primeira carta
  printf("Carta 1:\n");
  printf("Estado: ");
  scanf(" %c", &estado1);
  printf("Código: ");
  scanf("%s", codigo1);
  getchar();
  printf("Nome da Cidade: ");
  fgets(cidade1, 70, stdin);
  cidade1[strcspn(cidade1, "\n")] = 0;
  printf("População: ");
  scanf("%d", &populacao1);
  printf("Área: ");
  scanf("%f", &area1);
  printf("PIB: ");
  scanf("%f", &pib1);
  printf("Pontos Turistícos: ");
  scanf("%d", &pontos1);
  printf("\n");

  // coleta de dados da segunda carta
  printf("Carta 2:\n");
  printf("Estado: ");
  scanf(" %c", &estado2);
  printf("Código: ");
  scanf("%s", codigo2);
  getchar();
  printf("Nome da Cidade: ");
  fgets(cidade2, 70, stdin);
  cidade2[strcspn(cidade2, "\n")] = 0;
  printf("População: ");
  scanf("%d", &populacao2);
  printf("Área: ");
  scanf("%f", &area2);
  printf("PIB: ");
  scanf("%f", &pib2);
  printf("Pontos Turistícos: ");
  scanf("%d", &pontos2);
  printf("\n");

  // variaveis de comparacao
  float densidade1 = populacao1 / area1;
  float densidade2 = populacao2 / area2;
  float pibPerCapta1 = pib1 / populacao1;
  float pibPerCapta2 = pib2 / populacao2;

  if (pibPerCapta1 > pibPerCapta2) {
    printf("%s %.2f \n", cidade1, pibPerCapta1);
    printf("%s %.2f \n", cidade2, pibPerCapta2);
    printf("Resultado: Carta 1(%s)", cidade1);
  } else {
    printf("%s %.2f \n", cidade1, pibPerCapta1);
    printf("%s %.2f \n", cidade2, pibPerCapta2);
    printf("Resultado: Carta 2(%s)", cidade2);
  }
  return 0;
}
