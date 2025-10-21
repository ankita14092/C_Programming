/*
1.Write a program which accept one number from user and print that number of even numbers on screen.
Input : 7
Output : 2 4 6 8 10 12 14
*/
#include<stdio.h>
void PrintEvenNumbers(int iNo)
{
    int iCnt = 0;
    int Even = 2;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",Even);
        Even += 2;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number of even numbers to print:\n");
    scanf("%d", &iValue);

    PrintEvenNumbers(iValue);

    return 0;
}
