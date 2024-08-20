#include <stdio.h>

int main()
{
    int iscorrect=1,userinp;
    do{
        printf("Enter an integer : ");
        scanf("%d",&userinp);
        if(userinp > 100)
        {
            iscorrect = 0;
            printf("You entered number greater than 100.\n");
            break;
        }
        printf("please try again!\n");
    }while(iscorrect);
    return 0;
}