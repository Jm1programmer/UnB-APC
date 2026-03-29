#include <stdio.h>
#include <math.h>
  double powAPC(double x, double y);
int main() {
    double x; double y;

    scanf("%lf", &x);  scanf("%lf", &y);

    printf("%.0lf", powAPC(x,y));

    return 0;
}

  double powAPC(double x, double y) {
    double num = x;
    for (double i = 0; i < (y - 1); i++)
    {
        num *=x;
    }
    
 return num;
    
}