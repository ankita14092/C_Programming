class Logic
{
    void checkPerfect(int num)
    {
        int iCnt = 0;
        int sum = 0;

        for (iCnt = 1;iCnt <= num/2;iCnt++)
        {
            if(num % iCnt ==0)
            {
                sum +=iCnt;
            }
        }
        if(sum == num)
        {
            System.out.println(num+" is a perfect number");
        }
        else 
        {
            System.out.println(num + " is not a perfect number");
        }

    }
}
class program_3
{
    public static void main(String a[])
    {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}