#include <stdio.h>

int main()
{
    char place[16] = "bengaluru";
    printf("%s\n", place);
    printf("%12s\n", place);
    printf("%-11s***\n", place);
    printf("%.4s\n", place);
    printf("%5s\n", place);
    printf("%2.4s", place);
}