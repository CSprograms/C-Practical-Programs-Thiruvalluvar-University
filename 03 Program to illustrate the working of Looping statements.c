//Program to illustrate the working of Looping statements
//Factorial Value

#include <stdio.h>

int main(void)
{
    int n;
    int fact = 1;

    printf("\nEnter an value for N : ");
    scanf("%d",&n);

    for( int loop = 2; loop <= n; loop++)
    {
        fact *= loop;
    }

    printf("\nFactorial of %d is %d.\n",n, fact);

    return 0;
}
