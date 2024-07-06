/*
    Author: Code_with_Manav
    Concept: Unions
    Task: WAP to store the details of books using Unions.
*/

#include <stdio.h>
#include <string.h>

union BOOKS
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    union BOOKS b1, b2;

    strcpy(b1.title, "ShrimanYogi");
    printf("Book Name: %s\n", b1.title);

    strcpy(b1.author, "Ranjit Desai");
    printf("Author: %s\n", b1.author);

    b1.price = 550;
    printf("Price: %.1f\n", b1.price);

    printf("\n");

    strcpy(b2.title, "Batatyachi Chal");
    printf("Book Title: %s\n", b2.title);

    strcpy(b2.author, "P. L. Deshpande");
    printf("Author: %s\n", b2.author);

    b2.price = 650;
    printf("Price: %.1f", b2.price);

    return 0;
}

