#include <stdio.h>

int find_smallest(int arr[], int n) {

    if (n == 1) {
        return arr[0];
    }

    int smallest_of_rest = find_smallest (arr + 1, n - 1);
    return arr[0] < smallest_of_rest ? arr[0] : smallest_of_rest;
}

int main() {
    int arr[] = {38, 60, 2, 99, 67};
    int n = sizeof (arr) / sizeof (arr[0]);

    int smallest = find_smallest (arr, n);

    printf("Smallest number in the array: %d \n", smallest);

    return 0;
}