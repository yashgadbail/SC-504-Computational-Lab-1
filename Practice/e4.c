#include <stdio.h>

int main()
{
    int num=10,sum=0, i;

    for(i=1;i<=num;i++)
        sum+=i;
    printf("Sum = %d\n",sum);
    return 0;
}