#include <stdio.h>

int main(void)
{
    char ip_char;
    int ip_int;
    float ip_float;

    printf("\nEnter the char : ");
    scanf("%c",&ip_char);

    printf("\nEnter the int : ");
    scanf("%d",&ip_int);

    printf("\nEnter the float : ");
    scanf("%f",&ip_float);

    printf("\nOUTPUT:");

    printf("\nThe given char  : %c",ip_char);
    printf("\nThe given int   : %d",ip_int);
    printf("\nThe given float : %f",ip_float);
    printf("\nThe given float : %ef",ip_float);
    
    return 0;

}
