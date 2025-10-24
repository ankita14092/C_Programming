/*
1.Write a program which accept number form user and display its multiplication of factors

input : 12
output : 144(1*2*3*4*)
*/
#include<stdio.h>
int MultiFacators(int iNo)
{
    int iCnt = 0;
    int iMulti = 1;

    if (iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo;iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iMulti = iMulti * iCnt;
        }
    }
    return iMulti;

}

int main()
{   
    int iValue = 0;
    int iRet = 0 ;
    printf("Enter number\n");
    scanf("%d",&iValue);

    iRet = MultiFacators(iValue);

    printf("Multiplication of Factors is:%d",iRet);

    return 0;

}