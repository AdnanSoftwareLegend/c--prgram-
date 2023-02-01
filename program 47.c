#include<stdio.h>
int main()
{
    int num,i ;
    while (1)
    {

    printf("Enter any number:");
    scanf("%d",&num);
    for (i=1;i<=10;i++)
    {

    printf("%d X %d =%d \n ",num,i,num*i);

    }

    }
    return 0;






}
