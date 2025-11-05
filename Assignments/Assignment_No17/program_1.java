class Logic
{
    void sumOfDigits(int num)
    {
      int iCnt = 0;
    int iSum = 0;
    for (iCnt = 1; iCnt <= num ; iCnt++)
    {
        iSum = iCnt + iSum;
    }
    System.out.println(iSum);
    }
    
}

class program_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumOfDigits(1234);
    }
}