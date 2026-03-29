#include <stdio.h> 

int main() {
    char input;
    scanf("%c",&input);
    printf("%c\n",input); //a
    printf("%c",input); //aa
    printf("%c\n",input); //aa
        printf("%c ",input); //a a
    printf("%c\n",input); //a a

    printf("2%c\n",input); //2a
    printf("[%c]\n",input); //[a]
}