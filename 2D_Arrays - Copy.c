/*
    Author: Code_with_Manav
    Concept: 2D Arrays
    Task: WAP to print a 2D Array in matrix form and find the sum of all the elements present in it.
*/

#include <stdio.h>

int main()
{
    int arr[2][3], sum = 0;


    for (int r = 0; r < 2; r++)
    {

        printf("\nEntering the numbers in row %d\n", r+1);

        for ( int c = 0; c < 3; c++ )
        {

            printf("\nEnter the number in column %d : ", c);
            fflush(stdout);
            scanf("%d", &arr[r][c]);

            sum = sum + arr[r][c];

        }        

    }

    puts("The entered 2D array is:");

    for (int r =0; r < 2; r++)
    {

        for (int c =0; c < 3; c++)
        {

            printf("%d ", arr[r][c]);

        }

        printf("\n");

    }
   
    printf("\nThe sum of all the elements of 2D Array : %d ", sum);
    return 0;
}