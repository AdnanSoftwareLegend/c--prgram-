#include<stdio.h>
#include<string.h>
int main()
{
    char str1[]={"Adnan elahe "};
    char str2[]={"Abdur Rahaman Rahim"};
    int d;

    d=strcpy(str2,str1);

    if (d==0)
        printf("string are equal ");
    else
        printf("string are not equal");

}
