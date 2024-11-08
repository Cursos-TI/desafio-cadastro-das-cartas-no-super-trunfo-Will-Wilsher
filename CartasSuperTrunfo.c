#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    // variáveis separadas por estados

    int populacao_a[4];
    int area_a[4];
    int pib_a[4];
    int p_turisticos_a[4];

    int populacao_b[4];
    int area_b[4];
    int pib_b[4];
    int p_turisticos_b[4];

    int populacao_c[4];
    int area_c[4];
    int pib_c[4];
    int p_turisticos_c[4];

    int populacao_d[4];
    int area_d[4];
    int pib_d[4];
    int p_turisticos_d[4];

    int populacao_e[4];
    int area_e[4];
    int pib_e[4];
    int p_turisticos_e[4];

    int populacao_f[4];
    int area_f[4];
    int pib_f[4];
    int p_turisticos_f[4];

    int populacao_g[4];
    int area_g[4];
    int pib_g[4];
    int p_turisticos_g[4];

    int populacao_h[4];
    int area_h[4];
    int pib_h[4];
    int p_turisticos_h[4];

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //
    // Apresentação
    //

    printf("Bem-vindo ao jogo Super Trunfo, antes de começar a jogar iremos primeiro criar as cartas do jogo.\n");

    //
    // Entrada de dados para as quatro cidades do estado A
    //

    printf("\nInsira os dados do estado A.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_a[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_a[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_a[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_a[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_a[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_a[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_a[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_a[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_a[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_a[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_a[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_a[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_a[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_a[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_a[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_a[3]);

    //
    // Entrada de dados para as quatro cidades do estado B
    //

    printf("\nInsira os dados do estado B.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_b[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_b[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_b[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_b[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_b[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_b[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_b[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_b[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_b[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_b[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_b[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_b[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_b[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_b[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_b[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_b[3]);

    //
    // Entrada de dados para as quatro cidades do estado C
    //

    printf("\nInsira os dados do estado C.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_c[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_c[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_c[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_c[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_c[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_c[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_c[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_c[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_c[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_c[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_c[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_c[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_c[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_c[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_c[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_c[3]);

    //
    // Entrada de dados para as quatro cidades do estado D
    //

    printf("\nInsira os dados do estado D.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_d[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_d[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_d[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_d[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_d[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_d[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_d[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_d[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_d[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_d[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_d[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_d[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_d[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_d[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_d[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_d[3]);

    //
    // Entrada de dados para as quatro cidades do estado E
    //

    printf("\nInsira os dados do estado E.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_e[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_e[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_e[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_e[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_e[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_e[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_e[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_e[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_e[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_e[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_e[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_e[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_e[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_e[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_e[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_e[3]);

    //
    // Entrada de dados para as quatro cidades do estado F
    //

    printf("\nInsira os dados do estado F.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_f[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_f[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_f[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_f[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_f[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_f[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_f[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_f[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_f[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_f[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_f[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_f[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_f[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_f[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_f[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_f[3]);

    //
    // Entrada de dados para as quatro cidades do estado G
    //

    printf("\nInsira os dados do estado G.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_g[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_g[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_g[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_g[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_g[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_g[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_g[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_g[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_g[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_g[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_g[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_g[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_g[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_g[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_g[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_g[3]);

    //
    // Entrada de dados para as quatro cidades do estado H
    //

    printf("\nInsira os dados do estado H.\n");

    printf("\nInsira a quantidade de população da cidade 1: ");
    scanf("%d", &populacao_h[0]);
    printf("Insira a área da cidade 1: ");
    scanf("%d", &area_h[0]);
    printf("Insira o valor do PIB da cidade 1: ");
    scanf("%d", &pib_h[0]);
    printf("Insira a quantidade de pontos turisticos da cidade 1: ");
    scanf("%d", &p_turisticos_h[0]);

    printf("\nInsira a quantidade de população da cidade 2: ");
    scanf("%d", &populacao_h[1]);
    printf("Insira a área da cidade 2: ");
    scanf("%d", &area_h[1]);
    printf("Insira o valor do PIB da cidade 2: ");
    scanf("%d", &pib_h[1]);
    printf("Insira a quantidade de pontos turisticos da cidade 2: ");
    scanf("%d", &p_turisticos_h[1]);

    printf("\nInsira a quantidade de população da cidade 3: ");
    scanf("%d", &populacao_h[2]);
    printf("Insira a área da cidade 3: ");
    scanf("%d", &area_h[2]);
    printf("Insira o valor do PIB da cidade 3: ");
    scanf("%d", &pib_h[2]);
    printf("Insira a quantidade de pontos turisticos da cidade 3: ");
    scanf("%d", &p_turisticos_h[2]);

    printf("\nInsira a quantidade de população da cidade 4: ");
    scanf("%d", &populacao_h[3]);
    printf("Insira a área da cidade 4: ");
    scanf("%d", &area_h[3]);
    printf("Insira o valor do PIB da cidade 4: ");
    scanf("%d", &pib_h[3]);
    printf("Insira a quantidade de pontos turisticos da cidade 4: ");
    scanf("%d", &p_turisticos_h[3]);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    //
    // Mostrando as informações das quatro cidades do estado A
    //

    printf("\nEstado A:\n\n");

    printf("População cidade A1: %d \n", populacao_a[0]);
    printf("Área cidade A1: %d \n", area_a[0]);
    printf("PIB cidade A1: %d \n", pib_a[0]);
    printf("Pontos turisticos cidade A1: %d \n\n", p_turisticos_a[0]);

    printf("População cidade A2: %d \n", populacao_a[1]);
    printf("Área cidade A2: %d \n", area_a[1]);
    printf("PIB cidade A2: %d \n", pib_a[1]);
    printf("Pontos turisticos cidade A2: %d \n\n", p_turisticos_a[1]);

    printf("População cidade A3: %d \n", populacao_a[2]);
    printf("Área cidade A3: %d \n", area_a[2]);
    printf("PIB cidade A3: %d \n", pib_a[2]);
    printf("Pontos turisticos cidade A3: %d \n\n", p_turisticos_a[2]);

    printf("População cidade A4: %d \n", populacao_a[3]);
    printf("Área cidade A4: %d \n", area_a[3]);
    printf("PIB cidade A4: %d \n", pib_a[3]);
    printf("Pontos turisticos cidade A4: %d \n\n", p_turisticos_a[3]);

    //
    // Mostrando as informações das quatro cidades do estado B
    //

    printf("\nEstado B:\n\n");

    printf("População cidade B1: %d \n", populacao_b[0]);
    printf("Área cidade B1: %d \n", area_b[0]);
    printf("PIB cidade B1: %d \n", pib_b[0]);
    printf("Pontos turisticos cidade B1: %d \n\n", p_turisticos_b[0]);

    printf("População cidade B2: %d \n", populacao_b[1]);
    printf("Área cidade B2: %d \n", area_b[1]);
    printf("PIB cidade B2: %d \n", pib_b[1]);
    printf("Pontos turisticos cidade B2: %d \n\n", p_turisticos_b[1]);

    printf("População cidade B3: %d \n", populacao_b[2]);
    printf("Área cidade B3: %d \n", area_b[2]);
    printf("PIB cidade B3: %d \n", pib_b[2]);
    printf("Pontos turisticos cidade B3: %d \n\n", p_turisticos_b[2]);

    printf("População cidade B4: %d \n", populacao_b[3]);
    printf("Área cidade B4: %d \n", area_b[3]);
    printf("PIB cidade B4: %d \n", pib_b[3]);
    printf("Pontos turisticos cidade B4: %d \n\n", p_turisticos_b[3]);

    //
    // Mostrando as informações das quatro cidades do estado C
    //

    printf("\nEstado C:\n\n");

    printf("População cidade C1: %d \n", populacao_c[0]);
    printf("Área cidade C1: %d \n", area_c[0]);
    printf("PIB cidade C1: %d \n", pib_c[0]);
    printf("Pontos turisticos cidade C1: %d \n\n", p_turisticos_c[0]);

    printf("População cidade C2: %d \n", populacao_c[1]);
    printf("Área cidade C2: %d \n", area_c[1]);
    printf("PIB cidade C2: %d \n", pib_c[1]);
    printf("Pontos turisticos cidade C2: %d \n\n", p_turisticos_c[1]);

    printf("População cidade C3: %d \n", populacao_c[2]);
    printf("Área cidade C3: %d \n", area_c[2]);
    printf("PIB cidade C3: %d \n", pib_c[2]);
    printf("Pontos turisticos cidade C3: %d \n\n", p_turisticos_c[2]);

    printf("População cidade C4: %d \n", populacao_c[3]);
    printf("Área cidade C4: %d \n", area_c[3]);
    printf("PIB cidade C4: %d \n", pib_c[3]);
    printf("Pontos turisticos cidade C4: %d \n\n", p_turisticos_c[3]);

    //
    // Mostrando as informações das quatro cidades do estado D
    //

    printf("\nEstado D:\n\n");

    printf("População cidade D1: %d \n", populacao_d[0]);
    printf("Área cidade D1: %d \n", area_d[0]);
    printf("PIB cidade D1: %d \n", pib_d[0]);
    printf("Pontos turisticos cidade D1: %d \n\n", p_turisticos_d[0]);

    printf("População cidade D2: %d \n", populacao_d[1]);
    printf("Área cidade D2: %d \n", area_d[1]);
    printf("PIB cidade D2: %d \n", pib_d[1]);
    printf("Pontos turisticos cidade D2: %d \n\n", p_turisticos_d[1]);

    printf("População cidade D3: %d \n", populacao_d[2]);
    printf("Área cidade D3: %d \n", area_d[2]);
    printf("PIB cidade D3: %d \n", pib_d[2]);
    printf("Pontos turisticos cidade D3: %d \n\n", p_turisticos_d[2]);

    printf("População cidade D4: %d \n", populacao_d[3]);
    printf("Área cidade D4: %d \n", area_d[3]);
    printf("PIB cidade D4: %d \n", pib_d[3]);
    printf("Pontos turisticos cidade D4: %d \n\n", p_turisticos_d[3]);

    //
    // Mostrando as informações das quatro cidades do estado E
    //

    printf("\nEstado E:\n\n");

    printf("População cidade E1: %d \n", populacao_e[0]);
    printf("Área cidade E1: %d \n", area_e[0]);
    printf("PIB cidade E1: %d \n", pib_e[0]);
    printf("Pontos turisticos cidade E1: %d \n\n", p_turisticos_e[0]);

    printf("População cidade E2: %d \n", populacao_e[1]);
    printf("Área cidade E2: %d \n", area_e[1]);
    printf("PIB cidade E2: %d \n", pib_e[1]);
    printf("Pontos turisticos cidade E2: %d \n\n", p_turisticos_e[1]);

    printf("População cidade E3: %d \n", populacao_e[2]);
    printf("Área cidade E3: %d \n", area_e[2]);
    printf("PIB cidade E3: %d \n", pib_e[2]);
    printf("Pontos turisticos cidade E3: %d \n\n", p_turisticos_e[2]);

    printf("População cidade E4: %d \n", populacao_e[3]);
    printf("Área cidade E4: %d \n", area_e[3]);
    printf("PIB cidade E4: %d \n", pib_e[3]);
    printf("Pontos turisticos cidade E4: %d \n\n", p_turisticos_e[3]);

    //
    // Mostrando as informações das quatro cidades do estado F
    //

    printf("\nEstado F:\n\n");

    printf("População cidade F1: %d \n", populacao_f[0]);
    printf("Área cidade F1: %d \n", area_f[0]);
    printf("PIB cidade F1: %d \n", pib_f[0]);
    printf("Pontos turisticos cidade F1: %d \n\n", p_turisticos_f[0]);

    printf("População cidade F2: %d \n", populacao_f[1]);
    printf("Área cidade F2: %d \n", area_f[1]);
    printf("PIB cidade F2: %d \n", pib_f[1]);
    printf("Pontos turisticos cidade F2: %d \n\n", p_turisticos_f[1]);

    printf("População cidade F3: %d \n", populacao_f[2]);
    printf("Área cidade F3: %d \n", area_f[2]);
    printf("PIB cidade F3: %d \n", pib_f[2]);
    printf("Pontos turisticos cidade F3: %d \n\n", p_turisticos_f[2]);

    printf("População cidade F4: %d \n", populacao_f[3]);
    printf("Área cidade F4: %d \n", area_f[3]);
    printf("PIB cidade F4: %d \n", pib_f[3]);
    printf("Pontos turisticos cidade F4: %d \n\n", p_turisticos_f[3]);

    //
    // Mostrando as informações das quatro cidades do estado G
    //

    printf("\nEstado G:\n\n");

    printf("População cidade G1: %d \n", populacao_g[0]);
    printf("Área cidade G1: %d \n", area_g[0]);
    printf("PIB cidade G1: %d \n", pib_g[0]);
    printf("Pontos turisticos cidade G1: %d \n\n", p_turisticos_g[0]);

    printf("População cidade G2: %d \n", populacao_g[1]);
    printf("Área cidade G2: %d \n", area_g[1]);
    printf("PIB cidade G2: %d \n", pib_g[1]);
    printf("Pontos turisticos cidade G2: %d \n\n", p_turisticos_g[1]);

    printf("População cidade G3: %d \n", populacao_g[2]);
    printf("Área cidade G3: %d \n", area_g[2]);
    printf("PIB cidade G3: %d \n", pib_g[2]);
    printf("Pontos turisticos cidade G3: %d \n\n", p_turisticos_g[2]);

    printf("População cidade G4: %d \n", populacao_g[3]);
    printf("Área cidade G4: %d \n", area_g[3]);
    printf("PIB cidade G4: %d \n", pib_g[3]);
    printf("Pontos turisticos cidade G4: %d \n\n", p_turisticos_g[3]);

    //
    // Mostrando as informações das quatro cidades do estado H
    //

    printf("\nEstado H:\n\n");

    printf("População cidade H1: %d \n", populacao_h[0]);
    printf("Área cidade H1: %d \n", area_h[0]);
    printf("PIB cidade H1: %d \n", pib_h[0]);
    printf("Pontos turisticos cidade H1: %d \n\n", p_turisticos_h[0]);

    printf("População cidade H2: %d \n", populacao_h[1]);
    printf("Área cidade H2: %d \n", area_h[1]);
    printf("PIB cidade H2: %d \n", pib_h[1]);
    printf("Pontos turisticos cidade H2: %d \n\n", p_turisticos_h[1]);

    printf("População cidade H3: %d \n", populacao_h[2]);
    printf("Área cidade H3: %d \n", area_h[2]);
    printf("PIB cidade H3: %d \n", pib_h[2]);
    printf("Pontos turisticos cidade H3: %d \n\n", p_turisticos_h[2]);

    printf("População cidade H4: %d \n", populacao_h[3]);
    printf("Área cidade H4: %d \n", area_h[3]);
    printf("PIB cidade H4: %d \n", pib_h[3]);
    printf("Pontos turisticos cidade H4: %d \n\n", p_turisticos_h[3]);

    return 0;
}