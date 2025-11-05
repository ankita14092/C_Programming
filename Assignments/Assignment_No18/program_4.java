class Logic
{
    void sumEvenOddDigits(int num)
    {
     int iDigit = 0;
     int iSum1 = 1;
     int iSum2 = 1;
   if(num < 0)
    {
        num = -num;
    }

    while(num !=0)
    {
        iDigit = num % 10;
       if(iDigit % 2 == 0)
       { 
        iSum1 += iDigit;
       }
       else
       {
        iSum2 += iDigit;
       }
        num = num / 10 ;
    }

    System.out.println (iSum1 + iSum2);
        
    }
}
class program_4
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);

    }
}