/*
    Author: Code_with_Manav
    Concept: For Loop
    Task: WAP to check if the given number is palindrome or not using DO WHILE LOOP.
*/

#include <stdio.h>

int main()
{

    int num, tempnum, rem, revnum = 0;

    printf("Enter a number to be checked: ");
    fflush(stdout);
    scanf("%d", &num);

    tempnum = num;

    do
    {

        rem = tempnum % 10;
        revnum = (revnum * 10) + rem;
        tempnum = tempnum / 10;

    } while (tempnum > 0);

    if (revnum == num)
    {
        printf("\nThe given number is a palindrome!\n");
    }

    else
    {
        printf("The given number is not a palindrome!");
    }

    return 0;
    
}