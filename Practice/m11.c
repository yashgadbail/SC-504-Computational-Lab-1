#include <stdio.h>

int main()
{
    int num=50,sum=0, i;

    for(i=1;i<=num;i++)
        if(i%2)
            continue;
        else
            sum+=i;
    printf("Sum = %d\n",sum);
    return 0;
}