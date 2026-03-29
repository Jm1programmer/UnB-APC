#include <stdio.h>
//1h = 60 min; 1 min = 60s;
int main() {
    int h, m,s = 0;
    scanf("%d:%d:%d", &h,&m,&s);
    s+= m * 60 + h * 60 * 60;
    printf("La se foram %d segundos que nao voltam mais...", s);

    return 0;
}