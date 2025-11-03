#include<stdio.h>
#include<stdbool.h>
bool CheckEvenOdd(int num)
{
    if(num%2==0)
    {
        return true;
    }
    else
    {
        return false;
    }

}
int main()
{
    int number;
    int iRet = 0;

    printf("Enter number:");
    scanf("%d",&number);

    iRet=CheckEvenOdd(number);

    if(iRet==1)
    {
       printf("It is even number");
    }
    else
    {
        printf("It is odd number");
    }
    return 0;
}