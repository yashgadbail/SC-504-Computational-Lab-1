#include <stdio.h>
#include <stdbool.h>
int main()
{
    int iscorrect=1,userinp;
    do{
        printf("Enter an integer : ");
        scanf("%d",&userinp);
        if(userinp == 111)
        {
            iscorrect = 0;
            printf("You entered 111.\n");
            break;
        }
        printf("please try again!\n");
    }while(iscorrect);
    return 0;
}