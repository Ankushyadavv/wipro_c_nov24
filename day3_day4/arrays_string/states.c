#include <stdio.h>

int main()
{
    char states[10][32] = {""};
    char capitals[10][32] = {""};
    puts("Enter names of states and capitals");
    for (int i = 0; i < 10; i++)
    {
        scanf("%s", &states [i][0]);
        scanf("%s", &capitals[i][1]);
    }
    printf("%-12s %-12s\n-------------------------\n", "FIRST-NAME", "SECOND-NAME");
    for (int i = 0; i < 10; i++)
        printf("%-13s%s\n", states[i][0], capitals[i][1]);
}