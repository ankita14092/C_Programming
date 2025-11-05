class Logic
{
    void checkPalindrome (int num )
    {
        int number = num;
        int iCnt = 0;
        int iCount = 0;
        int rev = 0;

        for (iCnt = num;iCnt>0;iCnt/=10)
        {
            iCount++;
        }
        for(iCnt = 0;iCnt < iCount;iCnt++)
        {
            int iDigit = num % 10;
            rev = rev * 10 + iDigit ;
            num/=10;
        }

        if(number == rev)
        {
            System.out.println(number+ "  is a palindrome");
        }
        else
        {
            System.out.println(number+"  in not palindrome");
        }

    }

}
class program_2
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
        obj.checkPalindrome(1234);
        
    }
}