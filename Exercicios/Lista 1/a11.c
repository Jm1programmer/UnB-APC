#include <stdio.h>

double ctof(double c) {
    
    double f = (c * 9/5) + 32;
    
    return f;
}

int main() {
    double c; 
    scanf("%lf", &c);
    printf("%.1lf",ctof(c));
    
    return 0;
}