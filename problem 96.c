#include<stdio.h>

struct person
{
    int age ;
    float salary;
};
int main()
{
    struct person person1;
    person1.age=27;
    person1.salary=27300;

    printf("Age =%d\n",person1.age);
    printf("salary= %f\n",person1.salary);
    getch();
}





