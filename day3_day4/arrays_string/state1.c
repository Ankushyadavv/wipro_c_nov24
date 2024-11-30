#include <stdio.h>
#include <string.h>

int main() {
    char states[10][32];
    char capitals[10][32];

    char *input_strings[] = {
        "karnataka bengaluru",
        "odhisa bhubaneswar",
        "sikkim gangtok",
        "tamilnadu chennai",
        "goa panjim"
    };

    int num_strings = sizeof(input_strings) / sizeof(input_strings[0]);

    for (int i = 0; i < num_strings; i++) {
        char *token = strtok(input_strings[i], " ");
        strcpy(states[i], token);

        token = strtok(NULL, " ");
        strcpy(capitals[i], token);
    }
    
    printf("State\tCapital\n");
    for (int i = 0; i < num_strings; i++) {
        printf("%s\t%s\n", states[i], capitals[i]);
    }

    return 0;
}