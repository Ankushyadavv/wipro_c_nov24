#include <stdio.h>

#include <stdlib.h>

#include <math.h>

// Find sum of the series: 1n+n2n3..... m terms

int main(int argCount, char *args[])

{

    int termValue = atoi(args[1]);

    int numberOfTerms = atoi(args[2]);

    long long int sumOfTerms = 0;

    printf("N value = %d, Number of terms = %d \n", termValue, numberOfTerms);

    for (int i = 1; i <= numberOfTerms; i++)

    {

    sumOfTerms += pow(termValue, i - 1) *pow(i, i - 1);

    }

printf("Sum of %d terms is %ld", numberOfTerms, sumOfTerms);

}
