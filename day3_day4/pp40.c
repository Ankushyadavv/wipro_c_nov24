#include <stdio.h>

int main() {
    int inputNumber;
    scanf("Enter a number : %d\n", &inputNumber);

    for(int i = 1; i < inputNumber; i++) {
        if( i == 1 || i == inputNumber - 1) {
            for(int j = 1; j <= inputNumber; j++) {
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