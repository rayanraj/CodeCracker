/* Program to check if ith bit is set or not */

#include<stdio.h>

void checkBit(int num, int i)
{
    if( (num & (1<<i)) != 0)  /* dont use if( (num & (1<<i)) == 1)*/
        printf("Bit is set");
    else
        printf("Bit is not set"); 
}

int main()
{
    int num, i;
    printf("Enter a number and corresponding bit to be checked");
    scanf("%d %d",&num, &i);
    checkBit(num, i);
    return 0;
}