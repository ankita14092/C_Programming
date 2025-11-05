class Logic 
{
    void countEvenOddRange(int n)
    {
        int iCnt = 0;
        int even = 0;
        int odd = 0;

        for (iCnt = 1; iCnt <= n;iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            even ++;     
        }
        else
        {
            odd ++;    
        }
    }
     System.out.println("Total even numbers : "+even);
     System.out.println("Total odd numbers : "+odd);   
    }

}
class program_2
{
    public static void main(String[] args) 
    {
     Logic obj = new Logic();
     obj.countEvenOddRange(50);   
    }
}