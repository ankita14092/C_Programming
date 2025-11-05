class Logic
{
    void CalculateSum(int n)
    {   int iCnt = 0;
        int iSum = 0;

        for(iCnt = 0;iCnt<=n;iCnt++)
        {
            iSum += iCnt;
        }
        System.out.println(iSum);
    }

}

class program_1
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.CalculateSum(10);
        
    }
}