#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    // Definição das variáveis gerais:
    double densidadevencedora;
    double superpoder;
    int opcao1, opcao2;
    char sair;
    char invalido;
    char regras;
    double soma1;
    double soma2;

//carta 01
    char codigocarta1[3];
    char estado1[60];
    char cidade1[60];
    int populacao1;
    int numerodepontosturisticos1;
    float area1;
    float densidadepopulacional1;
    double PIB1;
    double pibpercapita1;
    double superpoder1;

    //carta 02
    char codigocarta2[3];
    char estado2[60];
    char cidade2[60];
    int populacao2;
    int numerodepontosturisticos2;
    float area2;
    float densidadepopulacional2;
    double PIB2;
    double pibpercapita2;
    double superpoder2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Cadastro das informaçoes, essa função solicita ao usuário para inserir as informações que devem constar nas cartas;
//Mensagem de boas vindas:

    printf("\n");
    printf(">>>>>>>>>> Bem vindo ao Super trunfo <<<<<<<<<<\n");

//Menu interativo inicial:

while (1)
{
    printf("\n");
    printf("MENU PRINCIPAL\n");
    printf("\n");
    printf("1. Cadastrar as duas cartas\n");
    printf("2. Regras do jogo\n");
    printf("3. Sair do JOGO");
    printf("\n");
    printf("Escolha uma opção\n");
    scanf("%d", &opcao1);
    printf("\n");

switch (opcao1)
{
case 1:

// Cadastro das cartas:
// Carta 1;

    printf("Digite o COD da carta 1: \n");
    scanf("%s", codigocarta1);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado1);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao1);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB1);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos1);

// Carta 2;
    printf("Digite o COD da carta 2: \n");
    scanf("%s", codigocarta2);

    printf("Digite o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Digite o estado: \n");
    scanf(" %[^\n]", &estado2);

    printf("Digite o número de habitantes: \n");
    scanf(" %d", &populacao2);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%lf", &PIB2);

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &numerodepontosturisticos2);


// Calculos - densidade populacional e PIB per Capita CARTA 1;

    // Verificação de divisão por zero na densidade populacional
    densidadepopulacional1 = (area1 > 0) ? (float)populacao1 / area1 : 0.0f;

    // Verificação de divisão por zero no PIB per Capita
    pibpercapita1 = (populacao1 > 0) ? (double)PIB1 / populacao1 : 0.0;

    // Soma dos atributos para o Super Poder (base)
    soma1 = (double)populacao1 + area1 + PIB1 + numerodepontosturisticos1 + pibpercapita1;

    // Cálculo do inverso da densidade para Super Poder 1

    double inversodensidade1 = 0.0;

    if (densidadepopulacional1 == 0.0f && populacao1 == 0) {
        inversodensidade1 = 0.0;

    } else if (densidadepopulacional1 == 0.0f && populacao1 > 0) {
        inversodensidade1 = 1000000.0;

    } else {
        inversodensidade1 = 1.0 / densidadepopulacional1;

    }

    superpoder1 = soma1 + inversodensidade1;

// Calculos - densidade populacional, PIB per Capita e super poder CARTA 2;

    // Verificação de divisão por zero na densidade populacional
    densidadepopulacional2 = (area2 > 0) ? (float)populacao2 / area2 : 0.0f;

    // Verificação de divisão por zero no PIB per Capita
    pibpercapita2 = (populacao2 > 0) ? (double)PIB2 / populacao2 : 0.0;

    // Soma dos atributos para o Super Poder (base)
    soma2 = (double)populacao2 + area2 + PIB2 + numerodepontosturisticos2 + pibpercapita2;

    // Cálculo do inverso da densidade para Super Poder 2

    double inversodensidade2 = 0.0;

    if (densidadepopulacional2 == 0.0f && populacao2 == 0) {
        inversodensidade2 = 0.0;

    } else if (densidadepopulacional2 == 0.0f && populacao2 > 0) {
        inversodensidade2 = 1000000.0;

    } else {
        inversodensidade2 = 1.0 / densidadepopulacional2;
    }
    
    superpoder2 = soma2 + inversodensidade2;

    break;

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

case 2:

//Descrição das regras
    printf(">>>> Regras do jogo <<<<\n");
    printf("\n");
    printf("Cadastre 2 cartas, informando:\n");
    printf("\n");
    printf("A - CÓDIGO DA CARTA ( EX. A01 ).\n");
    printf("B - NOME DA CIDADE.\n");
    printf("C - ESTADO.\n");
    printf("D - NÚMERO DE HABITANTES.\n");
    printf("E - ÁREA DA CIDADE.\n");
    printf("F - PIB.\n");
    printf("G - QUANTIDADE DE PONTOS TURÍSTICOS.\n");
    printf("\n");
    printf("O jogo calculará automaticamente o SUPER PODER da carta (soma de todos os atributos,\n");
    printf("calculará também a DENSIDADE POPULACIONAL.\n");
    printf("\n");
    printf("Escolha no menu um dos atributos para comparar.\n");
    printf("O jogo exibirá qual carta foi a vencedora de acordo com o atributo escolhido.\n");
    printf("\n");
    break;

case 3:

printf("SAINDO DO JOGO\n");
printf("OBRIGADO POR JOGAR!\n");
printf("\n");
    return 0;

default:
printf(">>>>> OPÇÃO INVÁLIDA <<<<<\n");

    break;
}

//Menu interativo do jogo:
if (opcao1 == 1){
while (1){

printf("\n");
printf("VAMOS JOGAR!!!\n");
printf("\n");
printf("1. Ver as duas cartas\n");
printf("2. Comparar número de HABITANTES\n");
printf("3. Comparar a ÁREA DA CIDADE\n");
printf("4. Comparar o PIB\n");\
printf("5. Comparar o numero de pontos turísticos\n");
printf("6. Comparar densidade populacional\n");
printf("7. Comparar PIB percapta\n");
printf("8. Comparar >>> SUPER PODER <<<\n");
printf("9. SAIR\n");
printf("Escolha uma opção:\n");
printf("\n");
scanf("%d", &opcao2);


switch (opcao2)
    {
    case 1:
        printf("\n>>> CARTA 1 <<<\n");
        printf("COD: %s\n", codigocarta1);
        printf("Cidade: %s\n", cidade1);
        printf("Estado: %s\n", estado1);
        printf("População: %d habitantes\n", populacao1);
        printf("Área: %.1f km²\n", area1);
        printf("PIB: R$ %.2lf\n", PIB1);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos1);
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional1);
        printf("PIB per Capita: R$ %.2lf\n", pibpercapita1);
        printf("*******SUPER PODER %.2lf\n", (double)superpoder1); 
        
        printf("\n>>> CARTA 2 <<<\n");
        printf("COD: %s\n", codigocarta2);
        printf("Cidade: %s\n", cidade2);
        printf("Estado: %s\n", estado2);
        printf("População: %d habitantes\n", populacao2);
        printf("Área: %.1f km²\n", area2);
        printf("PIB: R$ %.2lf\n", PIB2);
        printf("Número de pontos turísticos: %d\n", numerodepontosturisticos2);
        printf("Densidade populacional: %.2f hab/km²\n", densidadepopulacional2);
        printf("PIB per Capita: R$ %.2lf\n", pibpercapita2);
        printf("*******SUPER PODER %.2lf\n", (double)superpoder2);

        break;

    case 2:

    printf("\nATRIBUTO - POPULAÇÃO: \n");
    printf("Carta 1: %s (%s): %d HABITANTES \n", cidade1, estado1, populacao1);
    printf("Carta 2: %s (%s): %d HABITANTES \n", cidade2, estado2, populacao2);

     if (populacao1 > populacao2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (populacao1 < populacao2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }
        break;

    case 3:

    printf("ATRIBUTO - ÁREA: \n");
    printf("Carta 1: %s (%s): %.1f Km² \n", cidade1, estado1, area1);
    printf("Carta 2: %s (%s): %.1f Km² \n", cidade2, estado2, area2);

    if (area1 > area2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (area1 < area2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }
        break;
        
    case 4:

    printf("ATRIBUTO - PIB: \n");
    printf("Carta 1: %s (%s): R$ %.2f \n", cidade1, estado1, PIB1);
    printf("Carta 2: %s (%s): R$ %.2f \n", cidade2, estado2, PIB2);

    if (PIB1 > PIB2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (PIB1 < PIB2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }
        break;

    case 5:

    printf("ATRIBUTO - PONTOS TURÍSTICOS: \n");
    printf("Carta 1: %s (%s): %d \n", cidade1, estado1, numerodepontosturisticos1);
    printf("Carta 2: %s (%s): %d \n", cidade2, estado2, numerodepontosturisticos2);

    if (numerodepontosturisticos1 > numerodepontosturisticos2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (numerodepontosturisticos1 < numerodepontosturisticos2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }
        break;

    case 6:

    printf("ATRIBUTO - DENSIDADE POPULACIONAL: \n");
    printf("Carta 1: %s (%s): %.2f hab/km²\n", cidade1, estado1, densidadepopulacional1);
    printf("Carta 2: %s (%s): %.2f hab/km²\n", cidade2, estado2, densidadepopulacional2);

    if (densidadepopulacional1 < densidadepopulacional2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (densidadepopulacional1 > densidadepopulacional2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }
        break;

    case 7:

    printf("ATRIBUTO - PIB PER CAPTA: \n");
    printf("Carta 1: %s (%s): R$ %.2f \n", cidade1, estado1, pibpercapita1);
    printf("Carta 2: %s (%s): R$ %.2f \n", cidade2, estado2, pibpercapita2);

    if (pibpercapita1 > pibpercapita2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (pibpercapita1 < pibpercapita2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }      
        break;

    case 8:

    printf("ATRIBUTO - SUPER PODER: \n");
    printf("Carta 1: %s (%s): %.2lf \n", cidade1, estado1, superpoder1);
    printf("Carta 2: %s (%s): %.2lf \n", cidade2, estado2, superpoder2);

    if (superpoder1 > superpoder2)
    {
        printf("A CARTA 1 (%s) VENCEU!\n", cidade1);
    } else if (superpoder1 < superpoder2)
    {
        printf("A CARTA 2 (%s) VENCEU!\n", cidade2);
    } else {
        printf("EMPATE!!\n");
    }   
        break;

    case 9:
        printf("SAINDO DO JOGO!\n");
        printf("OBRIGADO POR JOGAR!\n");
        printf("\n");
        return 0;

    default:
        printf(">>>>> OPÇÃO INVÁLIDA <<<<<\n");

        break;
        
    }
    }}}}
