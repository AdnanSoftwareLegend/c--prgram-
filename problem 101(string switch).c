
#include<stdio.h>
int main()
{
    char str1[12]={"Bangladesh"};
    char str2[12]={"India"};
    char temp[12];

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);

    printf("str1=%s\n",str1);
    printf ("str2=%s\n",str2);

 getch();

}
