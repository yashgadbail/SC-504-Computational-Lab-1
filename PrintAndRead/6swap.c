#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two integers (a,b): ");
    scanf("%d,%d",&a,&b);

    a+=b;
    b=a-b;
    a-=b;

    printf("After swapping: a = %d, b = %d\n",a,b);
    return 0;
}
