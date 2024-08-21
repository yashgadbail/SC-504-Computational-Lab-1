#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

    int dice1,dice2,i=0;
    srand(time(NULL));
    printf("+-------------------------+\n");
    printf("|Iteration| dice1 | dice2 |\n");
    printf("+---------+-------+-------+\n");

    do {
        dice1= (rand()%6)+1;
        dice2= (rand()%6)+1;
        i++;
        printf("|%8d | %4d  | %4d  |\n",i,dice1,dice2);
    } while (dice1!=dice2);
    printf("+---------+-------+-------+\n");
    
    printf("\nBoth dice rolled same numbers -> %d & %d\n",dice1,dice2);
    return 0;
}
