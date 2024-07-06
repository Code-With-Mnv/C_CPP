/*
    Author: Code_with_Manav
    Concept: Structures
    Task: WAP to store the details of books using structures.
*/

#include <stdio.h>
#include <string.h>

struct BOOKS
{
    char title[100];
    char author[100];
    float price;
};

int main()
{
    struct BOOKS b1, b2;


    strcpy(b1.title, "ShrimanYogi");
    strcpy(b1.author, "Ranjit Desai");
    b1.price = 550;

    printf("The book %s by author %s costs Rs.%.1f.\n", b1.title, b1.author, b1.price);

    strcpy(b2.title, "Batatyachi Chal");
    strcpy(b2.author, "P. L. Deshpande");
    b2.price = 650;

    printf("\nThe book %s by author %s costs Rs.%.1f.\n", b2.title, b2.author, b2.price);

    return 0;
}

