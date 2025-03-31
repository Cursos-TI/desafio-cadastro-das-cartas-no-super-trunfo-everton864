
#include <stdio.h>

int main() {
    
    printf("Desafio Super Trunfo: Cadastrar duas cartas\n"); // Breve explicação
    printf("Cadastro da carta 1/2:\n"); // Inicio do cadastro das cartas 1/2
    
    char Estado[50];
    char Codigo[5];
    char Nome[20];
    int Populacao;
    float Area;
    float PIB;
    float Numero;

    printf("Digite a inicial do nome do Estado:\n");
    scanf("%s" , &Estado);

    printf("Digite o código da cidade:\n");
    scanf("%s" , &Codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s" , &Nome);

    printf("População:\n");
    scanf("%f",&Populacao);

    printf("Área:\n");
    scanf("%f" , &Area);

    printf("PIB:\n");
    scanf("%f" , &PIB);

    printf("Numero de pontos turísticos:\n\n");
    scanf("%i" , &Numero);


printf("Carta 1/2:\n O nome do Estado é:%s - O código da cidade é:%s - O nome da cidade é: %s - Total da população é: %i - O tamanho da área é: %f - O PIB é: %f - Total de pontos turísticos: %i\n\n" , Estado , Codigo , Nome , Populacao , Area , PIB , Numero);
   
printf("Cadasto da carta 2/2\n"); // Inicio do cadastro da carta 2/2

    char estado[50];
    char codigo[5];
    char cidade[50];
    int populacao;
    float area;
    float pIb;
    float numero;

    printf("Digite a inicial do nome do Estado:\n");
    scanf("%s" , estado);

    printf("Digite o código da cidade:\n");
    scanf("%s" , &codigo);

    printf("Digite o nome da cidade:\n");
    scanf("%s" , &cidade);

    printf("População:\n");
    scanf("%f" , &populacao);

    printf("Área:\n");
    scanf("%f" , &area);

    printf("Digite o PIB:\n");
    scanf("%f" , &pIb);

    printf("Número de pontos turísticos:\n");
    scanf("%i" , &numero);

    printf("O nome do Estado é:%s - O código da cidade é:%s - Digite o nome da cidade:%s - Total da população:%f - O tamanho da área é:%f - O PIB é:%f - Total de pontos turísticos é:%i\n\n" , estado , codigo , cidade , populacao , area , pIb , numero);
    return 0;
}
