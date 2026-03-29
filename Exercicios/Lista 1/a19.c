#include <stdio.h>

void age(int d) {
 int m = 0;
 int a = 0;
 int d_ = d;
 
 m = d_ / 30;
 d_ = d_ % 30;
 a = m / 12;
 m = m % 12;

 printf("%d ano(s), %d mes(es) e %d dia(s)\n", a, m, d_);
 

}

int main() {
    int d1; int d2; int d3;
scanf("%d %d %d",&d1, &d2, &d3);
age(d1); age(d2); age(d3);
    return 0;
}

