#include<stdio.h>
int main()
{
    int digit ;
    printf("Enter digit :");
    scanf("%d",&digit);
    switch(digit)
    {
      case 0:
     printf("zero\n");
     break;

      case 1:
        printf("one\n");
       break;

      case 2:
        printf("tow\n");
            break ;

      case 3 :
        printf("three\n ");
        break ;

      case 4:
        printf ("four\n ");
            break ;

      case 5:
        printf("five\n");
        break ;


      case 6:
        printf("six\n");
        break;

      case 7 :
        printf("seven\n");
            break ;

      case 8:
        printf("Eight\n");
            break ;

      case 9:
        printf("nine\n");
    break ;


      case 10:
        printf("ten\n");
       break ;

       default :
           printf("not a valid digit");

    }

return 0;
}
