
class Logic
{
    void countDigits(int num)
    {
        int count = 0;
        int iCnt = 0;

        for(iCnt = num;iCnt !=0;iCnt = iCnt/10 )
        {
            count++;
        }
        System.out.println(count);
    }
}
class program_5
{
    public static void main(String[] args) 
    {
        
        Logic obj = new Logic();
        obj.countDigits(7865);
        
    }
}