//Implement Linear(sequential) search using a multi file program.
#include <stdio.h>
#include "search.h"

int main() {
    int numbers[] = {2, 3, 4, 10, 35};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int target = 10;

    int index = linear_search(numbers, size, target);
    if (index == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", index);

    return 0;
}