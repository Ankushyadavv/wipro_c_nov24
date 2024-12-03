//Count the times an element is present in an Array
#include <stdio.h>

void countOccurrences(int numbers[], int size) {
    int i, j, frequency;

    for (i = 0; i < size; i++) {
        frequency = 1;

        for (j = i + 1; j < size; j++) {
            if (numbers[i] == numbers[j]) {
                frequency++;
            }
        }

        printf("Element %d occurs %d times\n", numbers[i], frequency);
    }
}

int main() {
    int numbers[] = {10, 20, 30, 10, 20, 40, 10, 50, 20};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    countOccurrences(numbers, size);

    return 0;
}