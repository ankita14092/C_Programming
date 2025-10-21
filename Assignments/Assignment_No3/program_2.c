/*
2.Write a program which accept number from user and print even factors of that number.
Inpurt : 24
Output : 1 2 4 6 8 12 
*/
#include<stdio.h>
void PrintDisplayFactors(int iNo)
{
    int iCnt = 1;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt ) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}
int main()
{
    int iValue = 0;
    printf("Enter number to print its even factors:\n");
    scanf("%d", &iValue);

    PrintDisplayFactors(iValue);

    return 0;
}