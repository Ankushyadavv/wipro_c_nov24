#include <stdio.h>
#include <string.h>
//protoytpe   strcpy() 
int main() {
    char src[] = "";
    char dest[18];

    strcpy(dest, src);

    printf("Copied string: %s \n", dest);

    return 0;
}