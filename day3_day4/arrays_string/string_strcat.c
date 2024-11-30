#include <stdio.h>
#include <string.h>

int main() {
    char str1[15] = "Ankush  ";
    char str2[] = "yadav";

    strcat(str1, str2);

    printf("%s \n", str1); 

    return 0;
}