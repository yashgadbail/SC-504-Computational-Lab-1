#include <stdio.h>

int main()
{
    int num=4, i,j;

    for(i=0;i<=num;i++){
        for(j=0;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
    for(i=num;i>=0;i--){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}