/*
    Author: Code_with_Manav
    Concept: Pointers
    Task: WAP to find the sum of two numbers using pointers.
*/

#include <stdio.h>

int main()
{
    int a, b;
    int *x, *y;

    x = &a; 
    y = &b;

    printf("Enter the first number: ");
    fflush(stdout);
    scanf("%d", &a);

    printf("\nEnter the second number: ");
    fflush(stdout);
    scanf("%d", &b);

    int sum = *x + *y;
    printf("\nThe sum of the two numbers = %d", sum);

    return 0; 
}