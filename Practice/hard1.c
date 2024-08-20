#include <stdio.h>

int main()
{
    int n=5,num=1,pow=1,i,j;

    for(i=1;i<=n;i++){
        for(j=num;j>0;j/=10){
            printf("%d ",j%10);
        }
        num = num*10 + num;
        printf("\n");
    }

    return 0;
}