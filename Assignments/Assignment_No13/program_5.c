#include<stdio.h>
int sum_even_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= limit ; iCnt++)
    {
        if(iCnt % 2 == 0)
    {
        iSum = iCnt + iSum;
    }
    }
    return iSum;
}
int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&limit);

    iRet = sum_even_numbers(limit);

    printf("Sum of natural number is : %d",iRet);


    return 0;
}