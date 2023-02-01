#include<stdio.h>
int main()
{
    int num[3],n,i;
printf ( "Enter any number :");
    scanf ("%d",&n);


    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }


    int max = num[0];


for (i=1;i<n;i++)
{

    if(max<num[i])
    max=num[i];

}
     printf("The maxmum value is =%d\n",max);

return 0 ;
}




