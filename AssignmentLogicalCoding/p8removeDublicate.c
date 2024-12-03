//Remove duplicate elements from the Array and shift theelements 
//(If n duplicate elements are removed then n zeroes should trail in the array)

#include <stdio.h>

void remove_duplicates(int numbers[], int size) {
    int i, j;

    j = 0;

    for (i = 0; i < size; i++) {
    
        if (numbers[i] != numbers[j]) {
            numbers[j++] = numbers[i];
        }
    }

    while (j < size) {
        numbers[j++] = 0;
    }
}

int main() {
    int numbers[] = {10, 20, 20, 30, 30, 40, 50, 50};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    remove_duplicates(numbers, size);

    printf("\n Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}