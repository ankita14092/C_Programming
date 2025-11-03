#include<stdio.h>
double FhtoCs(float fTemp)
{
    double celsius = 0.0;

    celsius = (fTemp - 32 )*(5.0/9.0);

    return celsius ;

}
int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f",&fValue);

    dRet = FhtoCs(fValue);

    printf("Temprature in Celsius is : %f",dRet);

    return 0;
}