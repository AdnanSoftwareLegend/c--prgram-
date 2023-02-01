#include<stdio.h>
int main()
{
    int a,b,c,d,grade;
    printf("Enter the num ");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    grade=(a+b+c+d)/4;
    if (grade<50)
    {
        prinf("this is fail ");
    }
    else
    {
        prinf("this is pass");
    }
    return 0;
}
