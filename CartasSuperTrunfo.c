#include <stdio.h>

int main() {
    //DECLARACÃO DAS VÁRIAVEIS CARTA 1
    char cod_carta1[3];
    char estado1[20];
    char nome_cidade1[20];
    int populacao1;
    float area1;
    float PIB1;
    int num_pontos1;

    //DECLARACÃO DAS VÁRIAVEIS CARTA 2
    char cod_carta2[3];
    char estado2[20];
    char nome_cidade2[20];
    int populacao2;
    float area2;
    float PIB2;
    int num_pontos2;
    
    // Cadastro das Cartas:
    
    //CARTA 1
    printf("Digite o código da carta: ");
    scanf("%s", &cod_carta1);

    printf("Digite o Estado: ");
    scanf("%s", &estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos1);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS
    //CARTA 2
    printf("Digite o código da carta: ");
    scanf("%s", &cod_carta2);

    printf("Digite o Estado: ");
    scanf("%s", &estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos2);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS

    // Exibição dos Dados das Cartas:
    printf("Código da carta: %d", cod_carta1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", nome_cidade1);
    printf("População: %d", populacao1);
    printf("Área: %f km", area1);
    printf("PIB: %.2f", PIB1);
    printf("Número de pontos turísticos: %d", num_pontos1);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS

    //EXIBIÇÃO CARTA 2
    printf("Código da carta: %d \n", cod_carta2);
    printf("Estado: %s  \n", estado2);
    printf("Cidade: %s  \n", nome_cidade2);
    printf("População: %d \n", populacao2);
    printf("Área: %f km \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de pontos turísticos: %d", num_pontos2);

    return 0;
}
