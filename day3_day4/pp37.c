//Nth Prime number
#include <stdio.h>
#include <math.h>

int isPrime(int num)
 {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int n, count = 0, num = 2;

    printf("Enter the value of N: ");
    scanf("%d", &n);

    while (count < n) {
        if (isPrime(num)) {
            count++;
        }
        num++;
    }

    printf("The %dth prime number is %d\n", n, num - 1);

    return 0;
}