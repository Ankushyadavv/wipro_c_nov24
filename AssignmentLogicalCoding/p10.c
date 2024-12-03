//Convert the Odd elements in an array to Even numbers by adding one and Convert the Even elements into Odd by subtracting 1.
#include <stdio.h>

int main() {
    int arraySize;

    printf("Enter the size of the array: ");
    scanf("%d", &arraySize);

    int numbers[arraySize];

    printf("Enter the elements of the array:\n");
    for (int index = 0; index < arraySize; index++) {
        scanf("%d", &numbers[index]);
    }

    for (int index = 0; index < arraySize; index++) {
        if (numbers[index] % 2 == 0) {
            numbers[index]--; 
            numbers[index]++; 
        }
    }

    printf("Modified array:\n");
    for (int index = 0; index < arraySize; index++) {
        printf("%d ", numbers[index]);
    }
    printf("\n");

    return 0;
}