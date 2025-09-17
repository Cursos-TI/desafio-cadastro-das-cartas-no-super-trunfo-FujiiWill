#include<stdio.h>

#define Populacao 1
#define Area 2
#define PIB 3
#define DensidadePopulacional 4
#define PIBPerCapita 5

int main() {   
    //Declaração das variáveis.

    /*
    char estado1, estado2;
    char codigoCarta1[3], codigoCarta2[3];
    char nomeCidade1[20], nomeCidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    */

    //Cadastramentos dos valores de cada carta.
    //Como já validamos os metodos de cadastramento dos valores de cada carta, vou inicializar as variaveis afim de facilitar o desenvolvimento das demais funcionalidades do programa (parte do algoritimo ficara comentado).

    /*
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
    */

    char estado1 = 'A';
    char codigoCarta1[] = "01";
    char nomeCidade1[] = "Campinas";
    unsigned long populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;

    //Calculo da densidade populacional
    float densidadePopulacional1 = (float) populacao1 / area1;

    //Calculo do PIB per capita
    float pibPerCapita1 = (float) pib1 * 1000000000.00  / populacao1;

    //Calculo do super poder da carta.
    float superPoder1 = populacao1 + area1 + (pib1 * 1000000000) + pontosTuristicos1 - densidadePopulacional1 + pibPerCapita1;

    /*
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
    */

    char estado2 = 'B';
    char codigoCarta2[] = "02";
    char nomeCidade2[] = "Paulinia";
    unsigned long populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;

    //Calculo da densidade populacional
    float densidadePopulacional2 = (float) populacao2 / area2;

    //Calculo do PIB per capita
    float pibPerCapita2 = pib2 * 1000000000.00 / (float) populacao2;

    //Calculo do super poder da carta.
    float superPoder2 = populacao2 + area2 + (pib2 * 1000000000) + pontosTuristicos2 - densidadePopulacional2 + pibPerCapita2;

    
    // Exibição dos Dados das Cartas:
    printf("\nCarta 1:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f em km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado1, estado1, codigoCarta1, nomeCidade1, populacao1, area1, pib1, pontosTuristicos1);
    //Wiliam: Para ficar mais facil identificar as alteracoes realizadas vou optar por adicionar os novos dados separadamente.
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidadePopulacional1, pibPerCapita1);
    printf("Super Poder: %.2f\n\n", superPoder1);
    printf("Carta 2:\nEstado: %c\nCódigo: %c%s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f em km²\nPIB: %.2f bilhões de reais\nNúmero de Pontos Turísticos: %d\n", estado2, estado2, codigoCarta2, nomeCidade2, populacao2, area2, pib2, pontosTuristicos2);
    //Wiliam: A seguir temos o acrescimo de informações das cartas.
    printf("Densidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f reais\n", densidadePopulacional2, pibPerCapita2);
    printf("Super poder: %.2f\n\n", superPoder2);

    /*
    //Wiliam: A seguir sera feita a comparacao dos atributos das cartas e a apresentação do resultado.
    int comparacaoPopulacao  = populacao1 > populacao2;
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
    */

    //Para dar uma incrementada no combate de valore das cartas, vou selecionar apenas um atributo da carta, de forma hardcode, a qual sera apresentada na tela do usuario.
    
    int atributoEscolhido = DensidadePopulacional;

    if (atributoEscolhido == Populacao){
        printf("Carta 1 - %s (%c%s): %lu\n", nomeCidade1, estado1, codigoCarta1, populacao1);
        printf("Carta 2 - %s (%c%s): %lu\n", nomeCidade2, estado2, codigoCarta2, populacao2);
        if(populacao1 > populacao2){
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    } else if (atributoEscolhido == Area){
        printf("Carta 1 - %s (%c%s): %.2f\n", nomeCidade1, estado1, codigoCarta1, area1);
        printf("Carta 2 - %s (%c%s): %.2f\n", nomeCidade2, estado2, codigoCarta2, area2);
        if(area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    } else if (atributoEscolhido == PIB){
        printf("Carta 1 - %s (%c%s): %.2f\n", nomeCidade1, estado1, codigoCarta1, pib1);
        printf("Carta 2 - %s (%c%s): %.2f\n", nomeCidade2, estado2, codigoCarta2, pib2);
        if(pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    } else if (atributoEscolhido == DensidadePopulacional){
        printf("Carta 1 - %s (%c%s): %.2f\n", nomeCidade1, estado1, codigoCarta1, densidadePopulacional1);
        printf("Carta 2 - %s (%c%s): %.2f\n", nomeCidade2, estado2, codigoCarta2, densidadePopulacional2);
    if(densidadePopulacional1 < densidadePopulacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    } else {
        printf("Carta 1 - %s (%c%s): %.2f\n", nomeCidade1, estado1, codigoCarta1, pibPerCapita1);
        printf("Carta 2 - %s (%c%s): %.2f\n", nomeCidade2, estado2, codigoCarta2, pibPerCapita2);
        if(pibPerCapita1 > pibPerCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nomeCidade1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nomeCidade2);
        }
    }

    return 0;
}
