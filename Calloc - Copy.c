/*
    Author: Code_with_Manav
    Concept: Memory Allocation
    Task: WAP to find the sum of numbers using array and dynamically allocate memory to them using calloc function
*/

#include <stdio.h>
#include <stdlib.h>


int main() {

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) calloc(n, sizeof(float));

    if (p == NULL) 
    {
        puts("Memory allocation failed");
        exit(0);
    } 
    
    else 
    {
        puts("Enter data: ");

        for (int i = 0; i < n; i++) 
        {
            scanf("%f", p + i);    
        }

        for (int i = 0; i < n; i++) 
        {
            sum = sum + p[i];    
        }

        printf("The sum is %.2f", sum);
    }

    return 0;
}