#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

#include<stdio.h>


int main() {   
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char estado;
    char codigoCarta[3];
    char nomeCidade[20];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    //Wiliam: As variaveis declaradas acima poderiam ser aglomeradas em uma mesma linha, se fossem do mesmo tipo, como codigoCarta e pontosTuristicos. Para facilitar o entendimento optei por deixa-los separados.
    //Wiliam: Por boas praticas as variáveis devem ser inicializadas para não carregar lixos das memorias, mas como os dados serao inseridos por um usuario durante a execussao do programa não vi a necessidade de tomar tal medida.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Por favor, entre com os dados da carta 01.\n");
    printf("Digite o Estado (entre as letras A e H):\n");
    scanf(" %c", &estado);
    printf("Digite o codigo da carta (entre 01 e 04):\n");
    scanf(" %s", codigoCarta);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%d", &populacao);
    printf("Informe a estencao territorial da cidade em km²:\n");
    scanf("%f", &area);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf("%f", &pib);
    printf("Informe a quantidade de pontos turisticos que a cidade possui:\n");
    scanf("%d", &pontosTuristicos);
    printf("Carta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2f em km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado, estado, codigoCarta, nomeCidade, populacao, area, pib, pontosTuristicos);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
