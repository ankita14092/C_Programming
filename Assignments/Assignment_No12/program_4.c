#include<stdio.h>
int  sum_even_factors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1;iCnt<=iNo-1;iCnt++)
    {
        if(iNo % iCnt==0 && iCnt % 2==0)
        {
         iSum =  iSum + iCnt;
        }
    }
    return iSum ;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = sum_even_factors(iValue);

    printf("Sum of factorial is : %d",iRet);

    
    return 0;
}