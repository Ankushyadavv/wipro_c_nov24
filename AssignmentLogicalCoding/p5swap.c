//Swap the 1st half of an Array with the 2nd half elements.
#include <stdio.h>

void swap_halves(int arr[], int n) {
    int mid = n / 2;
    int i = 0, j = mid;

    while (i < mid && j < n) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;

        i++;
        j++;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    swap_halves(arr, n);

    printf("\nSwapped array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}