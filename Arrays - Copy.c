/*
    Author: Code_with_Manav
    Concept: Arrays
    Task: WAP to find the largest number in the given series using ARRAYS.
*/

#include <stdio.h>

int main()
{
    int arr[5], i = 0, max = 0;

    while ( i < 5)
    {
        printf("\nEnter number %d : ", i+1);
        fflush(stdout);
        scanf("%d", &arr[i]);

        if (arr[i] > max)
        {
            max = arr[i];
        }

        i++;
    }

    printf("\nThe series of numbers is as follows: ");

    for ( i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
    printf("\nMLargest number of the given series = %d\n", max);
    return 0;
}