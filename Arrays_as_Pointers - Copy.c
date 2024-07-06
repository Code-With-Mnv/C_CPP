/*
    Author: Code_with_Manav
    Concept: Using Pointers for Arrays
    Task: WAP to find the largest number of the given array using pointers
*/

#include <stdio.h>

float largest(float *, float);

int main()
{
    float arr[5], size = 5;
    float *p;

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter number %d: ", i+1);
        fflush(stdout);
        scanf("%f", &arr[i]);
    }
    
    p = arr;

    float result = largest(p, size);

    printf("\nThe largest number of the given array is: %.2f", result);

    return 0;
}

float largest(float *p, float size)
{
    float max = 0;

    for (int i = 0; i < size; i++)
    {
        if (p[i] > max)
        {
            max = p[i];
        }
    }

    return max;
}