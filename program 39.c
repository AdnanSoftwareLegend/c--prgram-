#include<stdio.h>
int main ()
{
    int num ;
    printf("Enter any number :");
    scanf("%d ",&num);

    if (num>0)
    printf("posative ");

     else if  (num<0)
    printf("negative");

    else
    printf("Zero");


    return 0;
}
