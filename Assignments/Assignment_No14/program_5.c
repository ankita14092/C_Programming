#include<stdio.h>

int Count (int iNo)
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
        if(iDigit < 6)
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

    bRet = Count(iValue);

    printf("%d",bRet);

    return 0;
}
//Time Complexity = O(n)