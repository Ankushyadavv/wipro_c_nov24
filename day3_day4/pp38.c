//Right angled triangle

#include <stdio.h>

int main() {
    int inputNumber;
    scanf("Enter a number : %d \n", &inputNumber);

    for (int i = 0; i < inputNumber; i++) 
    {
        for (int j = 0; j <= i; j++) {
            printf("*");
        } 
        printf("\n");
    }
    
}