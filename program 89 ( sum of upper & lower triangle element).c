#include<stdio.h>
int main()
{
    int A[3][3],i,j,uppersum=0,lowersum=0;

    printf("Enter the element for the matrix");

    for(i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

        print("\n");
    }

    for (i=0;i<3;i++)
    {
        for(j=0;i<3;j++)
        {
            printf("%d",A[i][j]);
        }

        printf("\n");
    }


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

           {




           if (i<j)
            {
               uppersum = uppersum + A[i][j];


            if (i>j)

                lowersum = lowersum + A[i][j];
            }


        }
           printf("\n");
    }

    printf("sum of upper triangle element = %d\n",uppersum );
    printf("sum of lower triangle element = %d\n",lowersum);

    getch();
}
