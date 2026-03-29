#include <stdio.h>

int main() {
    float a, b, c;
    
    scanf("%f %f %f", &a, &b, &c);
    
    float du = a * 1.10;
    float dudu = b * 1.10;
    float edu = c * 1.10;
    
    float total = du + dudu + edu;
    
    printf("%.2f %.2f %.2f\n", du, dudu, edu);
    printf("%.2f\n", total);

    return 0;
}