#include<stdio.h>
void Display(int iNo)
{
        if (iNo < 0)
    {
        iNo = -iNo;
    }

    if (iNo == 0)
    {
        printf("zero\n");
    }
    else if (iNo == 1)
    {
        printf("one\n");
    }
    else if (iNo == 2)
    {
        printf("two\n");
    }
    else if (iNo == 3)
    {
        printf("three\n");
    }
    else if (iNo == 4)
    {
        printf("four\n");
    }
    else if (iNo == 5)
    {
        printf("five\n");
    }
    else if (iNo == 6)
    {
        printf("six\n");
    }
    else if (iNo == 7)
    {
        printf("seven\n");
    }
    else if (iNo == 8)
    {
        printf("eight\n");
    }
    else if (iNo == 9)
    {
        printf("nine\n");
    }
    else
    {
        printf("Invalid number\n");
    }
}


int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;

}