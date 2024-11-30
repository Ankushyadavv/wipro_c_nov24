//Count the number of Even digits in a number
#include <stdio.h>
#include <stdlib.h>

int main(int argCount, char *args[])
{
    int input_number = atoi(args[1]);
     int remainder_digit = 0, small_digit = 0, big_digit = 0;
    printf("User given number is %d \n", input_number);
    int count_of_even_digits = 0;
    while (input_number != 0)
    {
        remainder_digit = input_number % 10;
        if (remainder_digit % 2 == 0)
            count_of_even_digits += 1 ;
        input_number = input_number / 10;
    }
    printf("count of even digit = %d/n" );
}