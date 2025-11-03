#include<stdio.h>
int  count_factors(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    for(iCnt = 1;iCnt<=iNo ;iCnt++)
    {
        if(iNo % iCnt == 0)
        {
        iCount++;
        }
    }
return iCount ;
}
int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter Number");
    scanf("%d",&iValue);

    iRet = count_factors(iValue);

    printf("Sum of factorial is : %d",iRet);

    
    return 0;
}