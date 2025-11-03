#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFact1 = 1;
    int iFact2 = 1;

    for (iCnt = 2; iCnt <= iNo; iCnt += 2) 
    {
        iFact1 = iFact1 * iCnt;
    }

     for (iCnt = 1; iCnt <= iNo; iCnt += 2)
    {
        iFact2 = iFact2 * iCnt;
    }

    return iFact1-iFact2;


}

int main()
{
    int iValue = 0,iRet = 0;
    printf("Enter number");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial difference is %d",iRet);
     
    return 0;
}