class Logic
{
    void calculatePower(int base, int exp)
    {
        int result = 1;
        int iCnt = 0;

        for ( iCnt = 1; iCnt <= exp;iCnt++)
        {
            result *= base;
        }
        System.out.println(result);
    }
}
class program_5
{    public static void main(String[] args) 
    {
      Logic obj = new Logic();
      obj.calculatePower(2,5);  
    }
}