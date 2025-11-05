class Logic
{
    void checkDivisible(int num)
    {
        if(num % 5 == 0 && num % 11 == 0)
        {
            System.out.println(num+" is Divisible by 5 and 11 Both");
        }
        else if(num % 5 == 0)
        {
            System.out.println(num+" is Divisible by 5");
        }
        else if( num % 11 == 0)
        {
            System.out.println(num+" is Divisible by 11");
        }
        else
        {
            System.out.println(num +" is not divisible by 11 and 5");
        }
    }


}
class program_3
{
    public static void main(String[] args) 
    {
        Logic obj = new Logic();
        obj.checkDivisible(55);
        
    }
}