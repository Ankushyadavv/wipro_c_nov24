//Find sum of the elements of an Array using a recursive function.

#include <stdio.h>

int sum_array_recursive(int numbers[], int count) {
  
  if (count == 0) {
    return 0;
  }

  return numbers[count - 1] + sum_array_recursive(numbers, count - 1);
}

int main() {
  int numbers[] = {15, 20, 45, 50, 75};
  int count = sizeof(numbers) / sizeof(numbers[0]);
  int sum = sum_array_recursive(numbers, count);
  printf("Sum of the array elements: %d\n", sum);

  return 0;
}
