#include<stdio.h>
int sum_natural_numbers(int limit)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= limit ; iCnt++)
    {
        iSum = iCnt + iSum;
    }
    return iSum;
}
int main()
{
    int limit = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&limit);

    iRet = sum_natural_numbers(limit);

    printf("Sum of natural number is : %d",iRet);


    return 0;
}