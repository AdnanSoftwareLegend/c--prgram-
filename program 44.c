#include<stdio.h>
int main()
{
    int num1, num2, large;
    printf("Enter the tow number :");
    scanf("%d %d",&num1, &num2);
     large= (num1>num2) ? num1:num2;
     printf("large number =%d\n",large);
     return 0;
}
