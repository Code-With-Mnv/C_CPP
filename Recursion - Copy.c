/*
    Author: Code_with_Manav
    Concept: Recursion
    Task: WAP to print the nth term of a fibonacci series using function recursion.
*/

#include <stdio.h>

int fibo(int);

int main()
{
    int num, result;

    printf("Index of the required term: ");
    fflush(stdout);
    scanf("%d", &num);

    result = fibo(num);

    printf("\nThe %dth term of the fibonacci series is: %d", num, result);

    return 0;
}

int fibo(int num)
{
    if (num == 0 || num == 1)
        return num;

    else
        return (fibo(num-1) + fibo(num-2));
}