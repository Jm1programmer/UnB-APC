#include <stdio.h>
#include <string.h>

void invertString(char str[]) {
    int tam = strlen(str);
    char carac;

    // Percorre até a metade da string até pq se não inverteria, so pensar 
    for ( int i = 0; i < tam / 2; i++) {
      
        carac = str[i];
        str[i] = str[tam - 1 - i]; //Caractere do final vai pro inicio => 10010 => 01001
        str[tam - 1 - i] = carac; //Caractere do inicio vai pro final => 00011;
    }
}

void binario( int numero) {
    char bin[50] = "";
    int num_ = numero;
  
        while (numero > 0)
        {
             int add = numero % 2;
            numero /= 2;
           int tam = strlen(bin);
            snprintf(bin + tam, 50,"%d", add);
        }

        if (num_ == 0) {
             int tam = strlen(bin);
            snprintf(bin + tam, 50,"%d", 0);
        }

        invertString(bin);
        
        
        printf("0b%s\n", bin);
}

int main() {
    int num;


    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num);
        binario(num);
    }
    
    



    return 0;
}