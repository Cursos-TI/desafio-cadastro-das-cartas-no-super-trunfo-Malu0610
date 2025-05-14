#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    //DECLARACÃO DAS VÁRIAVEIS CARTA 1
    char cod_carta1[3];
    char estado1[20];
    char nome_cidade1[20];
    unsigned long int populacao1;
    float area1;
    float PIB1;
    int num_pontos_turisticos1;

    //DECLARACÃO DAS VÁRIAVEIS CARTA 2
    char cod_carta2[3];
    char estado2[20];
    char nome_cidade2[20];
    unsigned long int populacao2;
    float area2;
    float PIB2;
    int num_pontos_turisticos2;

    //DECLARAÇÃO DE VÁRIAVEIS PARA COMPARARÇÃO
    float SuperPoderC1, SuperPoderC2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //CARTA 1
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta1);

    printf("Digite o Estado: ");
    scanf("%s", estado1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área: ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &PIB1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos1);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS
    //CARTA 2
    printf("Digite o código da carta: ");
    scanf("%s", cod_carta2);

    printf("Digite o Estado: ");
    scanf("%s", estado2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade2);

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área: ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &PIB2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &num_pontos_turisticos2);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("Código da carta: %s", cod_carta1);
    printf("Estado: %s", estado1);
    printf("Cidade: %s", nome_cidade1);
    printf("População: %lu", populacao1);
    printf("Área: %f km", area1);
    printf("PIB: %.2f", PIB1);
    printf("Número de pontos turísticos: %d", num_pontos_turisticos1);

    printf("\n\n"); //ESPAÇO ENTRE AS DECLARAÇÕES DE DADOS

    //EXIBIÇÃO CARTA 2
    printf("Código da carta: %s \n", cod_carta2);
    printf("Estado: %s  \n", estado2);
    printf("Cidade: %s  \n", nome_cidade2);
    printf("População: %lu \n", populacao2);
    printf("Área: %f km \n", area2);
    printf("PIB: %.2f \n", PIB2);
    printf("Número de pontos turísticos: %d\n\n", num_pontos_turisticos2);



    /////////////CALCULANDO PIB PER CAPITA E DENSIDADE POPULACIONAL//////////////////////

    float pib_per_capita1 = 0.00, pib_per_capita2 = 0.00;
    float densidade_populacional_cidade1 = 0, densidade_populacional_cidade2 = 0;

    densidade_populacional_cidade1 = populacao1 / area1; //CALCULO DENSIDADE POPULACIONAL DA PRIMEIRA CIDADE

    densidade_populacional_cidade2 = populacao2 / area2; //CALCULO DENSIDADE POPULACIONAL DA SEGUNDA CIDADE

    pib_per_capita1 = PIB1 /populacao1; //CALCULO PIB PER CAPITA DA PRIMEIRA CIDADE

    pib_per_capita2 = PIB2 /populacao2; //CALCULO PIB PER CAPITA DA PRIMEIRA CIDADE;

    printf("Densidade populacional da cidade %s = %.2f\n", nome_cidade1, densidade_populacional_cidade1);
    printf("PIB per capita da cidade %s = %.2f\n\n", nome_cidade1, pib_per_capita1);

    printf("Densidade populacional da cidade %s = %.2f\n", nome_cidade2, densidade_populacional_cidade2);
    printf("PIB per capita da cidade %s = %.2f\n\n", nome_cidade2, pib_per_capita2);

    //SOMA DOS VALORES CARTAS
    SuperPoderC1 = (float)(populacao1 + area1 + num_pontos_turisticos1 + PIB1 + pib_per_capita1 + (1/densidade_populacional_cidade1));

    SuperPoderC2 = (float)(populacao2 + area2 + num_pontos_turisticos2 + PIB2 + pib_per_capita2 + (1/densidade_populacional_cidade2));


    //COMPARAÇÃO DAS CARTAS
    printf("\n********************************\n");
    printf("      Comparação de Cartas      \n");
    printf("********************************\n");


    printf("| SIGNIFICADO DOS VALORES |\n| Carta 1 vencedora = 1   |\n| Carta 2 vencedora = 0   |\n");

    printf("População: Carta %d venceu\n", populacao1 > populacao2);
    printf("Área: Carta %d venceu\n", area1 > area2);
    printf("PIB: Carta %d venceu\n", PIB1 > PIB2);
    printf("Pontos Turísticos: Carta %d venceu\n", num_pontos_turisticos1 > num_pontos_turisticos2);
    printf("Densidade Populacional: Carta %d venceu\n", (1/densidade_populacional_cidade1) > (1/densidade_populacional_cidade2));
    printf("PIB per Capita: Carta %d venceu\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: Carta %d venceu\n", SuperPoderC1 > SuperPoderC2);


    return 0;
}
