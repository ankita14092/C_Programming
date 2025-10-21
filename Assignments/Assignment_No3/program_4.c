/*
    4.Accept one character from user and convert case of that character.
    Inout : a
    Output : A
    Input : D
    Output : d
*/

#include<stdio.h>
char ConvertCase(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        return ch + 32;             // ASCII  Value of A=65 a=97 : difference is 32
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        return ch - 32;
    }
    else
    {
        return ch;
    }
}
int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter character:\n");
    scanf("%c", &cValue);

    cRet = ConvertCase(cValue);

    printf("Converted character is: %c\n", cRet);

    return 0;
}