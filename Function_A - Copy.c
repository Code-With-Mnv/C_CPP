/*
    Author: Code_with_Manav
    Concept: Functions (parameters: flaot or int)
    Task: WAP to calculate the perimeter of the reactangle of given measurements by creating a separate function.
*/

#include <stdio.h>

float peri(float, float);

int main()
{
    float l, b, perimeter;

    puts("Enter the length and the breadth of the rectangle below\n");

    printf("Lenght: ");
    fflush(stdout);
    scanf("%f", &l);

    printf("\nBreadth: ");
    fflush(stdout);
    scanf("%f", &b);

    perimeter = peri(l, b);

    printf("\nPerimeter: %.3f", perimeter);

    return 0;
}

float peri(float l, float b)
{
    float perim = 0;
    perim = 2 * (l + b);
    return perim;
}