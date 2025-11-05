class Logic 
{
    void productOfDigits(int num)
    {
        int iCnt = 0;
        int multi = 1;

        for (iCnt = 0; iCnt < num;iCnt+=2)
        {
            
            multi *= iCnt;
            
        }
        System.out.println(multi);
    }
}
class program_1
{
    public static void main(String[] args)
    {
        Logic obj = new Logic();
        obj.productOfDigits(234);
        
    }
}