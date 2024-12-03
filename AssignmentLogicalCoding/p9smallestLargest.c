//Find the smallest and biggest elements of the array of size N which is given by user (array is of type double)
#include <stdio.h>

int main() {
    int N;

    printf("Enter the size of the array: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("Error: Array size must be positive.\n");
        return 1;
    }

    double arr[N];

    printf("Enter the elements of the array: \n");
    for (int i = 0; i < N; i++) {
        scanf("%lf", &arr[i]);
    }

    double smallest = arr[0], largest = arr[0];

    for (int i = 1; i < N; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("Smallest element: %.2lf \n", smallest);
    printf("Largest element: %.2lf \n", largest);

    return 0;
}