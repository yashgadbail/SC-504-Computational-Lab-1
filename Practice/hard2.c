#include <stdio.h>

int main()
{
    int nth,count=1,number=2,flag=1,i=2;
    printf("Enter the nth term : ");
    scanf("%d",&nth);
    if(nth==1){
        printf("1st prime number is 2.\n");
        return 0;
    }
    while(count<nth)
    {
        i=2;
        number++;
        while(i<number)
        {
            if(number%i==0){
                flag=0;
                break;
            }
            i++;
        }
        if(flag){
            count++;
        }
        flag=1;
    }
    printf("%dth prime number is %d.\n",nth,number);
    return 0;
}