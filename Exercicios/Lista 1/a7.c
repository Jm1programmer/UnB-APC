#include <stdio.h>

int main(){
    
    float conta, porc, gorj, total;

    scanf("%f %f", &conta, &porc);
    
    gorj = conta*(porc/100);
    total = gorj + conta;
    
    printf("Valor da gorjeta: R$%.2f \n", gorj);
    printf("Valor total: R$%.2f \n", total);
    
    return 0;
}