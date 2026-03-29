#include <stdio.h>

int main() {
    int anos; int meses; int dias;
    scanf("%d", &anos);
    scanf("%d", &meses);
    scanf("%d", &dias);
    int diasTotais  =  360 * anos + 30 * meses + dias;
    printf("Voce ja viveu %d dias", diasTotais);
    return 0;
}