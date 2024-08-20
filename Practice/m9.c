#include <stdio.h>

int main()
{
    int n=5,fact=1;

    printf("%d! = ",n);
    while(n>0){
        fact*=n;
        n--;
    }
    printf("%d\n",fact);
    return 0;
}