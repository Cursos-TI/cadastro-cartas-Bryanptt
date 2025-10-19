#include <stdio.h>

int main(){

    char estado1, codigo1[10], nome1[20], estado2, codigo2[10], nome2[20];
    int populacao1, turisticos1, populacao2, turisticos2;
    float area1, pib1, area2, pib2;

    printf("\nBem vindo ao cadastro de cartas Super Trunfo de Estados Brasileiros!\n");
    printf("Vamos cadastrar a primeira carta. (para nomes com espaços, use _ no lugar do espaço) \n\n");

    printf("Digite o nome da cidade:");
    scanf("%s", nome1);

    printf("Digite o estado da cidade:");
    scanf(" %c", &estado1);

    printf("Digite o codigo do estado:");
    scanf("%s", codigo1);

    printf("Digite a populacao do estado:");
    scanf(" %d", &populacao1);

    printf("Digite a quantidade de pontos turisticos do estado:");
    scanf(" %d", &turisticos1);
    
    printf("Digite a area do estado:");
    scanf("%f", &area1);

    printf("Digite o PIB do estado:");
    scanf("%f", &pib1);

    printf("\nCadastro realizado com sucesso!\n");

    printf("\nCidade: %s\n", nome1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Pontos turisticos: %d\n", turisticos1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhoes de Reais\n", pib1);


    printf("\nAgora vamos cadastrar a segunda carta. (para nomes com espaços, use _ no lugar do espaço)\n\n");

    printf("Digite o nome da cidade:");
    scanf("%s", nome2);

    printf("Digite o estado da cidade: ");
    scanf(" %c", &estado2);

    printf("Digite o codigo do estado: ");
    scanf("%s", codigo2);

    printf("Digite a populacao do estado: ");
    scanf("%d", &populacao2);

    printf("Digite a quantidade de pontos turisticos do estado: ");
    scanf("%d", &turisticos2);
    
    printf("Digite a area do estado: ");
    scanf("%f", &area2);

    printf("Digite o PIB do estado: ");
    scanf("%f", &pib2);


    printf("\nCadastro realizado com sucesso!\n");

    printf("\nCidade: %s\n", nome2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Pontos turisticos: %d\n", turisticos2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhoes de Reais\n", pib2);

    return 0;
}
