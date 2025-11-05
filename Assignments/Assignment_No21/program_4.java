class Logic
{
    void countFactors(int num)
    {
        int iCnt = 0;
        int count = 0;
         for (iCnt = 1; iCnt <= num;iCnt++)
    {
        if(num % iCnt == 0)
        {
           count++;
        }
    }
    System.out.println(count);
    }
}
class program_4
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.countFactors(20);   
    }
}