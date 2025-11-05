class Logic
{
    void sumEvenNumbers(int n)
    {
        int iCnt = 0;
        int sum = 0;

        for (iCnt = 0; iCnt <= n;iCnt+=2)
        {
            
            sum += iCnt;

            System.out.println(sum);
        }
    }

}
class program_1
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);    
    }
}