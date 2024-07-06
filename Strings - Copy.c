/*
    Author: Code_with_Manav
    Concept: Strings
    Task: WAP to "Append" on string to other.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20], str2[20];

    printf("Enter some text for String 1: ");
    fflush(stdout);
    scanf("%[^\n]%*c", str1);

    printf("\n");

    printf("\nEnter some text for String 2: ");
    fflush(stdout);
    scanf("%[^\n]%*c", str2);

    strcat(str1, " ");
    strcat(str1, str2);

    printf("\nThe final output of the appended string is: %s\n", str1);

    return 0;
}