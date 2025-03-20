#include <stdio.h>

int main() {
    char Estado[50], Estado2[50];
    char Codigo[20], Codigo2[20];
    char Nome_da_cidade[100], Nome_da_cidade2[100];
    float Populacao, Populacao2;
    float Area, Area2;
    float PIB, PIB2;
    int Numero_de_pontos_turisticos, Numero_de_pontos_turisticos2;
    
    // Solicitar as informações das cartas
    printf("\n--- CARTA 1 ---\n");
    printf("Digite uma letra de 'A' a 'H'(representando um dos oito estados): \n");
    
    printf("Estado: \n", Estado); 
    scanf("%s", Estado);

    printf("O código contem o estado + o número da cidade\n");
    printf("EX: A01, B02, C03, D04, E05, F06, G07, H08\n");
    printf("Código: \n", Codigo);
    scanf("%s", Codigo);

    printf("Obs: Se o nome da cidade conter acentos(não digite-os) ou espaços(troque por _)\n");

    printf("Nome da Cidade: \n", Nome_da_cidade);
    scanf("%s", Nome_da_cidade);

    printf("População: habitantes\n", Populacao);
    scanf("%f", &Populacao);

    printf("Área: km²\n", Area);
    scanf("%f", &Area);

    printf("PIB: bilhões de reais\n", PIB);
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos: \n", Numero_de_pontos_turisticos);
    scanf("%d", &Numero_de_pontos_turisticos);

    printf("\n--- CARTA 2 ---\n");
    printf("\n--- Informações da Cidade ---\n");
    printf("Obs: Se o nome da cidade conter acentos(não digite-os) ou espaços(troque por _)\n");
    printf("Estado: \n", Estado2);
    scanf("%s", Estado2);

    printf("O código contem o estado + o número da cidade\n");
    printf("EX: A01, B02, C03, D04, E05, F06, G07, H08\n");
    printf("Código: \n", Codigo2);
    scanf("%s", Codigo2);

    printf("Nome da Cidade: \n", Nome_da_cidade2);
    scanf("%s", Nome_da_cidade2);

    printf("População: habitantes\n", Populacao2);
    scanf("%f", &Populacao2);

    printf("Área: km²\n", Area2);
    scanf("%f", &Area2);

    printf("PIB: bilhões de reais\n", PIB2);
    scanf("%f", &PIB2);
    
    printf("Número de Pontos Turísticos: \n", Numero_de_pontos_turisticos2);
    scanf("%d", &Numero_de_pontos_turisticos2);

    // Exibir as informações digitadas
    printf("\n=== INFORMAÇÕES DAS CARTAS ===\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código: %s\n", Codigo);
    printf("Nome da Cidade: %s\n", Nome_da_cidade);
    printf("População: %.2f habitantes\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Populacao / Area);
    printf("Pib per capita: %.2f\n", PIB / Populacao);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", Codigo2);
    printf("Nome da Cidade: %s\n", Nome_da_cidade2);
    printf("População: %.2f habitantes\n", Populacao2);
    printf("Área: %.2f km²\n", Area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", Populacao2 / Area2);
    printf("Pib per capita: R$%.2f\n", PIB2 / Populacao2);
}

