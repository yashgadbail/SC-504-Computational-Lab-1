#include <stdio.h>

int main()
{
    int num=10,pow=1,i;

    for(i=1;i<=num;i++)
        printf("2^%d = %d\n",i,pow*=2);

    return 0;
}