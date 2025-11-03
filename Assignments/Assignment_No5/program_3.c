#include<stdio.h>
void CheckLeapYear(int year)
{
    if((((year%4)==0)&&(year % 100)!=0))
    {
        printf("It is Leap Year");
    }
    else
    {
       printf("It is Not leap year");
    }
}
int main()
{
    int yr;
    printf("Enter year:");
    scanf("%d",&yr);
    CheckLeapYear(yr);
    return 0;
}