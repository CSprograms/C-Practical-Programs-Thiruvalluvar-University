//Program to illustrate the working of Branching Statements -- Odd or Even

#include<stdio.h>

int main(void)
{
    int input;

    printf("\nEnter the input : ");
    scanf("%d",&input);

    if ( input % 2 == 0 )
        printf("\nThe given input is even.\n");

    if ( input % 2 )
        printf("\nThe given input is odd.\n");

    if ( input % 2 )
        printf("\nThe given input is odd.\n");
    else
        printf("\nThe given input is even.\n");

    return 0;
}
