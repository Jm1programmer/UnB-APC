#include <stdio.h>
#include <string.h>
#include <ctype.h>




void TransfMaisculo(char min[]) {
    for (int i = 0; i < strlen(min); i++)
    {
        min[i] = toupper(min[i]);
    }
    
};

void hexadecimal( int numero) {
    char bin[50] = "";
  
  
        sprintf(bin, "%x", numero);
        TransfMaisculo(bin);
        printf("0x%s\n", bin);
}



int main() {
    int num;


    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        hexadecimal(num);
    }
    
    



    return 0;
}