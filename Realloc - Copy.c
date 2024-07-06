/*
    Author: Code_with_Manav
    Concept: Memory Allocation
    Task: Using Re-Alloc function to reallocate memory and get more user inputs.
*/

#include <stdio.h>
#include <stdlib.h>


int main() 
{

    int n;
    float *p, sum = 0;

    puts("Enter n: ");
    scanf("%d", &n);

    p = (float*) calloc(n, sizeof(float));

    if (p == NULL) 
    {
        puts("Memory allocation failed.");
        exit(0);
    } 
    
    else 
    {
        puts("Enter data: ");

  
        for (int i = 0; i < n; i++) 
        {
            scanf("%f", p + i);    
        }

        int c, newSize;

        puts("Enter the number of more values you want to enter: ");
        scanf("%d", &c);

        newSize = c + n;

        p = (float*) realloc(p, newSize * sizeof(float));

        puts("Enter data: ");

        for (int i = n; i < newSize; i++) 
        {
            scanf("%f", p + i);
        }

        for (int i = 0; i < newSize; i++) 
        {
            sum = sum + p[i];    
        }

        printf("The sum is %.2f", sum);
    }

    free(p);

    return 0;
}

