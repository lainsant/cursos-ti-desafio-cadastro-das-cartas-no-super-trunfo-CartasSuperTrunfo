
#include <stdio.h>

int main () {
    // dados carta 1 
    int populacao1 = 1232500 ; 
    int pontoturistico1 = 50 ;
    float pib1 = 699.28 ; 
    float areakm1 = 1521.11;
    char estado1 = 'A';
    char nome1[20] = "São Paulo";
    char codigo1[] = "A01";
    char carta1[10] = "Carta 1";

    // dados carta 2 
    int populacao2 = 6748000; 
    int pontoturistico2 = 30;
    float pib2 = 300.50; 
    float areakm2 = 1200.25;
    char estado2 = 'B';
    char nome2[20] = "Rio de Janeiro";
    char codigo2[] = "B02";  
    char carta2[7] = "Carta 2";

    // imprimindo carta 1 
    printf("\n%s\n", carta1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", nome1);
    printf("Estado: %c\n", estado1);
    printf("Numero de habitantes: %d\n", populacao1);
    printf("Quantidade de pontos turisticos: %d\n", pontoturistico1);
    printf("PIB: R$ %.2f bilhoes\n", pib1);
    printf("Area: %.2f km²\n", areakm1);

    // impriminddo carta 2 
    printf("\n%s\n", carta2);
    printf("Cidade: %s\n", nome2);
    printf("Codigo: %s\n", codigo2);
    printf("Estado: %c\n", estado2);
    printf("Numero de habitantes: %d\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontoturistico2);
    printf("PIB: R$ %.2f bilhoes\n", pib2);
    printf("Area: %.2f km²\n", areakm2);

    return 0;
}



// // Desafio Super Trunfo - Países
// // Tema 1 - Cadastro das Cartas
// // Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// // Siga os comentários para implementar cada parte do desafio.
// //Teste larissa

// int main() {
//     // Sugestão: Defina variáveis separadas para cada atributo da cidade.
//     // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
//     // Cadastro das Cartas:
//     // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
//     // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
//     // Exibição dos Dados das Cartas:
//     // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
//     // Exiba os valores inseridos para cada atributo da cidade, um por linha.

//     return 0;
// }
