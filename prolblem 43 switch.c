#include<stdio.h>
int main()
{
    char oper ;
    double num1,num2;

    printf("Enter number :");
    scanf("%lf %lf ",&num1 ,&num2 );

    printf("Enter an operator (+,-,*,/):");
scanf("%c", &oper );

    switch (oper)
    {
    case '+':
        printf("%lf+%lf=%lf",num1 ,num2, num1+num2);
        break;

       case'-':
       printf("%lf-%lf=%lf ",num1,num2,num1-num2);
        break;

        case'*':
        printf("%lf*%lf=%lf",num1,num2,num1*num2);
        break ;

        case'/':
        printf("%lf/%lf=%lf",num1,num2,num1/num2);
        break ;

        default :
            printf("Not a valide oprand ");

    }

    return 0;

}
