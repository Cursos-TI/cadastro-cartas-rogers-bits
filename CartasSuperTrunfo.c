#include <stdio.h>

// CARTA SUPER TRUNFO NIVEL MESTRE
int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades

  // Criando variaveis

    // Carta 01
    char codigo1[4];
    char estado1[20];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1;
    float inverso_densidade1;
    float pibp1; 
    float superpoder1;

    // Carta 02
    char codigo2[4];
    char estado2[20];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2;
    float inverso_densidade2;
    float pibp2;
    float superpoder2;


  // Área para entrada de dados

  // solicitando os dados (printf).
    // lendo e armazenando dados nas variaveis (scanf).


    // Carta 01
    printf(" Digite Os Dados da Carta 01 (Não Utilize Espaço Nos Nomes)\n");
    printf("Codigo: ");
    scanf("%s", codigo1);
    printf("Estado: ");
    scanf("%s", estado1);
    printf("Cidade: ");
    scanf("%s", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área em km2: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // calculando densidade populacional e pib per capta 1
    densidade1 = (float) populacao1 / area1;
    inverso_densidade1 = area1 / (float)populacao1;
    pibp1 = (float) pib1 / populacao1;
  
    // Carta 02
    printf("\nDigite Os Dados da Carta 02 (Não Utilize Espaço Nos Nomes)\n");
    printf("Codigo: ");
    scanf("%s", codigo2);
    printf("Estado: ");
    scanf("%s", estado2);
    printf("Cidade: ");
    scanf("%s", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área em km2: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // calculando densidade populacional e pib per capta 2
    densidade2 = (float) populacao2 / area2;
    inverso_densidade2 = area2 / (float)populacao2;
    pibp2 = (float) pib2 / populacao2;


    // Calculando superpoderes
    superpoder1 = (float) populacao1 + area1 + pib1 + pontos_turisticos1 + pibp1 + inverso_densidade1;
    superpoder2 = (float) populacao2 + area2 + pib2 + pontos_turisticos2 + pibp2 + inverso_densidade2;


  // Área para exibição dos dados da cidade

   // exibindo cartas
    // carta 01
    printf("\n--- CARTA 01 ---\n");
    printf("Codigo: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área km2: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("densidade populacioal: %.2f\n", densidade1);
    printf("pib per capta: %.2f\n", pibp1);
    

    // Carta 02
        printf("\n--- CARTA 02 ---\n");
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área km2: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("densidade populacioal: %.2f\n", densidade2);
    printf("pib per capta: %.2f\n", pibp2);


  // Área para exibição do resultado do confronto entre as cartas

   printf("\n\n --- RESULTADO DO CONFRONTO ---\n\n");
   printf(" SE O RESUTADO FOR 1 A CARTA 01 (%s) VENCE, SE FOR 0 A CARTA 02 (%s) VENCE\n\n", cidade1, cidade2);
   printf(" População: %d\n", populacao1 > populacao2);
   printf(" Àrea: %d\n", area1 > area2);
   printf(" PIB: %d\n", pib1 > pib2);
   printf(" Pontos Turisticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
   printf(" Densidade Populacional: %d\n", densidade1 < densidade2);
   printf(" PIB per Capta: %d\n", pibp1 > pibp2);
   printf(" Superpoder: %d\n", superpoder1 > superpoder2);

return 0;
} 
