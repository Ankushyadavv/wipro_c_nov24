//mplement Karpekar's constant program. Print the number of times the logic of finding the difference of 2 numbers had to be iterated.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int originalNum, i, j, tempDigit, ascendingNum, descendingNum, difference, iterationCount = 0;

    printf("Enter a 4-digit number (not all digits the same): ");
    scanf("%d", &originalNum);

    if (originalNum < 1000 || originalNum > 9999) {
        printf("Invalid input. Please enter a 4-digit number.\n");
        return 1;
    }

    while (originalNum != 7135) {
        iterationCount++;

        tempDigit = 0;
        for (i = 0; i < 4; i++) {
            tempDigit = tempDigit * 10 + originalNum % 10;
            originalNum /= 10;
        }

        ascendingNum = 0;
        descendingNum = 0;
        for (i = 0; i < 4; i++) {
            tempDigit = tempDigit % 10;
            ascendingNum = ascendingNum * 10 + tempDigit;
            descendingNum = descendingNum * 10 + tempDigit;
            tempDigit /= 10;
        }

        for (i = 0; i < 3; i++) {
            for (j = i + 1; j < 4; j++) {
                if (ascendingNum % 10 > (ascendingNum / 10) % 10) {
                    tempDigit = ascendingNum % 10;
                    ascendingNum = ascendingNum / 10 + tempDigit * 10;
                }
                if (descendingNum % 10 < (descendingNum / 10) % 10) {
                    tempDigit = descendingNum % 10;
                    descendingNum = descendingNum / 10 + tempDigit * 10;
                }
            }
            ascendingNum /= 10;
            descendingNum /= 10;
        }

        difference = descendingNum - ascendingNum;
        originalNum = difference;

        printf("%d - %d = %d\n", descendingNum, ascendingNum, difference);
    }

    printf("Number of iterations: %d\n", iterationCount);

    return 0;
}