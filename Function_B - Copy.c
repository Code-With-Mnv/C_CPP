/*
    Author: Code_with_Manav
    Concept: Functions
    Task: WAP to count the odd numbers from a given array using functions.
*/

#include <stdio.h>

int odd(int *, int);

int main()
{
    int arr[10], size = 10, no_of_odd;

    printf("Creating an array...\n");

    for (int i = 0; i < 10; i++)
    {
        printf("\nEnter number %d: ", i+1);
        fflush(stdout);
        scanf("%d", &arr[i]);
    }

    no_of_odd = odd(arr, 10);

    printf("\nNumber of odd elements in the given array : %d", no_of_odd);

    return 0;
}

int odd(int arr[], int l)
{
    int count = 0;

    for (int a = 0; a < l; a++)
    {
        float rem = arr[a] % 2;

        if (rem != 0)
        {
            count++;
        }
    }
    
    return count;
}