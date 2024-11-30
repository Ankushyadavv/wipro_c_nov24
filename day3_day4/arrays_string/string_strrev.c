#include <stdio.h>
#include <string.h>
//prototype reverse
void strrev (char *str) {
    int len = strlen (str);
    int i = 0, j = len - 1;
    char temp;

    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

int main() {
    char str[100];

    printf ("Enter a string: ");
    fgets (str, 100, stdin);

    strrev (str);

    printf ("Reversed string: %s", str);

    return 0;
}