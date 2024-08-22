#include <stdio.h>

int main()
{
    int n=4;
    int A[3][3],i,j,sum=0;
    
    

    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            printf("Enter an element A[%d][%d]: ",i,j);
            scanf("%d",&A[i-1][j-1]);
        }
    }

    for(i=1;i<n;i++)
    {
        printf("[");
        for(j=1;j<n;j++)
        {
            printf("  %d  ",A[i-1][j-1]);
        }
        printf("]\n");
    }
    return 0;
}
