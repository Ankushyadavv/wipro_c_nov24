#include<stdio.h>
//float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

//print these:

//fArray, fArray+1, fArray-1, fArray+2

//*fArray, *fArray+1, *fArray + *fArray

//&fArray, &fArray+1, &fArray-1, &fArray+2

int main() {

    float fArray[] = {2.2f, 4.4f, 1.5f, 9.1f, 6.75f};

    printf("fArray: %u \n", fArray);
    printf("fArray+1: %u \n", fArray+1);
    printf("fArray-1: %u \n", fArray-1);
    printf("fArray+2: %u \n", fArray+2);

    printf("*fArray: %u \n", *fArray);
    printf("*fArray+1: %u \n", *fArray+1);
    printf("*fArray + *fArray: %u \n", *fArray + *fArray);

    printf("&fArray: %.2f \n", &fArray);
    printf("&fArray+1: %.2f \n", &fArray+1);
    printf("&fArray-1: %.2f \n", &fArray-1);
    printf("&fArray+2: %.2f \n", (&fArray+2));

}