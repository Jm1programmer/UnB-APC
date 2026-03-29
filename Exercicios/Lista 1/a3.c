#include <stdio.h>
int main() {
 char a;
 char b;
 char c;
    scanf(" %c",&a);
    scanf(" %c",&b);
    
    scanf(" %c",&c);

    printf("%c%c%c\n",a,b,c);
    printf("%c\n",a);
    printf("%c%c\n",b,b);
    printf("%c %c %c\n", c,c,c);
    printf("X == %c, Y == %c, Z == %c\n",a,b,c);
    printf("X != %c, Y != %c, Z == %c",b,a,c);
    return 0;
}