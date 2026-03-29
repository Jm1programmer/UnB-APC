#include <stdio.h>


int main() {

    for (size_t i = 0; i < 5; i++)
    {
        int a; int b;
        scanf(" %d %d", &a, &b);
          if ( a > b)   printf("%d\n",a);
    if (b > a)  printf("%d\n", b);
       if (b == a) printf("%d\n", a);
    }
    

    return 0;
}