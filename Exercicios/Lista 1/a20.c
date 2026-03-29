//Para homens, peso ideal = 72.7 x alt - 58 e, para mulheres, peso ideal = 62.1 x alt - 44.7;
#include <stdio.h>

int main() {

    float a;
    scanf("%f", &a);
    float h =  72.7 * a -  58;
    float m = 62.1 * a - 44.7;

    printf("%.2f %.2f", h, m);

    return 0;
    
}


