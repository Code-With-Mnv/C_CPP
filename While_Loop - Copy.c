/*
    Author: Code_with_Manav
    Concept: While Loop
    Task: WAP to input a number and then count the number of digits present in the number using while loop.
*/

#include <stdio.h>

int main()
{
    long num, nod = 0, tempnum;

    printf("Enter the number whose digits is to be counted: ");
    fflush(stdout);
    scanf("%ld", &num);

    tempnum = num;

    while (tempnum > 0)
    {
        tempnum = tempnum / 10;
        nod = nod + 1;
    }

    printf("\nThe total number of digit(s) in %ld = %ld", num, nod);

    return 0;
}