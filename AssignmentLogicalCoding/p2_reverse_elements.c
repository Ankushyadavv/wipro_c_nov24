//Reverse the elements of an Array using a while loop.
#include <stdio.h>

void reverse_array(int numbers[], int size) {
    int left = 0, right = size - 1;

    while (left < right) {
        
        int temp = numbers[left];
        numbers[left] = numbers[right];
        numbers[right] = temp;

        left++;
        right--;
    }
}

int main() {
    int numbers[] = {5, 6, 7, 8, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    reverse_array(numbers, size);

    printf("\n Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}