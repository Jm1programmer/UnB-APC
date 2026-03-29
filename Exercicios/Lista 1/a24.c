#include <stdio.h>

int main() {
    float n1,n2,n3;
    int p1,p2,p3;
    scanf("%f %f %f", &n1,&n2,&n3);
    scanf("%d %d %d", &p1, &p2, &p3);
    n1 *= p1;
    n2 *= p2;
    n3 *= p3;
    float nf = (n1 + n2 + n3) / (p1 + p2 + p3);
    printf("%f", nf);

    return 0;
}