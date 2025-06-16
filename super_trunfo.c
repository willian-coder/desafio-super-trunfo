#include <stdio.h>
#include <string.h>

int main() {
    
// VARIAVEIS DA PRIMEIRA CARTA
int numPontosTuristicos1, populacao1 = 0;
float area1, pib1 = 0.00;
char estado1[10];
char codcarta1[8];
char nomeCidade1[45];

//Carta numero 1
printf("Escolha sua primeira carta \n");

//tipo char
printf("Digite um estado: \n");
scanf("%s", estado1);

//tipo char
printf("Código da carta: \n");
scanf("%s", codcarta1);

//tipo char permitindo espaços
printf("Digite uma cidade: \n");
getchar(); // Limpa o buffer antes de fgets
fgets(nomeCidade1, 45, stdin);
nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

//tipo int
printf("Digite a população: \n");
scanf("%d", &populacao1);

//tipo float
printf("Digite a área: \n");
scanf("%f", &area1);

//tipo float
printf("Digite o PIB: \n");
scanf("%f", &pib1);

//tipo int
printf("Número de pontos turisticos:");
scanf("%d", &numPontosTuristicos1);

//--------------------------------------------------------------

// VARIAVEIS DA SEGUNDA CARTA
int numPontosTuristicos2, populacao2 = 0;
float area2, pib2 = 0.00;
char estado2[10];
char codcarta2[8];
char nomeCidade2[45];

//Carta numero 2
printf("\n\nEscolha sua segunda carta \n");

//tipo char
printf("Digite um estado: \n");
scanf("%s", estado2);

//tipo char
printf("Código da carta: \n");
scanf("%s", codcarta2);

//tipo char permitindo espaços
printf("Digite uma cidade: \n");
getchar(); // Limpa o buffer antes de fgets
fgets(nomeCidade2, 45, stdin);
nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

//tipo int
printf("Digite a população: \n");
scanf("%d", &populacao2);

//tipo float
printf("Digite a área: \n");
scanf("%f", &area2);

//tipo float
printf("Digite o PIB: \n");
scanf("%f", &pib2);

//tipo int
printf("Número de pontos turisticos: \n");
scanf("%d", &numPontosTuristicos2);

//Exibição primeira carta
printf("\nCarta 1:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codcarta1);
printf("Nome da Cidade: %s\n", nomeCidade1);
printf("População: %d\n", populacao1);
printf("Área: %.2f\n", area1);//limitado a duas casas
printf("PIB: %.2f\n", pib1);//limitado a duas casas
printf("Numero de pontos turisticos: %d\n", numPontosTuristicos1);

//Exibição segunda carta
printf("\nCarta 2:\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codcarta2);
printf("Nome da Cidade: %s\n", nomeCidade2);
printf("População: %d\n", populacao2);
printf("Área: %.2f\n", area2);//limitado a duas casas
printf("PIB: %.2f\n", pib2);//limitado a duas casas
printf("Numero de pontos turisticos: %d\n", numPontosTuristicos2);

//finalizado
return 0;

}