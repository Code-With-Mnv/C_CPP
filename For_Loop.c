/*
    Author: Code_with_Manav
    Concept: For Loop
    Task: WAP to calculate (1 * 1) + (2 * 2) + ... + (n * n) series, using a FOR LOOP.
*/

#include <stdio.h>

int main()
{
    int n, sum=0;

    printf("Enter the number of last term: ");
    fflush(stdout);
    scanf("%d", &n);

    for (int i = 1 ; i <= n; i++)
    {
        sum = sum + (i*i);
    }

    printf("\nThe final sum of the series = %d", sum);

    return 0;
}