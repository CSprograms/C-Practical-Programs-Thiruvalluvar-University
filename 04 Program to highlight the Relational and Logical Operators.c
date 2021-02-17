//Program to highlight the Relational and Logical Operators
//Relation between two Integers

#include <stdio.h>

int main(void)
{
    int input1, input2;

    printf("\nEnter Input 1 : ");
    scanf("%d",&input1);

    printf("\nEnter Input 2 : ");
    scanf("%d",&input2);

    printf("\n%d == %d = %d", input1, input2, input1 == input2);

    printf("\n%d != %d = %d", input1, input2, input1 != input2);

    printf("\n%d <  %d = %d", input1, input2, input1 < input2);

    printf("\n%d <= %d = %d", input1, input2, input1 <= input2);

    printf("\n%d >  %d = %d", input1, input2, input1 > input2);

    printf("\n%d >= %d = %d", input1, input2, input1 >= input2);

    printf("\n%d && %d = %d", input1, input2, input1 && input2);

    printf("\n%d || %d = %d", input1, input2, input1 || input2);

    printf("\n!%d = %d",input1, !input1);

    return 0;
}
