#include <stdio.h>

int main() {
//Imc = P / Al * Al
double P; double A;

scanf("%lf", &P);scanf("%lf", &A);
double IMC = P /( A * A);
printf("Seu IMC é: %.2lf", IMC);

    return 0;
}