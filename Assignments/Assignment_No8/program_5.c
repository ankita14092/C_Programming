#include<stdio.h>
int TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10;iCnt>=1;iCnt--)
    {
        printf("%d  ",iNo* iCnt);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter Number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}