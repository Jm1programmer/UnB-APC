//Moedas: G, S, N
//G = 17S;
//S = 29N;
#include <stdio.h>

int main() {

int S = 0; int G = 0; int N = 0;

scanf("%d", &G); scanf("%d", &S); scanf("%d",&N);

N += (G * 17 * 29) + S * 29;

printf("O bruxo possui %d Nuques", N);

return 0;

}