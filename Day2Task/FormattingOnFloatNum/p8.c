#include <stdio.h>

int main()
{
    float num = 795.907;
    printf("%f\n", num);     
    printf("%12f\n", num);   
    printf("%-14f\n", num);  
    printf("%014f\n", num);  
    printf("%.2f\n", num);   
    printf("%08.1f\n", num); 
    printf("%-8.1f\n", num); 
    printf("%05.0f\n", num); 
}