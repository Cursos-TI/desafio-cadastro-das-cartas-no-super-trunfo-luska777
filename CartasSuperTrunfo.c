#include <stdio.h>

int main(){
    int populacao, turistico;
    char estado[50], cidade[50], numero[50];
    float area, pib;

    printf("Digite a letra do estado: \n");
    scanf("%s", &estado);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &numero);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite a populacao: \n");
    scanf("%d", &populacao);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &turistico);

    printf("Letra do estado: %s\n", estado);
    printf("Nome da cidade: %s\n", cidade);
    printf("codigo da cidade : %s\n", numero);
    printf("Area da cidade: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("População: %d\n", populacao);
    printf("Pontos turisticos: %d\n", turistico);

    printf("Novo commit\n");

    return 0;

}