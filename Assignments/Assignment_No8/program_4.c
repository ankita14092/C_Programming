#include<stdio.h>
int Table(int iNo)
{
    int iCnt = 0 ;
    int iTable = 1;
    for(iCnt =1;iCnt<=10;iCnt++)
    {
        printf("%d\n" ,iCnt * iNo);
    }
    return iTable;
}
int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Table(iValue);


    return 0;
}