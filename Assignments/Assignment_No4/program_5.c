/*
5.Write a program which accept number from user and return difference between summation of all its factors and non factors.

Inpout : 12
output : -34 (16 -50)

Input : 10
Output : 29 (8-37)
*/
#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    int iDif = 0;
    if(iNo<0)
    {
        iNo = -iNo;
    }

    for (iCnt = 1;iCnt < iNo;iCnt++)
    {
        if((iNo%iCnt)==0)
        {
            iDif=iDif+iCnt;
        }
    }
    return iDif-iCnt;
}
int main ()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    
    return 0;
}