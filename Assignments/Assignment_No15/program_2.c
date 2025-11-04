#include<stdio.h>

int CountOdd(int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;
   if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if((iNo%2)!=0)
    {
        iFrequency++;
    }
        iNo = iNo / 10 ;
    }

    return iFrequency;
}
int main()
{
    int iValue = 0;
    int bRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    bRet = CountODd(iValue);

    printf("%d",bRet);

    return 0;
}
//Time Complexity = O(n)