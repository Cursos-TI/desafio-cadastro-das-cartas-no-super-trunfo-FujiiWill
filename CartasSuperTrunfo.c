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

    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    //Wiliam: As variaveis declaradas acima poderiam ser aglomeradas em uma mesma linha, se fossem do mesmo tipo, como codigoCarta e pontosTuristicos. Para facilitar o entendimento optei por deixa-los separados.
    //Wiliam: Por boas praticas as variáveis devem ser inicializadas para não carregar lixos das memorias, mas como os dados serao inseridos por um usuario durante a execussao do programa não vi a necessidade de tomar tal medida.

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("Por favor, entre com os dados da carta 01.\n");
    printf("Digite o Estado (entre as letras A e H):\n");
    scanf(" %c", &estado1);
    printf("Digite o codigo da carta (entre 01 e 04):\n");
    scanf(" %s", codigoCarta1);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade1);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao1);
    printf("Informe a estensao territorial da cidade em km²:\n");
    scanf("%f", &area1);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf("%f", &pib1);
    printf("Informe a quantidade de pontos turisticos que a cidade possui:\n");
    scanf("%d", &pontosTuristicos1);

    //Wiliam: Calculo da densidade populacional
    float densidadePopulacional1 = (float) populacao1 / area1;

    //Wiliam: Calculo do PIB per capita
    float pibPerCapita1 = (float) pib1 * 1000000000.00  / populacao1;

    //Wiliam: Calculo do super poder da carta.
    float superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 - densidadePopulacional1 + pibPerCapita1;

    printf("Por favor, entre com os dados da carta 02.\n");
    printf("Digite o Estado (entre as letras A e H):\n");
    scanf(" %c", &estado2);
    printf("Digite o codigo da carta (entre 01 e 04):\n");
    scanf(" %s", codigoCarta2);
    printf("Digite o nome da cidade:\n");
    scanf(" %s", nomeCidade2);
    printf("Informe o numero de habitantes da cidade:\n");
    scanf("%lu", &populacao2);
    printf("Informe a estensao territorial da cidade em km²:\n");
    scanf("%f", &area2);
    printf("Informe o PIB da cidade em bilhoes de reais:\n");
    scanf("%f", &pib2);
    printf("Informe a quantidade de pontos turisticos que a cidade possui:\n");
    scanf("%d", &pontosTuristicos2);

    //Wiliam: Calculo da densidade populacional
    float densidadePopulacional2 = (float) populacao2 / area2;

    //Wiliam: Calculo do PIB per capita
    float pibPerCapita2 = pib2 * 1000000000.00 / (float) populacao2;

    //Wiliam: Calculo do super poder da carta.
    float superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 - densidadePopulacional2 + pibPerCapita2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f em km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);
    //Wiliam: Para ficar mais facil identificar as alteracoes realizadas vou optar por adicionar os novos dados separadamente.
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidadePopulacional1, pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    printf("Carta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f em km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);
    //Wiliam: A seguir temos o acrescimo de informações das cartas.
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidadePopulacional2, pibPerCapita2);
    printf("Super poder: %.2f\n\n", superPoder2);

    //Wiliam: A seguir sera feita a comparacao dos atributos das cartas e a apresentação do resultado.
    int comparacaoPopulacao = populacao1 > populacao2;
    int comparacaoArea = area1 > area2;
    int comparacaoPib = pib1 > pib2;
    int comparacaoPontosTuristicos = pontosTuristicos1 > pontosTuristicos2;
    int comparacaoDensidade = densidadePopulacional1 < densidadePopulacional2;
    int comparacaoPibPerCapita = pibPerCapita1 > pibPerCapita2;
    int comparacaoSuperPoder = superPoder1 > superPoder2;

    //Wiliam: Apresentacao dos resultados
    printf("Coparacao de cartas:\n");
    printf("População: %s (%d)\n",comparacaoPopulacao ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPopulacao);
    printf("Area: %s (%d)\n", comparacaoArea ?  "Carta 1 venceu" : "Carta 2 venceu", comparacaoArea);
    printf("PIB: %s (%d)\n", comparacaoPib ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPib);
    printf("Pontos Turisticos: %s (%d)\n", comparacaoPontosTuristicos ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPontosTuristicos);
    printf("Densidade Populacional: %s (%d\n)", comparacaoDensidade ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoDensidade);
    printf("PIB per Capita: %s (%d)\n" , comparacaoPibPerCapita ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoPibPerCapita);
    printf("Super Poder: %s (%d)\n", comparacaoSuperPoder ? "Carta 1 venceu" : "Carta 2 venceu", comparacaoSuperPoder);

    return 0;
}
