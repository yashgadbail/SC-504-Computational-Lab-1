#include <stdio.h>
#include <stdbool.h>
int main()
{
    int pass=11212, iscorrect=1,userinp;
    do{
        printf("\nWelcome, Please enter password : \n");
        scanf("%d",&userinp);
        if(userinp == pass)
        {
            iscorrect = 0;
            printf("Correct Password!\n");
            break;
        }
        printf("Wrong password, please try again!\n");
    }while(iscorrect);
    return 0;
}