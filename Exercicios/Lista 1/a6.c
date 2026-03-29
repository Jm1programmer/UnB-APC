#include <stdio.h>

int main() {
    // C = Custo, G = Guardado M = Quantos Meses para a viagem
    float c; float g; float m;

    scanf(" %f",&c);
    scanf(" %f",&g);
    scanf(" %f",&m);

    float porMes = (c - g) / m;

    printf("Voce precisa economizar R$%.2f por mes",porMes);


    return 0;
}