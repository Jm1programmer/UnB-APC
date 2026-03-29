#include <stdio.h>

void age(int d) {
 int m = 0;
 int a = 0;
 int d_ = d;
 
 m = d_ / 30;
 d_ = d_ % 30;
 a = m / 12;
 m = m % 12;

 printf("%d ", a);
  printf("%d ", m);
   printf("%d\n", d_);
 

}

int main() {
    int d1; int d2; int d3;
scanf("%d",&d1);
scanf("%d",&d2);
scanf("%d",&d3);
age(d1); age(d2); age(d3);
    return 0;
}

