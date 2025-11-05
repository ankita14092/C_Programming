class Logic
{
    void reverseNumber(int num)

    {
        int rev = 0;
        while(num !=0)
    {
        rev = num % 10;
    
        System.out.println(rev);
        
        num = num / 10 ;
    }
    }  

}

class program_4
{
    public static void main(String args[]) 
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
        
    }
}