#include<stdio.h>

double SquareMeter(int iValue)
{
    double feet  = 0.0929;
    double Ans = 0.0;

    Ans = feet * iValue ;

    return Ans;

}
int main()
{
    int iValue = 0;
    double dRet = 0;

    printf("Enter area in square feet");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Value in Square meter is : %lf",dRet);

    return 0;
}