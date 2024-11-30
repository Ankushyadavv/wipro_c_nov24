//Swap consecutive elements of an Array using a for loop.

#include <stdio.h>

int main() {
    int numbers[5] = {1, 2, 3, 4, 5};
    int count = 5;
    int index;

    printf("Original array:\n");
    for (index = 0; index < count; index++) {
        printf("%d ", numbers[index]);
    }

    for (index = 0; index < count - 1; index += 2) {
        int temp = numbers[index];
        numbers[index] = numbers[index + 1];
        numbers[index + 1] = temp;
    }

    printf("\nArray after swapping consecutive elements:\n");
    for (index = 0; index < count; index++) {
        printf("%d ", numbers[index]);
    }

    return 0;
}