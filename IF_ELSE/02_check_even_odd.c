#include <stdio.h>

int main()
{
    int num;
    printf("Enter an integer: ");
    scanf("%d",&num);

    if (num % 2 == 0) 
        printf("The number is even.\n");
    else 
        printf("The number is odd.\n");

    return 0;
}
