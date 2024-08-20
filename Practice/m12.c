#include <stdio.h>

int main()
{
    int n=10,a=0,b=1;

    while(n>0){
        printf("%d ",a);
        b = a+b;
        a = b-a;
        n--;
    }
    printf("\n");
    return 0;
}