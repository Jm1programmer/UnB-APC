#include <stdio.h>

int main() {
    //Vaso sanitario => 12 litros
    //1min de chuveiro -> 9 litros
    //1 min de Torneira -> 2 litros
    int v = 0; int c = 0; int t = 0;
    scanf(" %d",&v);
     scanf(" %d",&c);
      scanf(" %d",&t);
      int soma = 12 * v +  9 * c + 2 * t;
      printf("Você economizou %d litros de água", soma);
      

    return 0;
}