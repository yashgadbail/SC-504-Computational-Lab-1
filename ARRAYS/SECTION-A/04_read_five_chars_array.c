#include <stdio.h>

int main()
{
    char arr[5];
    int i;
    printf("Enter 5 characters : ");

    for(i = 0;i<5;i++)
        scanf(" %c",&arr[i]);

    printf("\nYou entered: [ ");
    for (i=0;i<5;i++)
        printf("%c ",arr[i]);
    
    printf("]\n");

    return 0;
}
