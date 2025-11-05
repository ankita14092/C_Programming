class Logic
{
    void FindFactorial(int num)

    {
        int iCnt = 0;

        for(iCnt=1;iCnt<= num;iCnt++)
        {
            if(num % iCnt == 0)
            {
                System.out.println(iCnt);
            }
        }
    }  

}

class program_3
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.FindFactorial(5);
        
    }
}