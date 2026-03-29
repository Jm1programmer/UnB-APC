// Z = 3 * C = 15;

#include <stdio.h>

int main() {
    int c = 0;
    scanf("%d", &c);
    int z = 3 * c - 15;
    
    printf("%d graus Celsius equivalem a %d graus Zork", c, z);
    
    return 0;
}