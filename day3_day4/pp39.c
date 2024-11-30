//hollow square
#include <stdio.h>

int main() {
    int inputNumber;
    scanf("Enter a number : %d\n", &inputNumber);

    for(int i = 0; i < inputNumber; i++) {
        if( i == 0 || i == inputNumber - 1) {
            for(int j = 0; j < inputNumber; j++) {
                printf("*");
            }
            printf("\n");
        }
        else {
            printf("*");
            for(int j = 0; j < inputNumber-2; j++) {
                printf(" ");
            }
            printf("*\n");
        }
    }
}