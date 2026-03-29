// Diametro = 2r
// Perimetro = 2 * pi * r
// Area = pi * r* r

#include <stdio.h>

int main() {
    float r;
    scanf(" %f", &r);
    float PI = 3.14159;
    float D = 2 * r;
    float P = 2 * PI * r;
    float A = PI * r * r;

    printf("%.2f\n", D);
    printf("%.2f\n", A);
    printf("%.2f\n", P);

    return 0;
}