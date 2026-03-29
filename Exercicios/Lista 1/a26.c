#include <stdio.h>

void hour(int s) {
 int m = 0;
 int h = 0;
 
 m = s / 60;
 s = s % 60;
 h = m / 60;
 m = m % 60;

 printf("%dh %02dm %02ds", h, m, s);
 

}

int main() {

    int s;
    scanf("%d", &s) ;
    hour(s);
    return 0;
}

