#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {

   
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char Estado1[20];
    char Codigo1 [10];
    char Cidade1 [30];
    int Populacao1;
    float Area1;
    float pib1;
    int PontosTuristicos1;

    char Estado2 [20];
    char Codigo2 [10];
    char Cidade2 [30];
    int Populacao2;
    float Area2;
    float pib2;
    int PontosTuristicos2;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    
    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("Entre com os dados da carta 1: \n");
    printf("Digite o estado: \n");
    scanf("%s", &Estado1);
    printf("Digite o codigo: \n");
    scanf("%s", Codigo1);
    printf("Digite a cidade: \n");
    scanf("%s", &Cidade1);
    printf("Digite a populacao: \n");
    scanf("%d", &Populacao1);
    printf("Digite a area (em km²): \n");
    scanf("%f",&Area1);
    printf("Digite o PIB: \n");
    scanf("%f",&pib1);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&PontosTuristicos1);

    printf("Entre com os dados da carta 2: \n");
    printf("Digite o estado: \n");
    scanf("%s", &Estado2);
    printf("Digite o codigo: \n");
    scanf("%s", Codigo2);
    printf("Digite a cidade: \n");
    scanf("%s", &Cidade2);
    printf("Digite a populacao: \n");
    scanf("%d", &Populacao2);
    printf("Digite a area (em km²): \n");
    scanf("%f",&Area2);
    printf("Digite o PIB: \n");
    scanf("%f",&pib2);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d",&PontosTuristicos2);





    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    if(Populacao1>Populacao2){
        printf("Cidade 1 tem maior população.\n");
    } else {printf("Cidade 2 tem maior população.\n");}
    if(Area1>Area2){
        printf("Cidade 1 tem maior area.\n");
    } else {printf("Cidade 2 tem maior area.\n");}
    if(pib1>pib2){
        printf("Cidade 1 tem maior pib.\n");
    } else {printf("Cidade 2 tem maior pib.\n");}
    if(PontosTuristicos1>PontosTuristicos2){
        printf("Cidade 1 tem mais pontos turisticos.\n");
    } else {printf("Cidade 2 tem mais pontos turisticos.\n");};

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    

    return 0;
}
