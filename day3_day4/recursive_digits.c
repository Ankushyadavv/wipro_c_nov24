#include <stdio.h>

int sum_of_digits (int n) {

    if (n == 0) {
        return 0;
    }

    return n % 10 + sum_of_digits (n / 10);
}

int main() {
    int num;

    printf("enter  non-negative integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("enter non-negative integer. \n");
    } else {
        int sum = sum_of_digits (num);
        printf("Sum of digits of  %d = %d \n", num, sum);
    }

    return 0;
}