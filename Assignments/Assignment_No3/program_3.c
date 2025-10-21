/*
    3.Write a program which accept number from user and print even factors of that number.
    Input : 36
    Output : 2 6 12 18
*/

#include<stdio.h>

void PrintEvenFactors(int iNo)
{
    int iCnt = 1;
    int found = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt == 0) && (iCnt % 2 == 0))
        {
            printf("%d\t", iCnt);
        }
    }
    if(found == 0)
    {
        printf("There are no even factors for the given number.\n");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number to print its even factors:\n");
    scanf("%d", &iValue);

    PrintEvenFactors(iValue);

    return 0;
}
