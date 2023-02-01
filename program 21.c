#include<stdio.h>
int main()
{
    float num1,num2,num3,sum,avg;
    printf("Enter the three number ");
    scanf("%f%f%f",&num1,&num2,&num3);
    sum=num1+num2+num3;
    avg=sum/3.0;
    printf("sum=%f\n",sum);
    printf("avg=%f\n",avg);
    getch();
}
