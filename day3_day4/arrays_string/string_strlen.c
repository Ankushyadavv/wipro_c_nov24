#include <stdio.h>
// prototype strlen()
size_t strlen(const char *str) {
    size_t len = 0;
    while (*str != '\0') {
        len++;
        str++;
    }
    return len;
}

int main() {
    char str[] = "new delhi";
    size_t len = strlen(str);
    printf("The length of the string is: %u \n", len);
    return 0;
}