
#include<stdio.h>
int main()
{
    int i,j ,numberOfRows,numberOfCols;
    int A[10][10],B[10][10],c[10][10];
      printf("Enter elrments rows and cols: ");
      scanf("%d %d",&numberOfRows,&numberOfCols);

      printf("Enter elements of A matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for (j=0;j<numberOfCols;j++)
        {
            printf("A[%d][%d] = ",i,j);
            scanf("%d",&A[i][j]);
        }

        printf("\n");
      }


    for (i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }


 printf("Enter elements of B matrix.\n");
    for(i=0;i<numberOfRows;i++)
    {
        for (j=0;j<numberOfCols;j++)
        {
            printf("B[%d][%d] = ",i,j);
            scanf("%d",&B[i][j]);
        }

        printf("\n");
      }


    for (i=0;i<numberOfRows;i++)
    {

        for(j=0;j<numberOfCols;j++)
        {
            printf("%d ",B[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<numberOfRows;i++)
    {
        for(j=0;j<numberOfCols;j++)
        {

            scanf("%d",c[i][j]);
            C[i][j] = A[i][j] + B[i][j];
        }

        printf("\n");

    }



    printf("A+B=");


    for("i=0;i<numbreOfRows;i++")
    {
        for("j=0;j<numberOfCols;j++")
        {
            printf("%d",C[i][j]);
        }

        printf("\n");
    }











    getch();
}
